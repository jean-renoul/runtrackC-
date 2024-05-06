#include <iostream>

// Fonction pour trouver la valeur maximale dans un tableau
int trouverMax(int tableau[], int taille) {
    // Vérification pour le cas d'un tableau vide
    if (taille == 0) {
        std::cerr << "Erreur : tableau vide." << std::endl;
        return -1; // Valeur arbitraire pour indiquer une erreur
    }

    // Initialisation de la valeur maximale avec le premier élément du tableau
    int max = tableau[0];

    // Parcours du tableau pour trouver la valeur maximale
    for (int i = 1; i < taille; ++i) {
        if (tableau[i] > max) {
            max = tableau[i];
        }
    }

    return max;
}

int main() {
    int tableau[] = {7, 3, 9, 2, 11, 5}; // Exemple de tableau
    int taille = sizeof(tableau) / sizeof(tableau[0]); // Calcul de la taille du tableau

    // Appel de la fonction pour trouver la valeur maximale
    int valeurMax = trouverMax(tableau, taille);

    // Affichage de la valeur maximale
    if (valeurMax != -1) {
        std::cout << "La valeur maximale dans le tableau est : " << valeurMax << std::endl;
    }

    return 0;
}