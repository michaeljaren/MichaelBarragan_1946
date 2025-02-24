#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "ahorcado.h"
using namespace std;

string palabraAleatoria(string palabras[], int tamano) {
    srand(time(NULL));
    int numero = rand() % tamano;
    return palabras[numero];
}

int opciones() {
    int op;
    cout << "1. Deportes" << endl;
    cout << "2. Animales" << endl;
    cout << "3. Frutas" << endl;
    cout << "4. Paises" << endl;
    cout << "5. Autos" << endl;
    cout << "Elige una categoria: ";
    cin >> op;
    return op;
}

void mostrarMuñeco(int intentos) {
    switch (intentos) {
        case 7:
            cout << "  ---------  \n";
            cout << "  |       |  \n";
            cout << "            \n";
            cout << "            \n";
            cout << "            \n";
            cout << "            \n";
            cout << "------------ \n";
            break;
        case 6:
            cout << "  ---------  \n";
            cout << "  |       |  \n";
            cout << "  O        \n";
            cout << "            \n";
            cout << "            \n";
            cout << "            \n";
            cout << "------------ \n";
            break;
        case 5:
            cout << "  ---------  \n";
            cout << "  |       |  \n";
            cout << "  O        \n";
            cout << "  |        \n";
            cout << "            \n";
            cout << "            \n";
            cout << "------------ \n";
            break;
        case 4:
            cout << "  ---------  \n";
            cout << "  |       |  \n";
            cout << "  O        \n";
            cout << " /|        \n";
            cout << "            \n";
            cout << "            \n";
            cout << "------------ \n";
            break;
        case 3:
            cout << "  ---------  \n";
            cout << "  |       |  \n";
            cout << "  O        \n";
            cout << " /|\\      \n";
            cout << "            \n";
            cout << "            \n";
            cout << "------------ \n";
            break;
        case 2:
            cout << "  ---------  \n";
            cout << "  |       |  \n";
            cout << "  O        \n";
            cout << " /|\\      \n";
            cout << " /          \n";
            cout << "            \n";
            cout << "------------ \n";
            break;
        case 1:
            cout << "  ---------  \n";
            cout << "  |       |  \n";
            cout << "  O        \n";
            cout << " /|\\      \n";
            cout << " / \\      \n";
            cout << "            \n";
            cout << "------------ \n";
            break;
        case 0:
            cout << "  ---------  \n";
            cout << "  |       |  \n";
            cout << "  O        \n";
            cout << " /|\\      \n";
            cout << " / \\      \n";
            cout << " PERDISTE!  \n";
            cout << "------------ \n";
            break;
    }
}

void jugarAhorcado(string palabra) {
    string palabraOculta(palabra.length(), '_');
    int intentos = 7;
    char letra;
    bool acertado;
    string letrasUsadas = "";

    while (intentos > 0 && palabraOculta != palabra) {
        mostrarMuñeco(intentos);
        cout << "\nPalabra: " << palabraOculta << "\n";
        cout << "Intentos restantes: " << intentos << "\n";
        cout << "Letras usadas: " << letrasUsadas << "\n";
        cout << "Ingresa una letra: ";
        cin >> letra;

        if (letrasUsadas.find(letra) != string::npos) {
            cout << "Ya usaste esa letra. Intenta con otra.\n";
            continue;
        }

        letrasUsadas += letra;
        acertado = false;

        for (size_t i = 0; i < palabra.length(); i++) {
            if (palabra[i] == letra) {
                palabraOculta[i] = palabra[i];
                acertado = true;
            }
        }

        if (!acertado) {
            intentos--;
            cout << "Letra incorrecta.\n";
        }
    }

    mostrarMuñeco(intentos);

    if (palabraOculta == palabra) {
        cout << "\nFelicidades, adivinaste la palabra: " << palabra << "\n";
        cout << "Te mereces un premio" << endl;
    } else {
        cout << "\nPerdiste. Vuelve a intentarlo. La palabra era: " << palabra << "\n";
    }
}

int main() {
    const int tamanoMaximo = 8;
    string palabras[tamanoMaximo], palabraSeleccionada;
    int op;

    cout << "Bienvenido al Juego del Ahorcado" << endl;
    cout << "--------------------------" << endl;
    op = opciones();

    switch (op) {
        case 1:
            deportes(palabras);
            palabraSeleccionada = palabraAleatoria(palabras, 5);
            break;
        case 2:
            animales(palabras);
            palabraSeleccionada = palabraAleatoria(palabras, 5);
            break;
        case 3:
            frutas(palabras);
            palabraSeleccionada = palabraAleatoria(palabras, 5);
            break;
        case 4:
            paises(palabras);
            palabraSeleccionada = palabraAleatoria(palabras, 8);
            break;
        case 5:
            autos(palabras);
            palabraSeleccionada = palabraAleatoria(palabras, 5);
            break;
        default:
            cout << "Opcion no valida.\n";
            return 1;
    }

    jugarAhorcado(palabraSeleccionada);

    return 0;
}

