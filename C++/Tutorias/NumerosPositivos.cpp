//Escribe un programa que pida al usuario un número entero positivo y luego imprima su tabla de multiplicar del 1 al 10.

#include <iostream>
using namespace std;

int main() {
    int numero;
    do {
        cout << "Ingrese un numero positivo: ";
        cin >> numero;
        if (numero <= 0)
            cout << "El numero ingresado no es valido, intente de nuevo.\n";
    } while (numero <= 0);

    // Imprimir la tabla de multiplicar
    for (int i = 1; i <= 10; i++) {
        cout << numero << " x " << i << " = " << numero * i << endl;
    }

    return 0; // Este retorno debe estar aquí, fuera del bucle
}
