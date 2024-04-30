#include <iostream>

int main() {
    int x, y, z;

    std::cin >> x >> y >> z;

    if ((x > y) && (x > z)) {
        std::cout << "Le plus grand des trois entiers est : " << x;
        return x;
    }
    if ((y > x) && (y > z)) {
        std::cout << "Le plus grand des trois entiers est : " << y;
        return y;
    }
    if ((z > x) && (z > y)) {
        std::cout << "Le plus grand des trois entiers est : " << z;
        return z;
    }
}