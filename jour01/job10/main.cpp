#include <iostream>

int main(){
    int prix;
    int quantite;
    double TVA;

    std::cout << "veuillez entrer le prix au kilo : ";
    std::cin >> prix;

    std::cout << "veuillez entrer le nombre de kilos voulu : ";
    std::cin >> quantite;

    std::cout << "veuillez entrer le taux de la TVA : ";
    std::cin >> TVA;

    double TTC = ((prix * quantite) * (1 + TVA / 100));

    std::cout << "le prix TTC est de : " << TTC << " euros";
    return 0;
}