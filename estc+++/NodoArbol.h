#include <iostream>
#include <vector>

// Definici�n de la estructura para los nodos del �rbol
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