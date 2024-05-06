#include <iostream>
#include <string>
#include <vector>

// Définition de la structure Destination
struct Destination {
    std::string nom;
    int tempsDeVol;
};

int main() {
    // Création du conteneur vector pour stocker les pointeurs vers les structures Destination
    std::vector<Destination*> destinations;

    char continuer;
    do {
        // Demande à l'utilisateur de saisir une destination et son temps de vol
        Destination* nouvelleDestination = new Destination(); // Allocation dynamique de la structure
        std::cout << "Entrez le nom de la destination : ";
        std::cin >> nouvelleDestination->nom;
        std::cout << "Entrez le temps de vol depuis Marseille (en heures) : ";
        std::cin >> nouvelleDestination->tempsDeVol;

        // Ajout du pointeur vers la nouvelle destination dans le vector
        destinations.push_back(nouvelleDestination);

        // Demande à l'utilisateur s'il souhaite ajouter une autre destination
        std::cout << "Voulez-vous ajouter une autre destination ? (o/n) : ";
        std::cin >> continuer;
    } while (continuer == 'o' || continuer == 'O');

    // Affichage et modification des données de chaque destination
    for (size_t i = 0; i < destinations.size(); ++i) {
        std::cout << "Destination " << i + 1 << " :" << std::endl;
        std::cout << "Nom : " << destinations[i]->nom << std::endl;
        std::cout << "Temps de vol depuis Marseille : " << destinations[i]->tempsDeVol << " heures" << std::endl;

        // Modification du temps de vol (optionnel)
        int nouveauTempsDeVol;
        std::cout << "Entrez le nouveau temps de vol depuis Marseille pour cette destination (en heures) : ";
        std::cin >> nouveauTempsDeVol;
        destinations[i]->tempsDeVol = nouveauTempsDeVol;
    }

    // Libération de la mémoire allouée dynamiquement pour les structures
    for (size_t i = 0; i < destinations.size(); ++i) {
        delete destinations[i];
    }

    return 0;
}