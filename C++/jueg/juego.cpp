#include <iostream>
#include <cstdlib>
#include <ctime>
#include "arrays.h" 

void jugarAdivinanza(int v[], int n) {
    ordenarBurbujav3(v, n); 
    std::cout << "\nNumeros ordenados: ";
    verDatos(v, n);
    std::cout << std::endl;

    int numeroBuscado = v[rand() % n]; 
    int intento, intentosRestantes = 3;

    std::cout << "\nAdivina un numero de la lista Tienes 3 intentos.\n";
    
    while (intentosRestantes > 0) {
        std::cout << "Intento " << (4 - intentosRestantes) << ": ";
        std::cin >> intento;

        if (intento == numeroBuscado) {
            std::cout << " Felicidadesssss  Adivinaste el numero. Te mereces un chocolote \n";
            return;
        } else {
            std::cout << "  Incorrecto. Vamos intentalo de nuevo !! ";
            if (intento < numeroBuscado) {
                std::cout << " Te voy ayudar jsjsjsn... Pista: El numero es mayor.\n";
            } else {
                std::cout << " Te voy ayudar jsjsjsn... Pista: El numero es menor.\n";
            }
        }

        intentosRestantes--;
    }

    std::cout << " :( Se acabaron los intentos. El numero era " << numeroBuscado << ".\n";
}

int main() {
    srand(time(NULL)); 

    int ri, rs, n;
    std::cout << "Ingresa el rango inferior: ";
    std::cin >> ri;
    std::cout << "Ingresa el rango superior: ";
    std::cin >> rs;
    do {
        std::cout << "Ingresa la cantidad de numeros (maximo  10): ";
        std::cin >> n;
    } while (n < 1 || n > 10);

    int v[n];
    std::cout << "\nGenerando numeros aleatorios...\n";
    vectorn::llenar(v, n, ri, rs);
    std::cout << std::endl;

    jugarAdivinanza(v, n);

    return 0;
}
