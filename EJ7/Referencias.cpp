#include <iostream>

int main() {
    int originalVariable = 42;
    int &reference = originalVariable; // Declaración de una referencia
    std::cout << "Valor originalVariable: " << originalVariable << std::endl;
    std::cout << "Valor a través de la referencia: " << reference << std::endl;

    reference = 100; // Modificamos la variable original a través de la referencia

    std::cout << "Nuevo valor de originalVariable: " << originalVariable << std::endl;
    std::cout << "Nuevo valro a través de la referencia: " << reference << std::endl;

    return 0;
}
