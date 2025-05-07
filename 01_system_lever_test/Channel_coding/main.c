#include "viterbi_decoder.h"

int main() {
    // Block input
    int k, m, n;
    int G[SIZE_OF_BUF][SIZE_OF_BUF];
    int input_buf[SIZE_OF_BUF];
    int length_input_buf = 0;

    Block_input_data(&k, &m, &n, G, input_buf, &length_input_buf);
    printf("\n -------------------------------- \n");
    printf("Input data: ");
    for (int i = 0; i < length_input_buf; i++) {
        printf("%d", input_buf[i]);
    }
    printf("\n");

    // Block convolutional codes
    int conv_buf[SIZE_OF_BUF];
    int length_conv_buf = 0;
    Block_convolutional_codes(k, n, input_buf, length_input_buf, G, conv_buf, &length_conv_buf);
    printf("\n -------------------------------- \n");
    printf("Convolutional codes: ");
    for (int i = 0; i < length_conv_buf; i++) {
        printf("%d", conv_buf[i]);
    }
    printf("\n");

    // Block Add White Noise
    double noise_signal[SIZE_OF_BUF];
    double snr_db;
    printf("\n -------------------------------- \n");
    printf("Enter the SNR in dB: ");
    if (scanf("%lf", &snr_db) != 1) {
        fprintf(stderr, "Error: Invalid input for SNR. Please enter a valid number.\n");
        exit(1); // Thoát chương trình nếu nhập sai
    }

    Block_add_noise_signal_with_SNR(n, m, conv_buf, length_conv_buf, snr_db, noise_signal);
    printf("Noise signal: ");
    for (int i = 0; i < length_conv_buf; i++) {
        printf(" %.4f ", noise_signal[i]);
    }
    printf("\n");

    // Block Viterbi Decoder
    int viterbi_buf[SIZE_OF_BUF];
    int length_viterbi_buf = 0;
    printf("\n -------------------------------- \n");
    printf("Block Decoder\n");
    printf("Input Block Decoder: ");
    Trans_double_to_int(noise_signal, length_conv_buf, viterbi_buf);
    for (int i = 0; i < length_conv_buf; i++) {
        printf("%d", viterbi_buf[i]);
    }
    length_viterbi_buf = length_conv_buf;
    printf("\n");

    // Hard Decision
    int Hard_decision[SIZE_OF_BUF];
    int length_hard_decision = 0;
    double Ber_hard_decision = 0.0;
    Block_hard_decoder(k, m, n, G, viterbi_buf, length_viterbi_buf, Hard_decision, &length_hard_decision);
    printf("\n1. Hard Decision Decoder: ");    
    for(int i = 0; i < length_hard_decision; i ++){
        printf("%d", Hard_decision[i]);        
    }
    Ber_hard_decision = calculate_BER(input_buf, Hard_decision, length_input_buf);
    printf("\t BER: %lf", Ber_hard_decision);
    printf("\n");
    // Soft Decision
    int Soft_decision[SIZE_OF_BUF];
    int length_Soft_decision = 0;
    double Ber_soft_decision = 0.0;
    Block_soft_decoder(k, m, n, G, noise_signal, length_conv_buf, Soft_decision, &length_Soft_decision);
    printf("\n2. Soft Decision Decoder: ");
    for (int i = 0; i < length_Soft_decision; i++) {
        printf("%d", Soft_decision[i]);
    }
    Ber_soft_decision = calculate_BER(input_buf, Soft_decision, length_input_buf);
    printf("\t BER: %lf", Ber_soft_decision);
    printf("\n");
    printf("\n -------------------------------- \n");
    int number_BER = 0;
    printf("BER in dB: ");
    if (scanf("%d", &number_BER) != 1) {
        fprintf(stderr, "Error: Invalid input for BER. Please enter a valid number.\n");
        exit(1);
    }
    Table_Cal_BER(k, m, n, G, input_buf, length_input_buf, conv_buf, length_conv_buf, number_BER);

    return 0;
}