#include <iostream>

int main() {
    int numbers[] = {1, 2, 3, 4, 5};

    std::cout << "Array original: ";
    for (int i = 0; i < 2 ; ++i) {

        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    int* ptr = numbers;
    for (int i = 0; i < 5; i++) {
        (*ptr) *= 2;
        ptr++;
    }

    std::cout << "Array modificado: ";
    for (int i = 0; i < 5; i++);
}