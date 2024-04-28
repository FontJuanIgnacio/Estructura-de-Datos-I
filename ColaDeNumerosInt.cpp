#include <iostream>
#include <queue>

int main() {
    // Crear una cola vacía para almacenar enteros
    std::queue<int> cola;

    // Pedir al usuario que ingrese datos y agregarlos a la cola
    std::cout << "Ingresa datos (ingresa 0 para salir):" << std::endl;
    int dato;
    do {
        std::cin >> dato;
        if (dato != 0) {
            cola.push(dato);
        }
    } while (dato != 0);

    // Mostrar los datos almacenados en la cola
    std::cout << "Los datos ingresados son:" << std::endl;
    while (!cola.empty()) {
        std::cout << cola.front() << std::endl;
        cola.pop();
    }

    return 0;
}