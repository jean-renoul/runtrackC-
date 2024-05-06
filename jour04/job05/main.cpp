#include <iostream>

struct Point{
    int x;
    int y;
};

int main (){
    Point test;
    Point* pPoint = &test;
    pPoint->x = 5;
    pPoint->y = 10;

    std::cout << test.x << std::endl << test.y;
    return 0;
}