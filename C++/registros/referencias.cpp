#include <iostream>
#include <cstdio>
using namespace std;

void funcion1(int *ptra) {
    *ptra = 300;
}

int main() {
    int a;
    int *ptra;
    ptra = &a;

    printf("Ingrese un numero: ");
    scanf("%d", &a);

    printf("El valor de a es: %d\n", a);
    printf("El numero ingresado es %d\n", *ptra);

    *ptra = 200;
    printf("El nuevo valor de a es: %d\n", a);

    funcion1(ptra);
    printf("El nuevo valor de a despues de la funcion1 es: %d\n", a);

    return 0;
}
