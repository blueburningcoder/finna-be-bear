#include <iostream>
#include "Equation.h"


// simply brute-forcing every combination possible
void Equation::bruteForce() {
    for (int a = 0; a < 9; a++)
        for (int b = 0; b < 9; b++)
            for (int c = 0; c < 9; c++)
                for (int d = 0; d < 9; d++)
                    for (int e = 0; e < 9; e++)
                        for (int f = 0; f < 9; f++)
                            for (int g = 0; g < 9; g++)
                                for (int h = 0; h < 9; h++)
                                    for (int i = 0; i < 9; i++)
                                        std::cout << a << b << c << d << e << f << g << h << i << std::endl;
}


void Equation::logical_try1() {

    int temp = 0, counter = 362880;


    for(int i = 0; i < counter; i++) {

        if (i % 71 == 0 && i != 0)
            i += temp++, counter += temp;

        short tmp = ind[i % 9];
        ind[i % 9] = ind[(i + 1) % 9];
        ind[(i + 1) % 9] = tmp;

        for (int j = 0; j < 9; j++)
            std::cout << ind[j];
        std::cout << " ";
        // std::cout << std::endl;
    }
}



void Equation::logical() {
    for (int i = 0; i < 362880; i++) {
        // std::cout << i << std::endl;
        int to_change = -1;
        short tmp = 0;
        for (int j = 0; j < 8; j++)
            if (!already[j] && to_change == -1)
                to_change = j;
        if (to_change == -1) {
            for (int k = 0; k < 8; k++)
                already[k] = false;
            to_change = 0;
        }
        tmp = ind[to_change];
        // std::cout << "tmp: " << tmp << std::endl;
        ind[to_change] = ind[to_change + 1];
        ind[to_change + 1] = tmp;
        for (int j = to_change; j >= 0; j--)
            already[j] = false;
        already[to_change] = true;

        testing(i, to_change);

        for (int j = 0; j < 9; j++)
            std::cout << ind[j];
        std::cout << std::endl;
    }
    // TODO: after 256 changes, everything is repeated and going in the other direction
}


void Equation::testing(int i, int to_change) {
    for (int j = 0; j < 9; j++)
        if (ind[j] > 9 && first == -1) {
            first = i, std::cout << "FIRST at " << i << " "
                       << to_change << std::endl;

            for (int k = 0; k < 9; k++)
                std::cout << ind[k] << " ";
            std::cout << std::endl;
        }
}