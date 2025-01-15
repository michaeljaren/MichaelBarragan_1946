#include <iostream>
using namespace std;

int main() {
    int limiteInferior, limiteSuperior;

    // Poner los límites del intervalo
    do {
        cout << "Introduce el límite inferior: ";
        cin >> limiteInferior;
        cout << "Introduce el límite superior: ";
        cin >> limiteSuperior;

        if (limiteInferior >= limiteSuperior) {
            cout << "El límite inferior debe ser menor que el límite superior. Inténtalo de nuevo ";
        }
    } while (limiteInferior >= limiteSuperior);

    int numero;
    int sumaDentro = 0;
    int fueraIntervalo = 0;
    bool igualALimites = false; 

    cout << "Introduce números (0 para terminar):";
    while (true) {
        cin >> numero;

        if (numero == 0) {
            break; 
        }

        if (numero > limiteInferior && numero < limiteSuperior) {
            sumaDentro += numero; 
        } else {
            fueraIntervalo++; 
        }

        if (numero == limiteInferior || numero == limiteSuperior) {
            igualALimites = true; 
        }
    }

    // Mostrar resultados
    cout << "Suma de los números dentro del intervalo: " << sumaDentro << endl;
    cout << "Cantidad de números fuera del intervalo: " << fueraIntervalo << endl;
    if (igualALimites) {
        cout << "Se introdujo algún número igual a los límites del intervalo ";
    } else {
        cout << "No se introdujo ningún número igual a los límites del intervalo ";
    }

    return 0;
}