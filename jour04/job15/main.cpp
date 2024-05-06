#include <iostream>

int main() {
    // Création du tableau
    int tableau[] = {1, 2, 3, 4, 5};

    // Parcours du tableau à l'aide d'une boucle et de références
    for (int& element : tableau) {
        std::cout << element << " "; // Affichage de chaque élément
    }
    std::cout << std::endl;

    return 0;
}