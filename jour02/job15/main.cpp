#include <iostream>

int main () {
    int nombre;
    int i;
    int fibonacciArray[2];

    fibonacciArray[0] = 1;
    fibonacciArray[1] = 2;

    std::cout << "Veuillez rentrer un nombre" << std::endl;
    std::cin >> nombre;

    std::cout << 0 << " " << 1 << " " << fibonacciArray[0] << " " << fibonacciArray[1];

    for (i = 1; i <= nombre; ++i){
        if (i == fibonacciArray[0] + fibonacciArray[1]) {
            fibonacciArray[0] = fibonacciArray[1];
            fibonacciArray[1] = i;
            std::cout << " " << fibonacciArray[1];
        }
    }
    return 0;
}