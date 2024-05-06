#include <iostream>
#include <vector>
#include <string>

struct Note {
    std::string nom;
    std::string prenom;
    float note;
};

void ajouterNote(std::vector<Note>& listeNotes) {
    Note nouvelleNote;
    std::cout << "Nom de l'etudiant : ";
    std::cin >> nouvelleNote.nom;
    std::cout << "Prenom de l'etudiant : ";
    std::cin >> nouvelleNote.prenom;
    std::cout << "Note de l'etudiant : ";
    std::cin >> nouvelleNote.note;
    listeNotes.push_back(nouvelleNote);
    std::cout << "Note ajoutee avec succes !" << std::endl;
}

void afficherListeNotes(const std::vector<Note>& listeNotes) {
    std::cout << "Liste des notes :" << std::endl;
    for (const auto& note : listeNotes) {
        std::cout << note.nom << " " << note.prenom << " : " << note.note << std::endl;
    }
}

void supprimerNoteEtudiant(std::vector<Note>& listeNotes) {
    std::string nom, prenom;
    std::cout << "Nom de l'etudiant dont vous voulez supprimer la note : ";
    std::cin >> nom;
    std::cout << "Prenom de l'etudiant : ";
    std::cin >> prenom;
    for (auto it = listeNotes.begin(); it != listeNotes.end(); ++it) {
        if (it->nom == nom && it->prenom == prenom) {
            listeNotes.erase(it);
            std::cout << "Note de l'etudiant " << nom << " " << prenom << " supprimee avec succes !" << std::endl;
            return;
        }
    }
    std::cout << "Aucune note trouvee pour l'etudiant " << nom << " " << prenom << std::endl;
}

float calculerMoyenne(const std::vector<Note>& listeNotes) {
    if (listeNotes.empty()) {
        std::cout << "La liste des notes est vide !" << std::endl;
        return 0.0f;
    }
    float somme = 0.0f;
    for (const auto& note : listeNotes) {
        somme += note.note;
    }
    return somme / listeNotes.size();
}

int main() {
    std::vector<Note> listeNotes;
    int choix;
    do {
        std::cout << "\nMenu :\n"
                     "1. Ajouter une note\n"
                     "2. Afficher la liste des notes\n"
                     "3. Supprimer une note d'un etudiant\n"
                     "4. Afficher la moyenne des notes\n"
                     "5. Quitter\n"
                     "Entrez votre choix : ";
        std::cin >> choix;
        switch (choix) {
            case 1:
                ajouterNote(listeNotes);
                break;
            case 2:
                afficherListeNotes(listeNotes);
                break;
            case 3:
                supprimerNoteEtudiant(listeNotes);
                break;
            case 4:
                std::cout << "Moyenne des notes : " << calculerMoyenne(listeNotes) << std::endl;
                break;
            case 5:
                std::cout << "Programme termine." << std::endl;
                break;
            default:
                std::cout << "Choix invalide ! Veuillez reessayer." << std::endl;
        }
    } while (choix != 5);

    return 0;
}