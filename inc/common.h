#include <stdio.h>

extern "C" {

void print_bytes(unsigned char* input, size_t num_bytes) {
    for (size_t i = 0; i < num_bytes; ++i) {
        printf("%.2x ", input[i]);
    }
    printf("\n");
}

void print_int(int i) {
    printf("printing the binary representation of int %d\n", i);
    print_bytes((unsigned char*)&i, sizeof(i));
}

void print_float(float f) {
    printf("printing the binary representation of float %f\n", f);
    print_bytes((unsigned char*)&f, sizeof(f));
}

} //extern "C"