#include <iostream>
#include <vector>
#include <string>

class CircularQueue {
private:
    std::vector<std::string> data;
    int front;
    int rear;
    int maxSize;

public:
    CircularQueue(int size) : data(size), front(-1), rear(-1), maxSize(size) {}

    bool isEmpty() const {
        return front == -1;
    }

    bool isFull() const {
        return (rear + 1) % maxSize == front;
    }

    void enqueue(const std::string& item) {
        if (isFull()) {
            std::cout << "La cola está llena. No se puede agregar más elementos." << std::endl;
            return;
        }
        if (isEmpty()) {
            front = rear = 0;
        } else {
            rear = (rear + 1) % maxSize;
        }
        data[rear] = item;
    }

    void dequeue() {
        if (isEmpty()) {
            std::cout << "La cola está vacía. No se puede eliminar ningún elemento." << std::endl;
            return;
        }
        if (front == rear) {
            front = rear = -1;
        } else {
            front = (front + 1) % maxSize;
        }
    }

    void display() {
        if (isEmpty()) {
            std::cout << "La cola está vacía." << std::endl;
            return;
        }
        int i = front;
        std::cout << "Elementos en la cola:" << std::endl;
        while (i != rear) {
            std::cout << data[i] << std::endl;
            i = (i + 1) % maxSize;
        }
        std::cout << data[rear] << std::endl;
    }
};

int main() {
    int maxSize;
    std::cout << "Ingrese el tamaño máximo de la cola: ";
    std::cin >> maxSize;

    CircularQueue queue(maxSize);

    std::string nombre;
    char opcion;

    do {
        std::cout << "\n(a) Agregar nombre\n(d) Eliminar nombre\n(s) Mostrar cola\n(e) Salir\nElija una opción: ";
        std::cin >> opcion;

        switch (opcion) {
            case 'a':
                std::cout << "Ingrese el nombre a agregar: ";
                std::cin >> nombre;
                queue.enqueue(nombre);
                break;
            case 'd':
                queue.dequeue();
                break;
            case 's':
                queue.display();
                break;
            case 'e':
                std::cout << "Saliendo del programa." << std::endl;
                break;
            default:
                std::cout << "Opción inválida. Inténtelo de nuevo." << std::endl;
                break;
        }
    } while (opcion != 'e');

    return 0;
}