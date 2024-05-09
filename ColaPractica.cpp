#include<iostream>

using namespace std;

struct cola {
    int items[10];
    int frente;
    int fondo;
    int vacia;
};

// Declaración de métodos o funciones
void inicializar(cola &c);
void insertar(cola &c, int x);
int borrar(cola &c);
int verVacia(cola &c);

int main() {
    cola c;
    int a = 0;
    int b = 0;

    inicializar(c);

    for (int i = 0; i < 10; i++) {
        cout << "Ingresar elemento a agregar a la cola: ";
        cin >> a;
        insertar(c, a);
    }

    b = borrar(c);
    cout << "Se eliminó el siguiente elemento: " << b;

    return 0;
}

void inicializar(cola &c) {
    c.frente = 0;
    c.fondo = -1;
    c.vacia = 1;
}

int verVacia(cola &c) {
    return c.vacia;
}

void insertar(cola &c, int x) {
    if (c.fondo == 9)
        c.fondo = 0;
    else
        c.fondo++;
    if (c.frente == c.fondo && verVacia(c) == 0) {
        cout << "Error: falta de memoria";
        exit(1);
    } else {
        c.items[c.fondo] = x;
        c.vacia = 0;
    }
}

// 1 vacía, 0 con valores
int borrar(cola &c) {
    if (verVacia(c) == 1) {
        cout << "Error: cola vacía";
        exit(1);
    } else {
        int x = c.items[c.frente];
        if (c.frente == c.fondo)
            inicializar(c);
        else if (c.frente == 9)
            c.frente = 0;
        else
            c.frente++;
        return x;
    }
}