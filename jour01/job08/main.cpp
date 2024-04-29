#include <iostream>

int main() {
    int x;
    std::cin >> x;
    if ((x % 4 == 0 && x % 100 != 0) || (x % 400 == 0)){
        std::cout << "cette annee est bissextile";
    }
    else {
        std::cout << "cette annee n'est pas bissextile";
    }
    return 0;
}