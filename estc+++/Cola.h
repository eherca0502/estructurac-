#pragma once
#include <iostream>
#include <list>

// Definici�n de la estructura para los nodos
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
        return -1; // Otra opci�n es lanzar una excepci�n indicando que la cola est� vac�a
    }

    bool EstaVacia() {
        return items.empty();
    }

    void Mostrar() {
        if (EstaVacia()) {
            std::cout << "La cola est� vac�a." << '\n';
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

