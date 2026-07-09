#include "myHeader.h"
#include <iostream>

void greet() {
    std::cout << "Hello, World!" << std::endl;
}

int main() {
    greet(); // Chama a função que você criou
    return 0;
}


//g++ myHeader.cpp -o myHeader.exe
//.\myHeader.exe