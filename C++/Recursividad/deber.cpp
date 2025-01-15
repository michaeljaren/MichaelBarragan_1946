#include <iostream>
using namespace std;

// Función recursiva para dividir dos enteros
int dividir(int dividendo, int divisor, int cociente = 0) {
    // Caso base: si el dividendo es menor que el divisor
    if (dividendo < divisor) {
        return cociente; // Retornar el cociente acumulado
    }
    // Llamada recursiva, restando el divisor al dividendo y sumando 1 al cociente
    return dividir(dividendo - divisor, divisor, cociente + 1);
}

int main() {
    int dividendo, divisor;
    
    cout << "Ingrese el dividendo: ";
    cin >> dividendo;
    cout << "Ingrese el divisor: ";
    cin >> divisor;
    
    if (divisor == 0) {
        cout << "Error: división por cero no está permitida." << endl;
        return 1;
    }
    
    int resultado = dividir(dividendo, divisor);
    cout << "El cociente de " << dividendo << " dividido por " << divisor << " es: " << resultado << endl;
    
    return 0;
}
