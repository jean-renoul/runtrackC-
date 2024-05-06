#include "Etudiant.hpp"

Etudiant::Etudiant(std::string name, std::string surname, int age, int matricule)
    : name(name), surname(surname), age(age), matricule(matricule) {}

std::string Etudiant::getNom() const {
    return name;
}

std::string Etudiant::getPrenom() const {
    return surname;
}

int Etudiant::getAge() const {
    return age;
}

int Etudiant::getMatricule() const {
    return matricule;
}