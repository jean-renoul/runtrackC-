#include <iostream>

int main (){
    int number1 = 5;
    int number2 = 10;

    int* p1 = &number1;
    int* p2 = &number2;

    int temp = *p1;
    number1 = *p2;
    number2 = temp;

    std::cout << number1 << std::endl << number2;
    return 0;
}