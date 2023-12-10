#include <iostream>

// Definición de la estructura para los nodos
struct Nodo {
    int valor;
    struct Nodo* siguiente;
};

// Lista Circular
struct ListaCircular {
    struct Nodo* cabeza;

    ListaCircular() : cabeza(nullptr) {}

    void Agregar(int valor) {
        struct Nodo* nuevoNodo = new Nodo{ valor, nullptr };
        if (cabeza == nullptr) {
            cabeza = nuevoNodo;
            nuevoNodo->siguiente = cabeza;
        }
        else {
            struct Nodo* temp = cabeza;
            while (temp->siguiente != cabeza) {
                temp = temp->siguiente;
            }
            temp->siguiente = nuevoNodo;
            nuevoNodo->siguiente = cabeza;
        }
    }

    void Mostrar() {
        if (cabeza == nullptr) {
            std::cout << "La lista circular está vacía." << '\n';
        }
        else {
            struct Nodo* temp = cabeza;
            std::cout << "Contenido de la lista circular: ";
            do {
                std::cout << temp->valor << " ";
                temp = temp->siguiente;
            } while (temp != cabeza);
            std::cout << '\n';
        }
    }
};

int main() {
    // Ejemplo de uso
    ListaCircular lista;
    lista.Agregar(1);
    lista.Agregar(2);
    lista.Agregar(3);

    // Mostrar el contenido de la lista
    lista.Mostrar();

    return 0;
}



