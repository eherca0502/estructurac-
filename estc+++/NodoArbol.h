#include <iostream>
#include <vector>

// Definición de la estructura para los nodos del árbol
struct NodoArbol {
    int valor;
    std::vector<NodoArbol*> hijos;

    NodoArbol(int val) : valor(val), hijos() {}

    ~NodoArbol() {
        for (NodoArbol* hijo : hijos) {
            delete hijo;
        }
    }
};