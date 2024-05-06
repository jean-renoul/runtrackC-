#include <iostream>
#include <string>

struct Staff {
    std::string nom;
    std::string prenom;
};

int main() {
    Staff alicia = {"Cordial", "Alicia"};
    Staff pierre = {"Malardier", "Pierre"};

    std::cout << "Prénoms du staff :" << std::endl;
    std::cout << alicia.prenom << std::endl;
    std::cout << pierre.prenom << std::endl;

    struct Etudiant {
        std::string nom;
        std::string prenom;
    };

    int nombreEtudiants;
    std::cout << "Entrez le nombre d'étudiants : ";
    std::cin >> nombreEtudiants;

    Etudiant* etudiants = new Etudiant[nombreEtudiants];

    std::cout << "Saisissez les noms et prénoms des étudiants :" << std::endl;
    for (int i = 0; i < nombreEtudiants; ++i) {
        std::cout << "Etudiant " << i + 1 << " :" << std::endl;
        std::cout << "Nom : ";
        std::cin >> etudiants[i].nom;
        std::cout << "Prénom : ";
        std::cin >> etudiants[i].prenom;
    }

    std::cout << "Prénoms des étudiants :" << std::endl;
    for (int i = 0; i < nombreEtudiants; ++i) {
        std::cout << etudiants[i].prenom << std::endl;
    }
    delete[] etudiants;

    return 0;
}