#include <iostream>
#include <cmath>

int compterNombres (int nombreInitial) {
    int compte = 0;
    while (nombreInitial > 0) {
        nombreInitial /= 10;
        compte ++;
    }
    return compte;
}

bool testNarcissique (int nombre) {
    int nombreOriginal = nombre;
    int nombreDeChiffres = compterNombres(nombre);
    int somme = 0;

    while (nombre > 0){
        int chiffre = nombre % 10;
        somme += pow(chiffre, nombreDeChiffres);
        nombre /= 10;
    }
    return (somme == nombreOriginal);
}


int main () {
    int nombre;

    std::cout << "Veuillez rentrer un nombre" << std::endl;
    std::cin >> nombre;

    if (testNarcissique(nombre)) {
        std::cout << "Le nombre " << nombre << " est bien narcissique";
    }
    else {
        std::cout << "Le nombre " << nombre << " n'est pas narcissique";
    }
    return 0;
}