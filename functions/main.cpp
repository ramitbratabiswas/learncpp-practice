#include <iostream>
#include "io.h"

int main() {

    std::cout << "input first number" << std::endl;
    int a { readNumber() };
    
    std::cout << "input second number" << std::endl;
    int b { readNumber() };

    std::cout << "result of adding them: " << std::endl;
    writeAnswer(a + b);

    return 0;
}