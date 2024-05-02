#include <iostream>

int main (){
    int tab[] = {1,2,3,4,5,6,7,8,9,10};
    int sum = 0;

    for (auto i : tab)
    {
        if (tab[i] % 2 == 0)
        {
            sum += tab[i];
        }
    }
    std::cout << sum;
    return 0;
}