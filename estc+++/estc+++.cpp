

#include <iostream>
#include "ListaSimple.h"
#include "ListaCircular.h"
#include "Pila.h"
#include "Cola.h"
#include "Arbol.h"
#include "Grafo.h"

// Incluye las estructuras y funciones previamente definidas

int main() {
    ListaSimple listaSimple;
    ListaCircular listaCircular;
    Pila pila;
    Cola cola;
    Arbol arbol(1);
    Grafo grafo;

    int opcion;

    do {
        std::cout << "\nMENU:\n";
        std::cout << "1. Operaciones con Lista Simple\n";
        std::cout << "2. Operaciones con Lista Circular\n";
        std::cout << "3. Operaciones con Pila\n";
        std::cout << "4. Operaciones con Cola\n";
        std::cout << "5. Operaciones con Árbol\n";
        std::cout << "6. Operaciones con Grafo\n";
        std::cout << "0. Salir\n";
        std::cout << "Seleccione una opción: ";
        std::cin >> opcion;

        switch (opcion) {
        case 1:
            // Operaciones con Lista Simple
            int valorLista;
            std::cout << "Ingrese un valor para la Lista Simple: ";
            std::cin >> valorLista;
            listaSimple.Agregar(valorLista);
            break;

        case 2:
            // Operaciones con Lista Circular
            int valorCircular;
            std::cout << "Ingrese un valor para la Lista Circular: ";
            std::cin >> valorCircular;
            listaCircular.Agregar(valorCircular);
            break;

        case 3:
            // Operaciones con Pila
            int valorPila;
            std::cout << "Ingrese un valor para la Pila: ";
            std::cin >> valorPila;
            pila.Apilar(valorPila);
            break;

        case 4:
            // Operaciones con Cola
            int valorCola;
            std::cout << "Ingrese un valor para la Cola: ";
            std::cin >> valorCola;
            cola.Encolar(valorCola);
            break;

        case 5:
            // Operaciones con Árbol
            // (Puedes agregar más opciones según tus necesidades)
            int valorArbol, padreArbol;
            std::cout << "Ingrese el valor del nuevo nodo del Árbol: ";
            std::cin >> valorArbol;
            std::cout << "Ingrese el valor del nodo padre del Árbol (raíz es 1): ";
            std::cin >> padreArbol;
            arbol.AgregarHijo(arbol.raiz, valorArbol);
            break;

        case 6:
            // Operaciones con Grafo
            // (Puedes agregar más opciones según tus necesidades)
            int vertice, origenArista, destinoArista;
            std::cout << "Ingrese un vértice para el Grafo: ";
            std::cin >> vertice;
            grafo.AgregarVertice(vertice);
            std::cout << "Ingrese el origen de la arista: ";
            std::cin >> origenArista;
            std::cout << "Ingrese el destino de la arista: ";
            std::cin >> destinoArista;
            grafo.AgregarArista(origenArista, destinoArista);
            break;

        case 0:
            // Salir del programa
            std::cout << "Saliendo del programa.\n";
            break;

        default:
            // Opción no válida
            std::cout << "Opción no válida. Intente de nuevo.\n";
            break;
        }

    } while (opcion != 0);

    return 0;
}

