#include "Contact.hpp"
#include <iostream>

Contact::Contact(const std::string& nom, int numero){
    this->nom = nom;
    this->numero = numero;
}

Contact::Contact(const Contact& autre){
    nom = autre.nom;
    numero = autre.numero;
}

void Contact::afficherInfos() const {
    std::cout << "Nom: " << nom << std::endl;
    std::cout << "Numéro de téléphone: " << numero << std::endl;
}

void Contact::modifierNumero(int nouveauNumero) {
    numero = nouveauNumero;
}