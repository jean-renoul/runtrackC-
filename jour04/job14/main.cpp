#include <iostream>

int main() {
    int x = 12;
    int& ref_x = x; // Déclaration d'une référence vers x

    std::cout << "Valeur initiale de x : " << x << std::endl;

    // Modification de la valeur de x via la référence
    ref_x = 20;

    std::cout << "Nouvelle valeur de x après modification via la référence : " << x << std::endl;

    return 0;
}