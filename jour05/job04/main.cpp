#include "Joueur.hpp"

int main() {
    Joueur joueurParDefaut;
    joueurParDefaut.position(); 

    Joueur joueurAvecCoordonnees(3, 7);
    joueurAvecCoordonnees.position();

    Joueur joueurAvecNom(5, 5, "Alice");
    joueurAvecNom.position(); 

    joueurAvecNom.move(10, 10);
    joueurAvecNom.position();

    joueurAvecNom.setName("Bob");
    joueurAvecNom.position();

    return 0;
}