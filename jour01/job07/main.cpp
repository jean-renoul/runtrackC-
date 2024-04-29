#include <iostream>

int main() {
    int x;
    std::cin >> x;
    if (x % 2 == 0) {
        std::cout << "pair";
    }
    else {
        std::cout << "impair";
    }
    return 0;
}