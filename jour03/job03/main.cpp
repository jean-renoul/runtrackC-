#include <iostream>
#include <string>

int compareStrings (std::string a, std::string b){
    int compare = a.compare(b);
    if (compare == 0){
        std::cout << "Les deux phrases sont identiques";
    }
    else {
        std::cout << "Les deux phrases sont differentes";
    }
    return 0;
}

int main (){
    std::string a = "salut";
    std::string b = "salut";
    compareStrings(a, b);

    return 0;
}