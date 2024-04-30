#include <iostream>

int main(){
    int note;

    std::cout << "veuillez entrer une note : ";
    std::cin >> note;


    if (note > 20 || note < 0) {
        std::cout << "La note doit etre comprise entre 0 et 20" <<std::endl;
    }
    else {
        if (note >= 10) {
            std::cout << "Valide" << std::endl;
        }
        else if (note < 10) {
            std::cout << "Non-valide" << std::endl;
        }
    }
    return 0;
}