#include <iostream>
#include "Animal.hpp"
#include "Chien.hpp"
#include "Chat.hpp"


int main() {
    Chien chien;
    std::cout << "Chien :" << std::endl;
    chien.crier();
    chien.manger();
    std::cout << std::endl;

    Chat chat;
    std::cout << "Chat :" << std::endl;
    chat.crier();
    chat.manger();

    return 0;
}