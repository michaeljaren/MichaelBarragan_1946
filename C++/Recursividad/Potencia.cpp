#include <iostream>
using namespace std;
int main() {
    int base, exponente;
    cout << "Ingrese el valor de la base: ";
    cin >> base;
    cout << "Ingrese el exponente: ";
    cin >> exponente;
    
    int resultadoPotencia = 1; 
    for (int i = 0; i < exponente; i++) {
        resultadoPotencia *= base; // Multiplica la base por sí misma dependiendo del numero de exponentes
    }
    
    int resultadoMultiplicacion = base * exponente;

    // Mostrar los resultados
    cout << "El resultado de la potencia es: " << resultadoPotencia << endl;
    cout << "El resultado de la multiplicacion es: " << resultadoMultiplicacion << endl;
    
    return 0;
}
