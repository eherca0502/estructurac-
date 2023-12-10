#pragma once
#include <iostream>
#include <list>

// Definición de la estructura para los nodos
struct Nodo {
    int valor;
    struct Nodo* siguiente;
};

// Cola
struct Cola {
    std::list<int> items;

    void Encolar(int valor) {
        items.push_back(valor);
    }

    int Desencolar() {
        if (!EstaVacia()) {
            int valorDesencolado = items.front();
            items.pop_front();
            return valorDesencolado;
        }
        return -1; // Otra opción es lanzar una excepción indicando que la cola está vacía
    }

    bool EstaVacia() {
        return items.empty();
    }

    void Mostrar() {
        if (EstaVacia()) {
            std::cout << "La cola está vacía." << '\n';
        }
        else {
            std::cout << "Contenido de la cola: ";
            for (int item : items) {
                std::cout << item << " ";
            }
            std::cout << '\n';
        }
    }
};

int main() {
    // Ejemplo de uso
    Cola cola;
    cola.Encolar(1);
    cola.Encolar(2);
    cola.Encolar(3);

    // Mostrar el contenido de la cola
    cola.Mostrar();

    return 0;
}

