#include <iostream>

main (){
    int nombre;
    double resultat;

    do {
        std::cout << "Veuillez entrer un nombre : ";
        std::cin >> nombre;

        if (nombre > 0){
            resultat = (nombre * nombre);
            std::cout << "La racine carree de " << nombre << " est " << resultat << "\n";
        }
        else {
            std::cout << "Veuillez entrer un nombre positif\n";
        }
    } while (nombre != 0);
    return 0;
}