#include <iostream>
#include <string>
#include <cctype>

int main (){
    std::string heure;

    std::cout << "Veuillez rentrer un heure sous le format XXhXX :" << std::endl;
    std::cin >> heure;

    if (heure.length() != 5 || heure.at(2) != 'h' ||
        !isdigit(heure.at(0)) || !isdigit(heure.at(1)) ||
        !isdigit(heure.at(3)) || !isdigit(heure.at(4))) {
        std::cout << "Format invalide" << std::endl;
    } else {
        std::cout << "Format valide" << std::endl;
    }
    
    return 0;
}