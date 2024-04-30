#include <iostream>

main (){
    int n, m;

    std::cin >> n >> m;
    std::cout << "avant l'echange : " << n << ',' << m << std::endl;

    int temp = n;
    n = m;
    m = temp;

    std::cout << "apres l'echange : " << n << ',' << m <<std::endl;
    return 0;
}