#include <iostream>

int main() {
    int value = 42;
    int* ptr = &value;
    int** ptrPtr = &ptr;


    std::cout << "Valor original: " << value << std::endl;
    std::cout << "Dirección de memoria de 'value': " << &value << std::endl;

    *ptr = 100;
    **ptrPtr = 200;
    
    std::cout << "Valor modificado: " << value << std::endl;
    std::cout << "Dirección de memoria de 'value': " << &value << std::endl;

    return 0;
}
