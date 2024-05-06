#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact {
public:
    Contact(const std::string& nom, int numero);

    Contact(const Contact& autre);

    void afficherInfos() const;

    void modifierNumero(int nouveauNumero);

private:
    std::string nom;
    int numero;
};

#endif