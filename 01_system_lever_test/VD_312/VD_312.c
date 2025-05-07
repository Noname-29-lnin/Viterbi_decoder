#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 2     // number of output
#define M 1     // number of input
#define K 3     // constaint length

#define STATE 4 // number of state
#define SIZE_OF_BUF 256// max size of buffer
#define MAX_METRIC 1000     // max number of metric4

#define IDLE 0
#define S0   1
#define S1   2
#define S2   3
#define S3   4
int state = S0;
int nstate = IDLE;

// Local Var
int G[2][K] = {{1, 1, 1}, {1, 0, 1}};

void Input_data_string(char *input_data, int *length_input_data);
void Trans_string_to_binary(char *i_input_data, int *o_input_buf, int i_length_input_data, int *o_length_input_buf);
void Block_input_data(int *o_input_buf, int *o_length_input_buf);
void Block_convolutional_codes(int *i_input_buf, int i_length_input_buf, int *o_conv_buf, int *o_length_conv_buf);
void Block_viterbi_decod(int *o_input_buf, int *o_length_input_buf);
void HD(int i_data[N], int i_exp[N], int *o_HD);
void BMU(int i_data[N], int o_branch_metric[STATE]);
void ACSU(int i_branch_metric[STATE], int i_path_metric[STATE], int o_path_metric[STATE]);
void PMU(int i_path_metric[STATE], int o_path_metric[STATE]);
void SPMU(int i_path_metric[STATE], int *o_decision_bit);
int main(){
    printf("\n------------------- Input Data -------------------\n");
    int input_data[SIZE_OF_BUF];
    int length_input_data = 0;
    Block_input_data(input_data, &length_input_data);
    printf("\nInput data: ");
    for(int i = 0; i < length_input_data; i ++){
        printf("%d", input_data[i]);
    }
    printf("\n");
    printf("\n------------- Ouput Conv Data -------------\n");
    int conv_data[SIZE_OF_BUF];
    int length_conv_data = 0;
    Block_convolutional_codes(input_data, length_input_data, conv_data, &length_conv_data);
    printf("\nConv Data: ");
    for(int i = 0; i < length_conv_data; i ++){
        printf("%d", conv_data[i]);
    }
    printf("\n");
    printf("\n------------- Viterbi Decoder -------------\n");
    int vd_conv_data[SIZE_OF_BUF];
    int length_vd_conv_data = 0;
    Block_viterbi_decod(vd_conv_data, &length_vd_conv_data);
    int i_viterbi_buf[N] = {0};
    int o_branch_metric[STATE] = {0};
    int o_path_metric[STATE] = {0, 3, 3, 3};
    int i_path_metric[STATE] = {0};
    int viterbi_data[SIZE_OF_BUF];
    int length_viterbi_data = 0;
    int o_decision_bit = 0;

    for(int i = 0; i < length_vd_conv_data; i += N){
        i_viterbi_buf[0] = vd_conv_data[i + 1];
        i_viterbi_buf[1] = vd_conv_data[i];
        printf("\nInput Viterbi: %d%d", i_viterbi_buf[0], i_viterbi_buf[1]);

        BMU(i_viterbi_buf, o_branch_metric);
        PMU(o_path_metric, i_path_metric);
        ACSU(o_branch_metric, i_path_metric, o_path_metric);
        SPMU(o_path_metric, &o_decision_bit);
        viterbi_data[length_viterbi_data ++] = o_decision_bit;
    }
    printf("\nViterbi Data: ");
    for(int i = 0; i < length_viterbi_data; i ++){
        printf("%d", viterbi_data[i]);
    }
    printf("\n");
    return 0;
}
// Block Input Data
void Input_data_string(char *input_data, int *length_input_data) {
    if (fgets(input_data, SIZE_OF_BUF, stdin) == NULL) {
        printf("Error: Can't read input data\n");
        exit(1);
    }
    *length_input_data = strlen(input_data);
}

void Trans_string_to_binary(char *i_input_data, int *o_input_buf, int i_length_input_data, int *o_length_input_buf) {
    if (i_input_data[i_length_input_data - 1] == '\n') {
        i_input_data[i_length_input_data - 1] = '\0';
        i_length_input_data--;
    }

    int i = 0;
    while (i_input_data[i] != '\0') {
        if (i_input_data[i] == '0') {
            o_input_buf[i] = 0;
        } else if (i_input_data[i] == '1') {
            o_input_buf[i] = 1;
        } else {
            printf("Error: Input data is not binary\n");
            exit(1);
        }
        i++;
    }
    *o_length_input_buf = i;
}

void Block_input_data(int *o_input_buf, int *o_length_input_buf){
    char input_data[SIZE_OF_BUF];
    int length_input_data = 0;
    printf("Input data: ");
    Input_data_string(input_data, &length_input_data);
    Trans_string_to_binary(input_data, o_input_buf, length_input_data, o_length_input_buf);
    printf("The constraint length K = 3\n");
    printf("The number of input M = 1\n");
    printf("The number of output N = 2\n");
    printf("Enter the Generator Polynomial Matrix (G[n][k]): = [(1 1 1) (1 0 1)]\n" );
}

// Block Convolutional Encoder
void Block_convolutional_codes(int *i_input_buf, int i_length_input_buf, int *o_conv_buf, int *o_length_conv_buf) {
    
    int shift_reg[SIZE_OF_BUF] = {0};  // Thanh ghi dich

    for (int i = 0; i < i_length_input_buf; i++) {
        // Dich thanh ghi
        for (int j = K - 1; j > 0; j--) {
            shift_reg[j] = shift_reg[j - 1];
        }
        shift_reg[0] = i_input_buf[i];

        // Ma hoa tich chap
        for (int j = 0; j < N; j++) {
            int sum = 0;
            for (int l = 0; l < K; l++) {
                sum ^= (G[j][l] & shift_reg[l]);
            }
            o_conv_buf[*o_length_conv_buf] = sum;
            (*o_length_conv_buf)++;
        }
    }
}

// Block Viterbi Decoder

void Block_viterbi_decod(int *o_input_buf, int *o_length_input_buf){
    char viterbi_data[SIZE_OF_BUF];
    int length_viterbi_data = 0;
    printf("Viterbi data: ");
    Input_data_string(viterbi_data, &length_viterbi_data);
    Trans_string_to_binary(viterbi_data, o_input_buf, length_viterbi_data, o_length_input_buf);
}

// BMU
void HD(int i_data[N], int i_exp[N], int *o_HD){
    *o_HD = (i_data[1] ^ i_exp[1]) + (i_data[0] ^ i_exp[0]);
}
void BMU(int i_data[N], int o_branch_metric[STATE]){
    int exp_data[N] = {0};
    // BM0
    exp_data[0] = 0;
    exp_data[1] = 0;
    HD(i_data, exp_data, &o_branch_metric[0]);
    // BM1
    exp_data[0] = 1;
    exp_data[1] = 0;
    HD(i_data, exp_data, &o_branch_metric[1]);
    // BM2
    exp_data[0] = 0;
    exp_data[1] = 1;
    HD(i_data, exp_data, &o_branch_metric[2]);
    // BM3
    exp_data[0] = 1;
    exp_data[1] = 1;
    HD(i_data, exp_data, &o_branch_metric[3]);

    // printf
    printf("\n BM0 = %d, BM1 = %d, BM2 = %d, BM3 = %d", o_branch_metric[0], o_branch_metric[1], o_branch_metric[2], o_branch_metric[3]);
}
// ACSU
void ACSU(int i_branch_metric[STATE], int i_path_metric[STATE], int o_path_metric[STATE]){
    int metric_path[N] = {0};
    int compare_select = 0;
    // State 0
    metric_path[0] = i_branch_metric[0] + i_path_metric[0];
    metric_path[1] = i_branch_metric[3] + i_path_metric[1];
    compare_select = (metric_path[0] <= metric_path[1]) ? 1 : 0;
    o_path_metric[0] = (compare_select) ? metric_path[0] : metric_path[1];

    // State 1
    metric_path[0] = i_branch_metric[2] + i_path_metric[2];
    metric_path[1] = i_branch_metric[1] + i_path_metric[3];
    compare_select = (metric_path[0] <= metric_path[1]) ? 1 : 0;
    o_path_metric[1] = (compare_select) ? metric_path[0] : metric_path[1];

    // State 2
    metric_path[0] = i_branch_metric[3] + i_path_metric[0];
    metric_path[1] = i_branch_metric[0] + i_path_metric[1];
    compare_select = (metric_path[0] <= metric_path[1]) ? 1 : 0;
    o_path_metric[2] = (compare_select) ? metric_path[0] : metric_path[1];

    // State 3
    metric_path[0] = i_branch_metric[1] + i_path_metric[2];
    metric_path[1] = i_branch_metric[2] + i_path_metric[3];
    compare_select = (metric_path[0] <= metric_path[1]) ? 1 : 0;
    o_path_metric[3] = (compare_select) ? metric_path[0] : metric_path[1];

    // printf
    printf("\n iPM0 = %d, iPM1 = %d, iPM2 = %d, iPM3 = %d", i_path_metric[0], i_path_metric[1], i_path_metric[2], i_path_metric[3]);
    printf("\n oPM0 = %d, oPM1 = %d, oPM2 = %d, oPM3 = %d", o_path_metric[0], o_path_metric[1], o_path_metric[2], o_path_metric[3]);
}

// PMU
void PMU(int i_path_metric[STATE], int o_path_metric[STATE]){
    for(int i = 0; i < STATE; i ++){
        o_path_metric[i] = i_path_metric[i];
    }
}

// SPMU
extern int state;
void SPMU(int i_path_metric[STATE], int *o_decision_bit){
    printf("\nState = %d", state);
    switch(state){
        case S0:
            if(i_path_metric[0] <= i_path_metric[2]){
                // *o_decision_bit = 0;
                nstate = S0;
            }
            else{
                // *o_decision_bit = 1;
                nstate = S2;
            }
        break;
        case S1:
            if(i_path_metric[0] <= i_path_metric[2]){
                // *o_decision_bit = 0;
                nstate = S0;
            } else{
                // *o_decision_bit = 1;
                nstate = S2;
            }
        break;
        case S2:
            if(i_path_metric[1] <= i_path_metric[3]){
                // *o_decision_bit = 0;
                nstate = S1;
            } else{
                // *o_decision_bit = 1;
                nstate = S3;
            }
        break;
        case S3:
            if(i_path_metric[1] <= i_path_metric[3]){
                // *o_decision_bit = 0;
                nstate = S1;
            } else{
                // *o_decision_bit = 1;
                nstate = S3;
            }
        break;
        default:
            // *o_decision_bit = 0;
            nstate = S0;
        break;
    }
    state = nstate;
    switch(state){
        case S0:
            *o_decision_bit = 0;
            break;
        case S1:
            *o_decision_bit = 0;
            break;
        case S2:
            *o_decision_bit = 1;
            break;
        case S3:
            *o_decision_bit = 1;
            break;
        default:
            *o_decision_bit = 0;
            break;
    }
    // printf
    printf("\nNex State = %d", nstate);
    printf("\nDecision Bit = %d", *o_decision_bit);
}
