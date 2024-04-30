#include <iostream>

int main(){
    int a, b, i;

    std::cout << "Veuillez entrer un premier nombre : ";
    std::cin >> a;

    std::cout << "Veuillez entrer un second nombre : ";
    std::cin >> b;

    for (i = a; i <= b; i++){
        std::cout << i << "\n";
    }
    return 0;
    
}