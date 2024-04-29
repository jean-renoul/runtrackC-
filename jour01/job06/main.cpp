#include <iostream>

int main (){
    int x;
    int y = 2;
    std::cin >> x;
    while (y <= 10){
        std::cout << (x * y);
        std::cout << "\n";
        y ++ ;
    }
    return 0;
}