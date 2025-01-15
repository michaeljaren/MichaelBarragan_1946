#include <iostream>
using namespace std;

int main() {
    // Declaración de variables
    int numero;
    bool s;

    // Entrada: pedir el número
    cout << "Ingrese un número: ";
    cin >> numero;

    // Evaluación condicional
    if (numero != 0) { // Condición del diagrama
        s = true; // Verdadero
    } else {
        s = false; // Falso
    }

    // Mostrar el resultado
    if (s) {
        cout << "s es verdadero" << endl;
    } else {
        cout << "s es falso" << endl;
    }

    return 0;
}