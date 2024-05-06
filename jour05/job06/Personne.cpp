#include "Personne.hpp"

Personne::Personne(std::string name, int pv, float def)
{
    this->name = name;
    this->pv = pv;
    this->def = def;
}

void Personne::afficherInfos() const
{
    std::cout << "Nom: " << name << std::endl;
    std::cout << "PV: " << pv << std::endl;
    std::cout << "Defense: " << def << std::endl;
}

void Personne::modifierNom(const std::string& nouveauNom)
{
    name = nouveauNom;
}

void Personne::modifierPV(int nouveauxPV){
    pv = nouveauxPV;
}

void Personne::modifierDefense(float nouvelleDefense){
    def = nouvelleDefense;
}