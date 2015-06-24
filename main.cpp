#include <iostream>
#include "Equation.h"



int main() {
    std::cout << "Hello World" << std::endl;


    // a # b # c # d # e # f # g # h # i = 60
    // a + 10 * b - c / d + 11 / e - f + 12 * g / h + i + 13 = 60

    Equation eq;
    eq.logical();


    return EXIT_SUCCESS;
}



