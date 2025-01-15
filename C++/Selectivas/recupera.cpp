#include <iostream>
using namespace std;

int main() 
{
    int n1, n2;
    char operacion;

    
    cout << "Ingresar primer valor: ";
    cin >> n1;
    cout << "Ingresar segundo valor: ";
    cin >> n2;


    cout << "Seleccione una operacion (+, -, *, /): ";
    cin >> operacion;

    switch (operacion) {
        case '+':
            cout << "Resultado de la suma: " << n1 + n2 << endl;
            break;
        case '-':
            cout << "Resultado de la resta: " << n1 - n2 << endl;
            break;
        case '*':
            cout << "Resultado de la multiplicacion: " << n1 * n2 << endl;
            break;
        case '/':
            if (n2 != 0) {
                cout << "Resultado de la division: " << n1 / n2 << endl;
            } else {
                cout << "Error: Division por cero no permitida." << endl;
            }
            break;
        default:
            cout << "Operacion no valida." << endl;
            break;
    }

    return 0;
}