#include <iostream>
#ifndef JOUEUR_HPP
#define JOUEUR_HPP

class Joueur {
public:
    Joueur(){
        x = 0;
        y = 0;
    }

    Joueur(double x, double y);
    
    Joueur (double x, double y, const std::string& name);

    void position();
    void move(double new_x, double new_y);

private:
    double x;
    double y;
    std::string name;
};

#endif