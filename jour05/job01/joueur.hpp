#include <iostream>
#ifndef JOUEUR_HPP
#define JOUEUR_HPP

class Joueur {
public:
    Joueur(double x, double y);
    
    void position();
    void move(double new_x, double new_y);

private:
    double x;
    double y;
};

#endif