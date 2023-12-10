#include <iostream>
#include <vector>
#include <unordered_map>

// Definición de la estructura para el grafo
struct Grafo {
    std::unordered_map<int, std::vector<int>> vertices;

    void AgregarVertice(int vertice) {
        vertices[vertice] = std::vector<int>();
    }

    void AgregarArista(int origen, int destino) {
        vertices[origen].push_back(destino);
    }

    void Mostrar() {
        std::cout << "Grafo:" << std::endl;
        for (const auto& vertice : vertices) {
            std::cout << vertice.first << ": ";
            for (int adyacente : vertice.second) {
                std::cout << adyacente << " ";
            }
            std::cout << std::endl;
        }
    }
};

int main() {
    // Ejemplo de uso
    Grafo grafo;
    grafo.AgregarVertice(1);
    grafo.AgregarVertice(2);
    grafo.AgregarVertice(3);
    grafo.AgregarArista(1, 2);
    grafo.AgregarArista(1, 3);

    // Mostrar el contenido del grafo
    grafo.Mostrar();

    return 0;
}

