#include <iostream>

int main(){
    int i, n, sum;
    sum = 0;
    i = 0;
    
    do {
        std::cout << "Donnez un nombre entier : ";
        std::cin >> n;
        sum += n;
        i++;
    } while (i < 4);
    std::cout << "La somme des entiers est : " << sum;
    return 0;
}