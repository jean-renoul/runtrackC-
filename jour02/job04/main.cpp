#include <iostream>

int main (){
    double a;
    double b;
    char op;
    double result;

    std::cout << "Entrez un nombre : ";
    std::cin >> a;

    std::cout << "Entrez un operateur : ";
    std::cin >> op;

    std::cout << "Entrez un nombre : ";
    std::cin >> b;

    switch(op)
    {
        case '+' : result = a + b;
        break;
        case '-' : result = a - b;
        break;
        case '*' : result = a * b;
        break;
        case '/' : result = a / b;
        break;
        default : std::cout << "veuillez entrer un operateur valide (+,-,/,*)";
    }
    std::cout << "Le resultat est : " << result;
}