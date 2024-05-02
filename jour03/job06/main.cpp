#include <iostream>


int main (){
    int T[10] = {};
    int entier;
    int superieursOuEgaux = 0;

    for (int i =0; i < 10; ++i)
    {
        std::cout << "Veuillez entrer un entier" << std::endl;
        std::cin >> entier;
        T[i] = entier;
        if (entier >= 5)
        {
            superieursOuEgaux +=1;
        }
    }

    std::cout << "Nombre d'entiers superieurs ou egaux a 5 : " << superieursOuEgaux;
    return 0;
}