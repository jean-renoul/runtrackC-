#include <iostream>


int main (){
    int T[10] = {};
    int entier;
    int plusGrand = 0;
    int indexPlusGrand;

    for (int i =0; i < 10; ++i)
    {
        std::cout << "Veuillez entrer un entier" << std::endl;
        std::cin >> entier;
        T[i] = entier;
    }

    for (int i = 0; i < 10; ++i)
    {
        if (T[i] > plusGrand)
        {
            plusGrand = T[i];
            indexPlusGrand = i;
        }
    }
    std::cout << "L'indice du nombre le plus grand est : " << indexPlusGrand;

}