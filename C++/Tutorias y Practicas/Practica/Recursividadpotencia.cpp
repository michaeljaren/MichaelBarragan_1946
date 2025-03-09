#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    int base, exponente;
    cout << "Ingrese el valor de la base: ";
    cin >> base;
    cout << "Ingrese el exponente: ";
    cin >> exponente;
    
    // Calcular la potencia
    int resultado = static_cast<int>(pow(base, exponente)); // Conversión explícita a entero
    int resultadoMultiplicacion = base * exponente; // Multiplicacion de la base por el exponente
    cout << "El resultado es: " << resultado << endl;
    cout << "El resultado de multiplicar la base por el exponente es: " << resultadoMultiplicacion << endl;
    
    return 0;
    
}
