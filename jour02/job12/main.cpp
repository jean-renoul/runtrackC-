#include <iostream>

double suite (double n){
    double result = 0;
        for (double i = 1; i <= n; i++){
            result += (1 / i);
        }
        return result;
    }

int main (){
    double n = 5;
    double result = suite(n);

    std::cout << result;

    return 0;
}