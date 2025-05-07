#include "viterbi_decoder.h"

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

void Block_input_data(int *k, int *m, int *n, int G[][SIZE_OF_BUF], int *o_input_buf, int *o_length_input_buf) {
    char input_data[SIZE_OF_BUF];
    int length_input_data = 0;

    printf("Input data: ");
    Input_data_string(input_data, &length_input_data);

    Trans_string_to_binary(input_data, o_input_buf, length_input_data, o_length_input_buf);

    do {
        printf("Enter the constraint length k: ");
    } while (scanf("%d", k) != 1 || *k < 1);

    do {
        printf("Enter the number of input bits m: ");
    } while (scanf("%d", m) != 1 || *m < 1);

    do {
        printf("Enter the number of output bits n: ");
    } while (scanf("%d", n) != 1 || *n < *m + 1);

    printf("Enter the Generator Polynomial Matrix (G[n][k]):\n");
    for (int i = 0; i < *n; i++) {
        printf("G%d(x): ", i);
        for (int j = 0; j < *k; j++) {
            while (scanf("%d", &G[i][j]) != 1) {
                printf("Invalid input. Enter an integer: ");
                while (getchar() != '\n');
            }
        }
    }
}

// Block Convolutional Encoder
void Block_convolutional_codes(int k, int n, int *i_input_buf, int i_length_input_buf, int G[][SIZE_OF_BUF], int *o_conv_buf, int *o_length_conv_buf) {
    int shift_reg[SIZE_OF_BUF] = {0};  // Thanh ghi dịch

    for (int i = 0; i < i_length_input_buf; i++) {
        // Dich thanh ghi
        for (int j = k - 1; j > 0; j--) {
            shift_reg[j] = shift_reg[j - 1];
        }
        shift_reg[0] = i_input_buf[i];

        // Mã hóa chập
        for (int j = 0; j < n; j++) {
            int sum = 0;
            for (int l = 0; l < k; l++) {
                sum ^= (G[j][l] & shift_reg[l]);
            }
            o_conv_buf[*o_length_conv_buf] = sum;
            (*o_length_conv_buf)++;
        }
    }
}

// Block Add White Noise
double generate_gaussian_noise(double mean, double std_dev) {
    double u1 = (double)rand() / RAND_MAX;
    double u2 = (double)rand() / RAND_MAX;
    double z0 = sqrt(-2.0 * log(u1)) * cos(2.0 * PI * u2);
    return mean + std_dev * z0;
}
void Block_add_noise_signal_with_SNR(int n, int m, int *signal, int length_signal, double snr_db, double *noise_signal) {
    (void) m;
    (void) n; 
    double signal_power = 0.0;
    // Tinhs cong suat trung binh cua tin hieu
    for (int i = 0; i < length_signal; i++) {
        signal_power += signal[i] * signal[i];
    }
    signal_power /= length_signal; // Trung bình công suất
    // Chuyen doi SNR từ dB sang linear
    double snr_linear = pow(10.0, snr_db / 10.0); // dB -> lan
    double noise_power = signal_power / snr_linear;
    // Tinh do lechj chuan cua nhieu
    double std_dev = sqrt(noise_power);

    for (int i = 0; i < length_signal; i++) {
         // Chuyển đổi tín hiệu nhị phân (0,1) thành BPSK (-1,1)
        //  int modulated_signal = (signal[i] == 0) ? -1 : 1;
        int modulated_signal = signal[i];
        noise_signal[i] = modulated_signal + generate_gaussian_noise(0.0, std_dev);
    }
}

// Block Viterbi Decoder
// Using hard decision
void Trans_double_to_int(double *noise_signal, int length_noise_signal, int *viterbi_buf) {
    for (int i = 0; i < length_noise_signal; i++) {
        // if (noise_signal[i] < 0) {
        if (noise_signal[i] < 0.5) {
        // if ((noise_signal[i] <= 0.5) && (noise_signal[i] >= -0.5)) {
            viterbi_buf[i] = 0;
        } else {
            viterbi_buf[i] = 1;
        }
    }
}

int hamming_distance(int *data, int *expected, int length) {
    int distance = 0;
    for (int i = 0; i < length; i++) {
        // distance += (data[i] == expected[i]) ? 0 : 1;
        distance += data[i] ^ expected[i];
    }
    return distance;
}

void Block_hard_decoder(int k, int m, int n, int G[][SIZE_OF_BUF], int *i_conv_buf, int i_length_conv_buf
                        , int *o_output_buf, int *o_length_output_buf) {
    (void)m;
    int shift_reg[SIZE_OF_BUF] = {0};  
    int decoded_buf[SIZE_OF_BUF] = {0};  
    int length_decoded_buf = 0;

    for (int i = 0; i < i_length_conv_buf; i += n) {
        int min_distance = n + 1; 
        int best_bit = 0; 
        
        // tại dữ liệu đàu vào (State) thì có 2 khả năng
        for (int test_bit = 0; test_bit < 2; test_bit++) { 
            int expected_codeword[n];

            // Tìm điều kiện hợp lệ của Bit tại State đó
            // Tinh gia tri expected_codeword
            for (int j = 0; j < n; j++) {
                expected_codeword[j] = 0;
                for (int l = 0; l < k; l++) {
                    expected_codeword[j] ^= (G[j][l] & ((l == 0) ? test_bit : shift_reg[l - 1]));
                }
            }
            // BMU
            int distance = hamming_distance(&i_conv_buf[i], expected_codeword, n);
            // ACSU
            if (distance < min_distance) {
                // PMU
                min_distance = distance;
                // SPMU
                best_bit = test_bit;
            }
        }
        
        // TB
        decoded_buf[length_decoded_buf++] = best_bit;

        // Tiếp tục với trạng thái tiếp theo
        // them gia tri Best_Bit vao thanh ghi va dich thanh ghi
        for (int j = k - 1; j > 0; j--) {
            shift_reg[j] = shift_reg[j - 1];
        }
        shift_reg[0] = best_bit;
    }

    memcpy(o_output_buf, decoded_buf, length_decoded_buf * sizeof(int));
    *o_length_output_buf = length_decoded_buf;
}

double euclidean_distance(double received[], int expected[], int n) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += (received[i] - expected[i]) * (received[i] - expected[i]);
    }
    return sqrt(sum);
}

void Block_soft_decoder(int k, int m, int n, int G[][SIZE_OF_BUF], double *i_conv_buf, int i_length_conv_buf, int *o_output_buf, int *o_length_output_buf) {
    (void)m;
    int shift_reg[SIZE_OF_BUF] = {0};  
    int decoded_buf[SIZE_OF_BUF] = {0};  
    int length_decoded_buf = 0;

    for (int i = 0; i < i_length_conv_buf; i += n) {
        double min_distance = INFINITY;
        int best_bit = 0;  

        for (int test_bit = 0; test_bit < 2; test_bit++) { 
            int expected_codeword[n];

            for (int j = 0; j < n; j++) {
                expected_codeword[j] = 0;
                for (int l = 0; l < k; l++) {
                    expected_codeword[j] ^= (G[j][l] & ((l == 0) ? test_bit : shift_reg[l - 1]));
                }
                expected_codeword[j] = (expected_codeword[j] == 0) ? -1 : 1;
            }

            double distance = euclidean_distance(&i_conv_buf[i], expected_codeword, n);

            if (distance < min_distance) {
                min_distance = distance;
                best_bit = test_bit;
            }
        }

        decoded_buf[length_decoded_buf++] = best_bit;

        // Dịch thanh ghi và cập nhật
        for (int j = k - 1; j > 0; j--) {
            shift_reg[j] = shift_reg[j - 1];
        }
        shift_reg[0] = best_bit;
    }

    memcpy(o_output_buf, decoded_buf, length_decoded_buf * sizeof(int));
    *o_length_output_buf = length_decoded_buf;
}

// Cal BER
double calculate_BER(int *original_bits, int *decoded_bits, int length_bits) {
    int error_count = 0;
    
    for (int i = 0; i < length_bits; i++) {
        if (original_bits[i] != decoded_bits[i]) {
            error_count++;
        }
    }

    return (double) error_count / length_bits;
}

void Table_Cal_BER(int k, int m, int n, int G[][SIZE_OF_BUF], int *original_buf, int length_original, int *conv_buf, int length_conv, int number_test_SNR) {
    int Viterbi_Decoder[SIZE_OF_BUF];    // gia tri sau khi lam tron
    int Hard_Decision_buf[SIZE_OF_BUF]; // gia tri sau khi decoder cua Hard decision
    int Soft_Decision_buf[SIZE_OF_BUF]; // gia tri sau khi decoder cua Soft decision 
    double Noise_buf[SIZE_OF_BUF];      // gia tri cua sau khi tinh nhieu tu Conv_buf

    double BER_Hard_Decision_buf[SIZE_OF_BUF]; // chuoi chua gia tri BER cua Hard decision qua tung gia doan
    double BER_Soft_Decision_buf[SIZE_OF_BUF]; // chuoi chua gia tri BER cua Soft decision qua tung gia doan

    int length_hard_decision, length_Soft_decision;

    int i = 0;
    double Value_SNR = 0;
    while (i < number_test_SNR) {
        Block_add_noise_signal_with_SNR(n, m, conv_buf, length_conv, Value_SNR, Noise_buf);
        // Hard Decision
        Trans_double_to_int(Noise_buf, length_conv, Viterbi_Decoder);
        Block_hard_decoder(k, m, n, G, Viterbi_Decoder, length_conv, Hard_Decision_buf, &length_hard_decision);
        BER_Hard_Decision_buf[i] = calculate_BER(original_buf, Hard_Decision_buf, length_original);
        // Soft Decision
        Block_soft_decoder(k, m, n, G, Noise_buf, length_conv, Soft_Decision_buf, &length_Soft_decision);
        BER_Soft_Decision_buf[i] = calculate_BER(original_buf, Soft_Decision_buf, length_original);
        
        Value_SNR += 5;
        i++;
    }

    printf("\n----------------------------------------------");
    printf("\nSNR(dB)\t|Hard_Decision\t|Soft_Decision\t|");
    for (int j = 0; j < number_test_SNR; j++) {
        printf("\n%d\t|%lf\t|%lf\t|", j * 5, BER_Hard_Decision_buf[j], BER_Soft_Decision_buf[j]);
    }
    printf("\n");
}

// // Hàm tính giá trị lớn nhất giữa hai số (dùng trong Max-Log-MAP)
// double max(double a, double b) {
//     return (a > b) ? a : b;
// }

// // Hàm tính xác suất chuyển trạng thái (branch metric) trong log-domain
// void compute_gamma(double *gamma, int k, int m, int n, int G[][SIZE_OF_BUF], 
//                    int *conv_buf, double *L_e, int length_conv_buf, int t) {
//     // Giả sử L_e là thông tin extrinsic từ bộ giải mã khác (hoặc xác suất tiên nghiệm)
//     // gamma[t][s'][s] là log xác suất chuyển từ trạng thái s' sang s tại thời điểm t
//     // Ở đây, chúng ta cần tính toán dựa trên dữ liệu nhận được và mô hình kênh AWGN
    
//     // Ví dụ đơn giản: Giả sử dữ liệu nhận được là soft values (LLR) từ conv_buf
//     for (int s_prime = 0; s_prime < (1 << m); s_prime++) {
//         for (int s = 0; s < (1 << m); s++) {
//             // Tính toán xác suất chuyển trạng thái dựa trên G và conv_buf
//             // Đây là phần cần tùy chỉnh theo cấu trúc mã hóa
//             double llr = 0.0; // Log-likelihood ratio (LLR)
//             gamma[t * (1 << m) * (1 << m) + s_prime * (1 << m) + s] = llr;
//         }
//     }
// }

// // Hàm tính xác suất tiến (alpha) trong log-domain
// void compute_alpha(double *alpha, double *gamma, int k, int m, int length_conv_buf) {
//     // Khởi tạo alpha[0][s] tại thời điểm t=0
//     alpha[0] = 0.0; // Trạng thái ban đầu là 0
//     for (int s = 1; s < (1 << m); s++) {
//         alpha[s] = -INF; // Các trạng thái khác có xác suất 0
//     }

//     // Tính alpha[t][s] cho t từ 1 đến length_conv_buf
//     for (int t = 1; t < length_conv_buf; t++) {
//         for (int s = 0; s < (1 << m); s++) {
//             double sum = -INF;
//             for (int s_prime = 0; s_prime < (1 << m); s_prime++) {
//                 double val = alpha[(t - 1) * (1 << m) + s_prime] + 
//                              gamma[t * (1 << m) * (1 << m) + s_prime * (1 << m) + s];
//                 sum = max(sum, val);
//             }
//             alpha[t * (1 << m) + s] = sum;
//         }
//     }
// }

// // Hàm tính xác suất lùi (beta) trong log-domain
// void compute_beta(double *beta, double *gamma, int k, int m, int length_conv_buf) {
//     // Khởi tạo beta[length_conv_buf-1][s] tại thời điểm cuối
//     beta[(length_conv_buf - 1) * (1 << m)] = 0.0; // Trạng thái kết thúc là 0
//     for (int s = 1; s < (1 << m); s++) {
//         beta[(length_conv_buf - 1) * (1 << m) + s] = -INF; // Các trạng thái khác có xác suất 0
//     }

//     // Tính beta[t][s] cho t từ length_conv_buf-2 về 0
//     for (int t = length_conv_buf - 2; t >= 0; t--) {
//         for (int s = 0; s < (1 << m); s++) {
//             double sum = -INF;
//             for (int s_prime = 0; s_prime < (1 << m); s_prime++) {
//                 double val = beta[(t + 1) * (1 << m) + s_prime] + 
//                              gamma[(t + 1) * (1 << m) * (1 << m) + s * (1 << m) + s_prime];
//                 sum = max(sum, val);
//             }
//             beta[t * (1 << m) + s] = sum;
//         }
//     }
// }

// // Hàm tính xác suất sau (LLR) và ra quyết định
// void compute_llr(double *llr, double *alpha, double *beta, double *gamma, 
//                  int k, int m, int G[][SIZE_OF_BUF], int length_conv_buf, int *turbo_buf) {
//     for (int t = 0; t < length_conv_buf; t++) {
//         double llr_1 = -INF; // Tổng xác suất log cho u_t = 1
//         double llr_0 = -INF; // Tổng xác suất log cho u_t = 0
        
//         for (int s_prime = 0; s_prime < (1 << m); s_prime++) {
//             for (int s = 0; s < (1 << m); s++) {
//                 double val = alpha[t * (1 << m) + s_prime] + 
//                              gamma[t * (1 << m) * (1 << m) + s_prime * (1 << m) + s] + 
//                              beta[t * (1 << m) + s];
//                 // Giả sử cạnh (s_prime, s) tương ứng với bit đầu vào u_t = 1 hoặc 0
//                 // Đây là phần cần tùy chỉnh dựa trên G
//                 int input_bit = get_input_bit(s_prime, s, G, m); // Hàm tự định nghĩa để lấy giá trị u_t
//                     if (input_bit == 1) {
//                         llr_1 = max(llr_1, val);
//                     } else {
//                         llr_0 = max(llr_0, val);
//                     }
//             }
//         }

//         // Tính LLR và ra quyết định
//         llr[t] = llr_1 - llr_0;
//         turbo_buf[t] = (llr[t] > 0) ? 1 : 0; // Quyết định cứng (hard decision)
//     }
// }

// // Hàm giải mã Turbo
// void Block_Turbo_decoder(int k, int m, int n, int G[][SIZE_OF_BUF], 
//                          int *conv_buf, int length_conv_buf, 
//                          int *turbo_buf, int *length_turbo_buf) {
//     // Khởi tạo các mảng tạm thời cho alpha, beta, gamma, và LLR
//     double *alpha = (double *)malloc(length_conv_buf * (1 << m) * sizeof(double));
//     double *beta = (double *)malloc(length_conv_buf * (1 << m) * sizeof(double));
//     double *gamma = (double *)malloc(length_conv_buf * (1 << m) * (1 << m) * sizeof(double));
//     double *llr = (double *)malloc(length_conv_buf * sizeof(double));
//     double *L_e1 = (double *)malloc(length_conv_buf * sizeof(double)); // Thông tin extrinsic từ decoder 1
//     double *L_e2 = (double *)malloc(length_conv_buf * sizeof(double)); // Thông tin extrinsic từ decoder 2

//     // Khởi tạo thông tin extrinsic ban đầu
//     memset(L_e1, 0, length_conv_buf * sizeof(double));
//     memset(L_e2, 0, length_conv_buf * sizeof(double));

//     // Số lần lặp giải mã Turbo
//     for (int iter = 0; iter < MAX_ITERATIONS; iter++) {
//         // Bộ giải mã 1 (Decoder 1): Sử dụng dữ liệu trực tiếp
//         compute_gamma(gamma, k, m, n, G, conv_buf, L_e2, length_conv_buf, 0);
//         compute_alpha(alpha, gamma, k, m, length_conv_buf);
//         compute_beta(beta, gamma, k, m, length_conv_buf);
//         compute_llr(llr, alpha, beta, gamma, k, m, G, length_conv_buf, turbo_buf);

//         // Cập nhật thông tin extrinsic L_e1 từ Decoder 1
//         for (int t = 0; t < length_conv_buf; t++) {
//             L_e1[t] = llr[t] - L_e2[t]; // Loại bỏ thông tin từ Decoder 2
//         }

//         // Bộ giải mã 2 (Decoder 2): Sử dụng dữ liệu sau khi chèn xen (interleaved)
//         // Giả sử ở đây chúng ta có một hàm interleave() để chèn xen dữ liệu
//         // compute_gamma, compute_alpha, compute_beta, compute_llr tương tự
//         // nhưng với dữ liệu đã được chèn xen

//         // Cập nhật thông tin extrinsic L_e2 từ Decoder 2
//         for (int t = 0; t < length_conv_buf; t++) {
//             L_e2[t] = llr[t] - L_e1[t]; // Loại bỏ thông tin từ Decoder 1
//         }
//     }

//     // Cập nhật độ dài đầu ra
//     *length_turbo_buf = length_conv_buf;

//     // Giải phóng bộ nhớ
//     free(alpha);
//     free(beta);
//     free(gamma);
//     free(llr);
//     free(L_e1);
//     free(L_e2);
// }