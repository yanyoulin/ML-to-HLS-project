#include "top.h"
#include "dense.h"
#include "gelu.h"
#include "weights.h"

void mlp_inference(data_t input[DIM], data_t output[DIM]) {
#pragma HLS array_partition variable=input complete
#pragma HLS array_partition variable=output complete

    data_t buffer0[DIM];
    data_t buffer1[DIM];
    data_t *cur = input;
    data_t *tmp = nullptr;
    data_t *next = buffer0;

    dense(cur, dense1_kernel, dense1_bias, next);
    tmp = cur;
    cur = next;
    next = tmp;

    dense(cur, dense2_kernel, dense2_bias, next);
    tmp = cur;
    cur = next;
    next = tmp;

    for (int i = 0; i < DIM; i++) {
#pragma HLS UNROLL
        next[i] = gelu(cur[i]);
    }
    tmp = cur;
    cur = next;
    next = tmp;

    for (int i = 0; i < DIM; i++) {
#pragma HLS UNROLL
        output[i] = cur[i];
    }
}
