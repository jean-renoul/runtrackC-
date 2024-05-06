#ifndef ETUDIANT_HPP
#define ETUDIANT_HPP
#include <iostream>

class Etudiant {
public:
    Etudiant(std::string name, std::string surname, int age, int matricule);

        std::string getNom() const; 
    std::string getPrenom() const; 
    int getAge() const;
    int getMatricule() const; 

private:
    std::string name;
    std::string surname;
    int age;
    int matricule;
};

#endif