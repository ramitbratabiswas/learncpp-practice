#include <iostream>
#include "io.h"

int readNumber() {
    int x;
    std::cin >> x;
    return x;
}

void writeAnswer(int x) {
    std::cout << x << std::endl;
}