#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

bool isPalindrome(const std::string& str) {
    auto rit = str.rbegin();
    for (auto it = str.begin(); it != str.end(); ++it, ++rit) {
        if (*it != *rit) {
            return false;
        }
    }
    return true;
}

int main() {
    std::vector<std::string> tab = {"radar", "hello", "lvel", "stats", "world"};

    std::cout << "Palindromes trouves dans le tableau : " << std::endl;
    for (const std::string& str : tab) {
        if (isPalindrome(str)) {
            std::cout << str << std::endl;
        }
    }

    return 0;
}