#ifndef OPERATION_HPP
#define OPERATION_HPP

class Operation {
public:
    Operation(); 

    double addition(double a, double b) const;
    double soustraction(double a, double b) const;
    double multiplication(double a, double b) const;
    double division(double a, double b) const;
};

#endif