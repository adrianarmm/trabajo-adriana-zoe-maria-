#include <iostream>

int Sum(int a, int b) {
    return a + b;
}

int Subtract(int a, int b) {
    return a - b;
}

int main() {

    int (*operation)(int, int);

    operation = Sum;

    int result = operation(10, 5);
    std::cout << "Resultado de la suma: " << result << std::endl;

    operation = Subtract;

    result = operation(10, 5);
    std::cout << "Resultado de la resta: " << result << std::endl;

    return 0;
}
