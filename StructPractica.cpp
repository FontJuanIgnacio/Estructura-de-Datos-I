#include<stdio.h>
#include <iostream>
#include <string>

struct Sneaker {
    std::string nombre;
    std::string precio;
};

int main(){
    Sneaker Jordan;
    Jordan.nombre="JORDAN X TRAVIS SCOTT";
    Jordan.precio="200 USD";
    
    Sneaker AF1;
    AF1.nombre="AF1 X TRAVIS SCOTT X GUCCI";
    AF1.precio="500 USD";
    std::cout << Jordan.nombre<<"--->"<<Jordan.precio<< std::endl;
    std::cout << AF1.nombre<<"--->"<<AF1.precio<< std::endl;
    return 0;
}
