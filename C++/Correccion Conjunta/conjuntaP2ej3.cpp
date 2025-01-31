#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

// Función para obtener la elección del usuario
string obtenerEleccionUsuario() {
    string eleccion;
    cout << "Elige piedra, papel o tijera: ";
    cin >> eleccion;
    while (eleccion != "piedra" && eleccion != "papel" && eleccion != "tijera") {
        cout << "Eleccion invalida. Por favor elige piedra, papel o tijera: ";
        cin >> eleccion;
    }
    return eleccion;
}

// Función para obtener la elección de la máquina
string obtenerEleccionMaquina() {
    int random = rand() % 3; 
    if (random == 0) return "piedra";
    else if (random == 1) return "papel";
    else return "tijera";
}

// Función para determinar el ganador de la ronda
string determinarGanadorRonda(string usuario, string maquina) {
    if (usuario == maquina) return "Empate";
    else if ((usuario == "piedra" && maquina == "tijera") ||
            (usuario == "papel" && maquina == "piedra") ||
            (usuario == "tijera" && maquina == "papel")) {
        return "Usuario";
    } else {
        return "Maquina";
    }
}

// Función para determinar el ganador del juego
string determinarGanadorJuego(int puntosUsuario, int puntosMaquina) {
    if (puntosUsuario > puntosMaquina) return "Usuario";
    else if (puntosMaquina > puntosUsuario) return "Maquina";
    else return " El Empate";
}

// Función principal para jugar el juego
void jugar() {
    srand(static_cast<unsigned>(time(0))); // Inicializa la semilla para generar números aleatorios
    cout << " !!!!     Bienvenido al juego de Piedra, Papel o Tijera ESPERO QUE TE DIVIERTAS   !!!!" << endl;
    string dificultad;
    
    cout << "Selecciona la dificultad (principiante, intermedio, avanzado): ";
    cin >> dificultad;

    int puntosUsuario = 0;
    int puntosMaquina = 0;

    if (dificultad == "intermedio") {
        puntosMaquina = 1;
    } else if (dificultad == "avanzado") {
        puntosMaquina = 2;
    }

    // Juega 5 rondas
    for (int i = 0; i < 5; i++) {
        cout << "\nRonda " << (i + 1) << endl;
        string eleccionUsuario = obtenerEleccionUsuario();
        string eleccionMaquina = obtenerEleccionMaquina();
        
        cout << "La mAquina escogio : " << eleccionMaquina << endl;
        string ganador = determinarGanadorRonda(eleccionUsuario, eleccionMaquina);
        cout << "Ganador de la ronda: " << ganador << endl;

        if (ganador == "Usuario") {
            puntosUsuario++;
        } else if (ganador == "Maquina") {
            puntosMaquina++;
        }
    }

    cout << "\nPuntajes finales: Usuario " << puntosUsuario << " - Maquina " << puntosMaquina << endl;
    cout << " WINNNN  !!! Ganador del juego es : " << determinarGanadorJuego(puntosUsuario, puntosMaquina) << endl;
}

int main() {
    jugar();
    return 0;
}
