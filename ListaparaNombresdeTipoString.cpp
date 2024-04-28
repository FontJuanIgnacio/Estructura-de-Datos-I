#include <iostream>
#include <vector>
#include <string>

int main() {
    // Crear un vector vacío para almacenar nombres
    std::vector<std::string> nombres;

    // Pedir al usuario que ingrese nombres y agregarlos al vector
    std::cout << "Ingresa nombres (escribe 'fin' para salir):" << std::endl;
    std::string nombre;
    do {
        std::cin >> nombre;
        if (nombre != "fin") {
            nombres.push_back(nombre);
        }
    } while (nombre != "fin");

    // Mostrar los nombres almacenados en el vector
    std::cout << "Los nombres ingresados son:" << std::endl;
    for (const auto& nombre : nombres) {
        std::cout << nombre << std::endl;
    }

    return 0;
}