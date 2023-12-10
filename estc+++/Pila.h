
#include <iostream>
#include <list>

// Definición de la estructura para los nodos
struct Nodo {
    int valor;
    struct Nodo* siguiente;
};

// Pila
struct Pila {
    std::list<int> items;

    void Apilar(int valor) {
        items.push_back(valor);
    }

    int Desapilar() {
        if (!EstaVacia()) {
            int valorDesapilado = items.back();
            items.pop_back();
            return valorDesapilado;
        }
        return -1; // Otra opción es lanzar una excepción indicando que la pila está vacía
    }

    bool EstaVacia() {
        return items.empty();
    }

    void Mostrar() {
        if (EstaVacia()) {
            std::cout << "La pila está vacía." << '\n';
        }
        else {
            std::cout << "Contenido de la pila: ";
            for (int item : items) {
                std::cout << item << " ";
            }
            std::cout << '\n';
        }
    }
};

int main() {
    // Ejemplo de uso
    Pila pila;
    pila.Apilar(1);
    pila.Apilar(2);
    pila.Apilar(3);

    // Mostrar el contenido de la pila
    pila.Mostrar();

    return 0;
}
