#include <iostream>
#ifndef JOUEUR_HPP
#define JOUEUR_HPP

class Joueur {
public:
    Joueur(){
        this->x = 0;
        this->y = 0;
    }

    Joueur(double x, double y);
    
    Joueur (double x, double y, const std::string& name);

    void position() const;
    void move(double new_x, double new_y);

    void setName(const std::string& name);

    std::string getName() const;

    double getX() const;

    double getY() const;

private:
    double x;
    double y;
    std::string name;
};

#endif