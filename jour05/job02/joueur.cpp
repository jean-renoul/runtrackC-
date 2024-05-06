#include "Joueur.hpp"
#include <iostream>

Joueur::Joueur(double x, double y){
    this->x = x;
    this->y = y;
}
void Joueur::position() {
    std::cout << "Player position: (" << x << ", " << y << ")\n";
}

void Joueur::move(double new_x, double new_y){
    x = new_x;
    y = new_y;
}