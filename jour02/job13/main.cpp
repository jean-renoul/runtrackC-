#include <iostream>

int main() {
    std::cout << "\t" << "I" << " ";
    for (int k = 1; k <=10; ++k) {
        std::cout << k << "\t";} 
    std::cout << std::endl;

    std::cout << "-----------------------------------------------------------------------------------"<< std::endl;

    for (int i = 1; i <= 10; i++) {
        std::cout << i << "\t" << "I" << " ";
            for (int j = 1; j <= 10; j++) {
                int produit = i * j;
                std::cout << produit << "\t";
        }
        std::cout << std::endl;
    }

  return 0;
}