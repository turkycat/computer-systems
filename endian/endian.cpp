#include <stdio.h>

bool is_little_endian() {
    int i = 1;
    unsigned char *chars = reinterpret_cast<unsigned char *>(&i);
    return chars[0] > chars[1];
}

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

int main() {
    printf("this machine is %s endian\n", is_little_endian() ? "little" : "big");
    print_int(113);
    print_float(3.6f);
}