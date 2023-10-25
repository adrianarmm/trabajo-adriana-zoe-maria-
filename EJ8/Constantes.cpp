#include <iostream>

void saludar(){
    std::cout << "¡Hola, mundo!" << std::endl;
}
typedef int Entero;  // Alias de tipo para 'int'

// Declaración de una enumeración
enum DiaSemana { LUNES, MARTES, MIERCOLES, JUEVES, VIERNES, SABADO, DOMINGO };
int main(){
    const int edad = 25;
    const double pi = 3.14159265359;

    std::cout << "Edad: " << edad << std::endl;
    std::cout << "Valor de Pi: " << pi << std::endl;

    saludar();  //Llamada a la función que no devuelve un valor

    Entero numero = 42;
    std::cout << "Número: " << numero << std::endl;

    const int numeroMaximoIntentos = 3;
    DiaSemana hoy = MARTES;

    std::cout << "Número máximo de intentos: " << numeroMaximoIntentos << std::endl;
    std::cout << "Hoy es: " << hoy << std::endl;

    return 0;
}
