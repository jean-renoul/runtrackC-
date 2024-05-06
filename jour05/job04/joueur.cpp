#include "Joueur.hpp"
#include <iostream>

Joueur::Joueur(double x, double y){
    this->x = x;
    this->y = y;
}

Joueur::Joueur(double x, double y, const std::string& name){
    this->x = x;
    this->y = y;
    this->name = name;
}

void Joueur::position() const {
    std::cout << "Player position: (" << this->x << ", " << this->y << ", " << this->name << ")\n";
}

void Joueur::move(double new_x, double new_y){
    this->x = new_x;
    this->y = new_y;
}

void Joueur::setName(const std::string& name) {
    this->name = name;
}

std::string Joueur::getName() const {
    return this->name;
}

double Joueur::getX() const {
    return this->x;
}

double Joueur::getY() const {
    return this->y;
}