#include <iostream>

int main()

{

    int *p = new int;

    if (p == nullptr) {
        std::cout << "Error: No se pudo asignar memoria dinámica." << std::endl;
        return 1;
    }

    *p = 42;

    std::cout << "Valor asignado: " << *p << std::endl;
    
    delete p;

    return 0;
}
