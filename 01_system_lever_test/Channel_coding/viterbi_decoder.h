#ifndef VITERBI_DECODE_H
#define VITERBI_DECODE_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <float.h>
#include <time.h>
#include <math.h>
#include <limits.h>

#define SIZE_OF_BUF 256
#define PI 3.1415
#define MAX_ITERATIONS 6 // Số lần lặp tối đa của giải mã Turbo
#define INF 1e9 // Giá trị vô cực để xử lý log-domain
#define MAX_STATES 64 // Số trạng thái tối đa của bộ giải mã Viterbi
#define MAX_TRELLIS_STEPS 256 // Số bước thời gian tối đa của bộ giải mã Viterbi

typedef struct {
    double path_metric;
    int prev_state;
    int bit;
} State;

// Block Input Data
void Input_data_string(char *input_data, int *length_input_data);
void Trans_string_to_binary(char *i_input_data, int *o_input_buf, int i_length_input_data, int *o_length_input_buf);
void Block_input_data(int *k, int *m, int *n, int G[][SIZE_OF_BUF], int *o_input_buf, int *o_length_input_buf);

// Block Convolutional Encoder
void Block_convolutional_codes(int k, int n, int *i_input_buf, int i_length_input_buf, int G[][SIZE_OF_BUF], int *o_conv_buf, int *o_length_conv_buf);

// Block Add White Noise
double generate_gaussian_noise(double mean, double std_dev);
void Block_add_noise_signal_with_SNR(int n, int m, int *signal, int length_signal, double snr_db, double *noise_signal);
// Block Viterbi Decoder
void Block_hard_decoder(int k, int m, int n, int G[][SIZE_OF_BUF], int *i_conv_buf, int i_length_conv_buf, int *o_output_buf, int *o_length_output_buf);
void Block_soft_decoder(int k, int m, int n, int G[][SIZE_OF_BUF], double *i_conv_buf, int i_length_conv_buf, int *o_output_buf, int *o_length_output_buf);

//// Using Hard Decision
void Trans_double_to_int(double *noise_signal, int length_noise_signal, int *viterbi_buf);
int hamming_distance(int *data, int *expected, int length);

//// Using Soft Decision
double euclidean_distance(double received[], int expected[], int n);

// Cal BER
double calculate_BER(int *original_bits, int *decoded_bits, int length_bits);
void Table_Cal_BER(int k, int m, int n, int G[][SIZE_OF_BUF], int *original_buf, int length_original, int *conv_buf, int length_conv, int number_test_SNR);

// // Hàm tính giá trị lớn nhất giữa hai số (dùng trong Max-Log-MAP)
// double max(double a, double b);
// void compute_gamma(double *gamma, int k, int m, int n, int G[][SIZE_OF_BUF], int *conv_buf, double *L_e, int length_conv_buf, int decoder_id);
// void compute_alpha(double *alpha, double *gamma, int k, int m, int length_conv_buf);
// void compute_beta(double *beta, double *gamma, int k, int m, int length_conv_buf);
// void compute_llr(double *llr, double *alpha, double *beta, double *gamma, int k, int m, int G[][SIZE_OF_BUF], int length_conv_buf, int *turbo_buf);
// void Block_Turbo_decoder(int k, int m, int n, int G[][SIZE_OF_BUF], int *conv_buf, int length_conv_buf, int *turbo_buf, int *length_turbo_buf);

#endif