#include <iostream>

int main (){
    int entier, a, b;
    a = 5;
    b = 3;

    std::cin >> entier;

    if (entier >= b && entier <=a){
        std::cout << "GAGNE";
    }
    else {
        std::cout << "Perdu";
    }
    return 0;
}