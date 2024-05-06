#include "Joueur.hpp"

int main() {
    Joueur joueurParDefaut;
    joueurParDefaut.position(); 

    Joueur joueurAvecCoordonnees(3, 7);
    joueurAvecCoordonnees.position();

    Joueur joueurAvecNom(5, 5, "Alice");
    joueurAvecNom.position(); 

    return 0;
}