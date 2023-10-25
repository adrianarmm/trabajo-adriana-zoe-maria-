#include <iostream>
int main()
{

int a = 3;
double b = 2.15;

int *ptrA = &a;
double *ptrB = &b;

printf("Valor de a: %d\n", a);
printf("Valor de b: %lf\n", b);

*ptrA = 8;
*ptrB = 1.5;
    printf("Nuevo valor de a: %d\n", a);
    printf("Nuevo valor de b: %lf\n", b);
    return 0;
}
