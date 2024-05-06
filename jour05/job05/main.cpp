#include <iostream>
#include "Etudiant.hpp"

int main() {
    Etudiant etudiant1("Jean", "Dupont", 20, 12345);
    Etudiant etudiant2("Alice", "Martin", 22, 67890);

    std::cout << "Etudiant 1 : " << std::endl;
    std::cout << "Nom : " << etudiant1.getNom() << std::endl;
    std::cout << "Prénom : " << etudiant1.getPrenom() << std::endl;
    std::cout << "Âge : " << etudiant1.getAge() << std::endl;
    std::cout << "Matricule : " << etudiant1.getMatricule() << std::endl;

    std::cout << "\nEtudiant 2 : " << std::endl;
    std::cout << "Nom : " << etudiant2.getNom() << std::endl;
    std::cout << "Prénom : " << etudiant2.getPrenom() << std::endl;
    std::cout << "Âge : " << etudiant2.getAge() << std::endl;
    std::cout << "Matricule : " << etudiant2.getMatricule() << std::endl;

    return 0;
}