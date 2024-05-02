#include <iostream>
#include <vector>

int main (){
    std::string chaine;

    std::cout << "Veuillez entrer une chaine de caracteres" << std::endl;
    std::cin >> chaine;

    std::vector<char> T;

    for (int i = 0; i < chaine.length(); ++i)
    {
        T.push_back(chaine.at(i));
    }
    T.push_back('\0');

    for ( int i = 0; i < chaine.length(); ++i)
    {
        std::cout << T[i] << std::endl;
    }
    return 0;
}