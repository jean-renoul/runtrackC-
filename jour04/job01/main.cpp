#include <iostream>

int main (){
    const int number = 19;

    const int* p = &number;

    std::cout<< *p;
    return 0;
}