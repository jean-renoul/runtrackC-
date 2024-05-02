#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string str1;
    std::string str2 = "bonjour";

    std::cout << "Entrez une chaine de caracteres : ";
    std::getline(std::cin, str1);

    std::sort(str1.begin(), str1.end());
    std::sort(str2.begin(), str2.end());

    std::cout << "Chaine 1 trie : " << str1 << std::endl;
    std::cout << "Chaine 2 trie : " << str2 << std::endl;

    return 0;
}