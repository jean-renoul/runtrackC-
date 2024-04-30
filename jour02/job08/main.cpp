#include <iostream>

int main(){
    int a, b, i;

    std::cout << "Veuillez entrer un premier nombre : ";
    std::cin >> a;

    std::cout << "Veuillez entrer un second nombre : ";
    std::cin >> b;

    i = a;

    do {
        std::cout << i << "\n";
        i++;
    } while (i <= b);
    return 0;    
}