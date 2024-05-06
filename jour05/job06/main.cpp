#include <iostream>
#include "Personne.hpp"

int main()
{
    Personne joueur("Toto", 100, 50);
    Personne ennemi("Gobelin", 50, 25);
    Personne allie("Chevalier", 150, 75);

    std::cout << "Informations initiales :" << std::endl;
    joueur.afficherInfos();
    ennemi.afficherInfos();
    allie.afficherInfos();
    std::cout << std::endl;

    joueur.modifierNom("Tata");
    ennemi.modifierPV(200);
    allie.modifierDefense(100);

    std::cout << "Informations après modifications :" << std::endl;
    joueur.afficherInfos();
    ennemi.afficherInfos();
    allie.afficherInfos();

    return 0;
}