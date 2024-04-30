#include <iostream>

int main (){
    int n = 30;
    int i;

    for (i = 1; i <= n; i++){
        if ((i % 3 == 0) && (i % 5 == 0)){
            std::cout << i << " est un multiple de 3 et de 5\n";
        }
        else if (i % 5 == 0){
            std::cout << i << " est un multiple de 5\n";
        }
        else if (i % 3 == 0){
            std::cout << i << " est un multiple de 3\n";
        }
        else {
            std::cout << i << "\n" ;
        }
    }
    return 0;
}