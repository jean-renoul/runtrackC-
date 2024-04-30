#include <iostream>

main (){
    int valeur;
    int somme;

    for (int i = 0;i < 5; i++){
        std::cin >> valeur;
        somme += valeur;
    }

    double moyenne = static_cast<double>(somme) / 5;
    std::cout << moyenne;
    return 0;
}