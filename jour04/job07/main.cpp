#include <iostream>
#include <array>

int main(){
    int tab[] = {1,2,3,4,5,6,7,8,9,10};

    int* pTab = &tab[0];

    int size = sizeof(tab) / sizeof(tab[0]);

    for (int i=0; i < size; ++i){
        int* pTab = &tab[i];
        std::cout << pTab << " : " << *pTab << std::endl;
    }

    return 0;
}