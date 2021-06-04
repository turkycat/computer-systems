#include "../inc/common.h"

bool is_little_endian() {
    int i = 1;
    unsigned char *chars = reinterpret_cast<unsigned char *>(&i);
    return chars[0] > chars[1];
}

int main() {
    printf("this machine is %s endian\n", is_little_endian() ? "little" : "big");
    print_int(113);
    print_float(3.6f);
}