#include <iostream>
#include <vector>

int main (){
    int size;
    int entier;

    std::cout << "Entrez la taille du tableau" << std::endl;
    std::cin >> size;

    std::vector<int> tableau;

    for (int i = 0; i < size; ++i){
        std::cout << "entrez un entier" << std::endl;
        std::cin >> entier;
        tableau.push_back(entier);
    }

    std::cout << "Contenu du tableau :" << std::endl;

    for (auto i = tableau.begin(); i != tableau.end(); ++i){
        std::cout << *i << std::endl;
    }
    return 0;
}