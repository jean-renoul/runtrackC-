#include <iostream>

int main (){
    int A = 5;
    int B = 10;
    int C = 15;

    int* pA = &A;
    int* pB = &B;
    int* pC = &C;

    *pA = 1;
    *pB = 2;
    *pC = 3;

    std::cout << A << std::endl << B << std::endl << C;
    return 0;
}