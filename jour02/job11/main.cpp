#include <iostream>

int main() {
    int n = 10;
    int result = n;
    int i;

    for (i=1; i<n; i++) {
        result = result * i;
    }
    std::cout << result;
    return 0;
}