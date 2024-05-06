#ifndef PERSONNE_HPP
#define PERSONNE_HPP
#include <iostream>


class Personne {
public:
    Personne(std::string name, int pv, float def);

    void afficherInfos() const;
    void modifierNom(const std::string& nouveauNom);
    void modifierPV(int nouveauxPV);
    void modifierDefense(float nouvelleDefense);



private:
    std::string name;
    int pv;
    float def;
};
#endif