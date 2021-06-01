#include <iostream>

bool is_32bit() {
    return sizeof(void*) == 4;
}

bool is_64bit() {
    return sizeof(void*) == 8;
}

int main() {
    std::cout << "this machine is ";
    if (is_32bit()) {
        std::cout << "32bit";

    } else if(is_64bit()) {
        std::cout << "64bit";

    } else {
        "completely and utterly broken";
    }

    std::cout << std::endl;
    return 0;
}