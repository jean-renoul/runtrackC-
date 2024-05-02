#include <iostream>
#include <string>

bool includeFunction(std::string a, std::string b)
{
    return b.find(a) != std::string::npos;
}

int main(){
    std::string strA;
    std::string strB;

    std::cin >> strA >> strB;

    bool result = includeFunction(strA, strB);

    if (result == true)
    {
        std::cout << "Match";
    }
    else
    {
        std::cout << "No match";
    }
    return 0;
}