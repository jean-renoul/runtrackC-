#include <iostream>

int main(){
    int entier = 17;
    float flottant = 3.14;
    double reel = 123.345;
    std::string caractere = "Plateforme";

    int* pEntier = &entier;
    float* pFlottant = &flottant;
    double* pReel = &reel;
    std::string* pCaractere = &caractere;

    std::cout << pEntier << " : " << *pEntier << std::endl;
    std::cout << pFlottant << " : " << *pFlottant << std::endl;
    std::cout << pReel << " : " << *pReel << std::endl;
    std::cout << pCaractere << " : " << *pCaractere << std::endl;

}