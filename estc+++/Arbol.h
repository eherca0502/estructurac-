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

// Árbol
struct Arbol {
    NodoArbol* raiz;

    Arbol(int valor) : raiz(new NodoArbol(valor)) {}

    void AgregarHijo(NodoArbol* padre, int valor) {
        NodoArbol* nuevoHijo = new NodoArbol(valor);
        padre->hijos.push_back(nuevoHijo);
    }

    void MostrarRecursivo(NodoArbol* nodo, int nivel) {
        if (nodo != nullptr) {
            std::cout << std::string(nivel * 4, ' ') << nodo->valor << std::endl;
            for (NodoArbol* hijo : nodo->hijos) {
                MostrarRecursivo(hijo, nivel + 1);
            }
        }
    }

    void Mostrar() {
        std::cout << "Árbol:" << std::endl;
        MostrarRecursivo(raiz, 0);
    }

    ~Arbol() {
        delete raiz;
    }
};

int main() {
    // Ejemplo de uso
    Arbol arbol(1);
    NodoArbol* nodo1 = arbol.raiz;
    arbol.AgregarHijo(nodo1, 2);
    arbol.AgregarHijo(nodo1, 3);

    NodoArbol* nodo2 = nodo1->hijos[0];
    arbol.AgregarHijo(nodo2, 4);
    arbol.AgregarHijo(nodo2, 5);

    NodoArbol* nodo3 = nodo1->hijos[1];
    arbol.AgregarHijo(nodo3, 6);

    // Mostrar el contenido del árbol
    arbol.Mostrar();

    return 0;
}






