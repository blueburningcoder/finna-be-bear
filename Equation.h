#ifndef EQUATION_H
#define EQUATION_H


class Equation {
private:
    // 0 < A..I <= 9
    // int varA, varB, varC, varD, varE, varF, varG, varH, varI;
    bool already[8] = { false, false, false, false, false, false, false, false };
    short ind[9] = { 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int first = -1;

public:
    Equation(){}
    void bruteForce();
    void logical_try1();
    void logical();
    void testing(int i, int to_change);

};


#endif
