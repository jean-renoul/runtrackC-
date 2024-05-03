#include <iostream>
#include <algorithm>

int main () {
    int T1[] = {9,8,6,7,18,2,6,5,7};
    int T2[] = {5,3,4,2};
    int n1 = sizeof(T1) / sizeof(T1[0]);
    int n2 = sizeof(T2) / sizeof(T2[0]);

    std::sort(T1, T1 + n1);
    std::sort(T2, T2 + n2);

    int T3[n1 + n2];
    int index = 0;

    for (int i = 0; i < n1; ++i)
    {
        T3[index++] = T1[i];
    }
    for (int i = 0; i < n2; ++i)
    {
        T3[index++] = T2[i];
    }

    std::sort(T3, T3 + n1 + n2);

    for (int i = 0; i < n2 + n1; ++i)
    {
        std::cout << T3[i] << " ";
    }
    return 0;
}