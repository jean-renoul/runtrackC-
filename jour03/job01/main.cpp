#include <iostream>
#include <cstring>

int main (){
    char phrase[] = "vive la plateforme";
    for (int x=0; x < strlen(phrase);++x){
        putchar(toupper(phrase[x]));
    }
    return 0;
}