#include <iostream>
#include <vector>
#include <limits>

int main()
{
    int n;                                          // Declara una variable que acepta valores enteros
    std::cout << "Ingrese el tamaño del arreglo: "; // Muestra el mensaje solicitando la longitud del arreglo
    std::cin >> n;                                  // Asigna el tamaño al valor a la variable "n"

    std::vector<int> arreglo(n); // Declara un arreglo de la longitud deseada.

    std::cout << "Ingrese los elementos del arreglo:" << std::endl; // Solicita los elementos del arreglo
    for (int i = 0; i < n; ++i)                                     // Ciclo "for" con el recorrido de los indices del arreglo.
    {
        std::cin >> arreglo[i]; // Asigna los elementos a cada posicion en el indice
    }

    int mayor = std::numeric_limits<int>::min();
    int menor = std::numeric_limits<int>::max();

    for (int i = 0; i < n; ++i)
    {
        if (arreglo[i] > mayor)
        {
            mayor = arreglo[i];
        }
        if (arreglo[i] < menor)
        {
            menor = arreglo[i];
        }
    }

    std::cout << "El mayor elemento del arreglo es: " << mayor << std::endl;
    std::cout << "El menor elemento del arreglo es: " << menor << std::endl;

    return 0;
}
