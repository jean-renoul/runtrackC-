#include "Operation.hpp"

Operation::Operation() {}

double Operation::addition(double a, double b) const {
    return a + b;
}

double Operation::soustraction(double a, double b) const {
    return a - b;
}

double Operation::multiplication(double a, double b) const {
    return a * b;
}

double Operation::division(double a, double b) const {
    if (b == 0) {
        throw "Division by zero";
    }
    return a / b;
}