#include <iostream>

int main(){
    int n;
    double somme;

    std::cin >> n;

    if (n > 5) {
        for (int i = 5;i <= n; i++)
        somme += (i * i * i);
    }
    if (n < 5){
        for (int i = 5; i >= n; i--)
        somme += (i * i * i);
    }
    std::cout << somme;
    return 0;
}