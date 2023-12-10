#include <iostream>

struct Nodo {
    int valor;
    struct Nodo* siguiente;
};

// Lista Simple
struct ListaSimple {
    struct Nodo* cabeza;

    ListaSimple() : cabeza(nullptr) {}

    void Agregar(int valor) {
        struct Nodo* nuevoNodo = new Nodo{ valor, nullptr };
        nuevoNodo->siguiente = cabeza;
        cabeza = nuevoNodo;
    }

    void Mostrar() {
        struct Nodo* temp = cabeza;
        while (temp != nullptr) {
            std::cout << temp->valor << " ";
            temp = temp->siguiente;
        }
        std::cout << std::endl;
    }
};

int main() {
    // Ejemplo de uso
    ListaSimple lista;
    lista.Agregar(1);
    lista.Agregar(2);
    lista.Agregar(3);

    // Mostrar el contenido de la lista
    lista.Mostrar();

    return 0;
}





