#include <iostream>

int main() {
    int n;
    int* dynamicArray;

    std::cout << "Ingresa tamaño arreglo: ";
    std::cin >> n;

    dynamicArray = new int[n];

    if (dynamicArray == nullptr) {
        std::cout << "No se pudo asignar memoria dinámica." <<
        std::endl;
        return 1;
    }

    std::cout << "Ingresa " << n << " valores para el arreglo:" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cin >> dynamicArray[i];
    }


    std::cout << "Valores del arreglo:" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cout << dynamicArray[i] << " ";
    }
    std::cout << std::endl;

    // Liberar la memoria dinámica asignada al arreglo
    delete[] dynamicArray;

    return 0;
}
