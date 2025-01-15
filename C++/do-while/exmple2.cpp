#include <iostream>
#include <cstdlib> // Para usar system("cls")
using namespace std;

main() {
    int op;

    while (true) {
        do {
            // Mostrar el menú
            cout << "Menu de opciones" << endl;
            cout << "1. Numero Abundante" << endl;
            cout << "2. Numero Deficiente" << endl;
            cout << "3. Numero Amigo" << endl;
            cout << "4. Salir" << endl;
            cout << "Elija una opcion: ";
            cin >> op;

            // Validar opción no válida
            if (op < 1 || op > 4) {
                cout << "Opcion no valida\n";
                system("pause"); // Esperar a que el usuario presione una tecla
                system("cls");   // Limpiar pantalla
            }

        } while (op < 1 || op > 4); // Repetir hasta que la opción sea válida

        // Ejecutar la acción correspondiente
        switch (op) {
            case 1:
                cout << "Abundantes" << endl;
                break;
            case 2:
                cout << "Deficientes" << endl;
                break;
            case 3:
                cout << "Amigos" << endl;
                break;
            case 4:
                cout << "Esta saliendo del sistema" << endl;
                break;
        }

        // Pausar antes de limpiar pantalla
        system("pause");
        system("cls");

        // Salir del bucle si la opción es 4
        if (op == 4) // Cambié el operador de asignación = a comparación ==
            break;
    }
}
