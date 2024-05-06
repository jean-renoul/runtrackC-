#include <iostream>
#include <string>

std::string reverse(const std::string str){
    std::string str_reversed;
    auto rit = str.rbegin();
    for (int i = 0; i < str.length(); ++i, ++rit){
        str_reversed.push_back(*rit);
    }
    return str_reversed;
}

int main (){
    std::string str;

    std::cin >> str;

    std::string* p = &str;
    std::string reversed = reverse(*p);

    std::cout << "Phrase a l'endroit = " << str << std::endl << "Phrase a l'envers = " << reversed;
    return 0;
}