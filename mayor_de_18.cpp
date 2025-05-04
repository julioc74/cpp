#include <iostream>

int main(){

    int edad;

    std::cout << "Ingrese su edad: ";
    std::cin >> edad;

    if (edad >= 18){

        std::cout << "ud es mayor de edad " << std::endl;
    }

    return 0;
}
