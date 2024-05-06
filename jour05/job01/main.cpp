#include "Joueur.hpp"

int main() {
    Joueur joueur(0, 0);

    joueur.position();

    joueur.move(5, 5);

    joueur.position();

    return 0;
}