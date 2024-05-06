#include <iostream>
#include "Operation.hpp"

int main() {
    Operation operation;

    double a = 10.0;
    double b = 5.0;

    std::cout << "Addition: " << a << " + " << b << " = " << operation.addition(a, b) << std::endl;
    std::cout << "Subtraction: " << a << " - " << b << " = " << operation.soustraction(a, b) << std::endl;
    std::cout << "Multiplication: " << a << " * " << b << " = " << operation.multiplication(a, b) << std::endl;

    try {
        std::cout << "Division: " << a << " / " << b << " = " << operation.division(a, b) << std::endl;
        std::cout << "Division: " << a << " / 0 = " << operation.division(a, 0) << std::endl;
    } catch (const char* msg) {
        std::cerr << "Error: " << msg << std::endl;
    }

    return 0;
}