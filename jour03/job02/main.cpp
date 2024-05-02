#include <iostream>
#include <string>


int main (){
    std::string phrase ("vive la plateforme");
    for (std::string::iterator it = phrase.begin(); it != phrase.end(); ++it){
        switch (*it){
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'y':
                it = phrase.erase(it);
                break;
            default:
                ++it;
                break;
        }
    }
    std::cout << phrase;
    return 0;
}