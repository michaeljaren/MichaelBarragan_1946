#include <iostream>
using namespace std;

int main() {
    int numero;
    char opcion;
    
    do {
        cout << "Ingrese un número: ";
        cin >> numero;

        if (numero % 2 == 0) {
            cout << "El número es par" << endl;
        } else {
            cout << "El número es impar" << endl;
        }

        cout << "¿Desea ingresar otro número? (s/n): ";
        cin >> opcion;
    } while (opcion == 's' || opcion == 'S'); // Repite mientras el usuario quiera

    cout << "Gracias por usar el programa. ¡Hasta la próxima!" << endl;
    return 0;
}
