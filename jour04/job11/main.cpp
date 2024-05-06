#include <iostream>
#include <string>

int main() {
    std::string fruit[] = {"Pomme", "Banane", "Orange", "Fraise", "Kiwi"};

    std::cout << "Contenu du tableau 'fruit':" << std::endl;
    for (int i = 0; i < 5; ++i) {
        std::cout << fruit[i] << std::endl;
    }
    int favoriteNumber;
    std::cout << "Entrez le nombre de fruits preferes que vous souhaitez ajouter : ";
    std::cin >> favoriteNumber;

    std::string* favoris = new std::string[favoriteNumber];

    std::cout << "Entrez vos " << favoriteNumber << " fruits favoris :" << std::endl;
    for (int i = 0; i < favoriteNumber; ++i) {
        std::cin >> favoris[i];
    }

    std::cout << "Contenu du tableau 'favoris':" << std::endl;
    for (int i = 0; i < favoriteNumber; ++i) {
        std::cout << favoris[i] << std::endl;
    }
    delete[] favoris;

    return 0;
}