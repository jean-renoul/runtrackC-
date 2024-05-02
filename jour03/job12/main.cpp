#include <iostream>
#include <ctime>

int main(){
    srand (time(NULL));

    int nombre_aleatoire = rand() % 100 + 1;
    std::cout << nombre_aleatoire << std::endl;
    int essai;

    for (int i = 0; i < 5; ++i)
    {
        std::cin >> essai;
        if (essai == nombre_aleatoire)
        {
            std::cout << "Vous avez gagne !" << std::endl;
            return 0;

        }
        else
        {
            if (essai > nombre_aleatoire)
            {
                std::cout << "Trop grand !" << std::endl;
            }
            if (essai < nombre_aleatoire)
            {
                std::cout << "Trop petit !" << std::endl;
            }
        }
    }
    std::cout << "Vous avez perdu..." << std::endl;
    return 0;
}