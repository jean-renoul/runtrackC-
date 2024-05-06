#include "Contact.hpp"
#include <iostream>

int main() {
    Contact contact1("Alice", 123456);
    Contact contact2("Bob", 654321);
    Contact contact3("Charlie", 987654);

    std::cout << "Informations initiales :" << std::endl;
    contact1.afficherInfos();
    contact2.afficherInfos();
    contact3.afficherInfos();
    std::cout << std::endl;
    Contact copieContact1 = contact1;
    Contact copieContact2 = contact2;
    Contact copieContact3 = contact3;

    copieContact1.modifierNumero(111111);
    copieContact2.modifierNumero(222222);
    copieContact3.modifierNumero(333333);

    std::cout << "Informations des copies après modification :" << std::endl;
    copieContact1.afficherInfos();
    copieContact2.afficherInfos();
    copieContact3.afficherInfos();

    return 0;
}