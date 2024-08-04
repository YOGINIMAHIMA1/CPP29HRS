#include <iostream>
int main() {
    if (sizeof(void*) == 8) {
        std::cout << "System is 64-bit" << std::endl;
    } else if (sizeof(void*) == 4) {
        std::cout << "System is 32-bit" << std::endl;
    } else {
        std::cout << "Unknown architecture" << std::endl;
    }
    return 0;}
