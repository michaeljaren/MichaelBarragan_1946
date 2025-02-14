#include <iostream>
using namespace std;

void llenarCadena(char cad[], int n = 50) {
    cout << "Ingrese una cadena de caracteres: ";
    cin.getline(cad, n);
}

int longitudCadena(char cad[]) {
    int contador = 0;
    for (int i = 0; cad[i] != '\0'; i++)
        contador++;
    return contador;
}

int contarPalabras(char cad[]) {
    int palabras = 0;
    bool enPalabra = false; // Indicador para saber si estamos en una palabra

    for (int i = 0; cad[i] != '\0'; i++) {
        if (cad[i] != ' ') {
            if (!enPalabra) { // Si no está en una palabra y encuentra un carácter no espacio
                enPalabra = true; // Entramos en una nueva palabra
                palabras++; // Contamos una nueva palabra
            }
        } else {
            enPalabra = false; // Encontramos un espacio, salimos de la palabra
        }
    }
    return palabras;
}

int main() {
    char palabras[50];
    llenarCadena(palabras);
    cout << "La cadena ingresada es: " << palabras << endl;
    cout << "La longitud de la cadena es: " << longitudCadena(palabras) << endl;
    cout << "La cantidad de palabras en la cadena es: " << contarPalabras(palabras) << endl;

    return 0;
}
