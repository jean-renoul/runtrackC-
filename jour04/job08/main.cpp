#include <iostream>

struct tableau {
    int a = 2019;
    std::string b = "La Plateforme";
    float c = 3.14;
    std::string d = "Etudiants";
};

int main (){
    tableau tableau1;
    tableau* pTableau = &tableau1;

    std::cout<< &(pTableau->a) << " : " << pTableau->a << std::endl;
    std::cout<< &(pTableau->b) << " : " << pTableau->b << std::endl;
    std::cout<< &(pTableau->c) << " : " << pTableau->c << std::endl;
    std::cout<< &(pTableau->d) << " : " << pTableau->d << std::endl;
}