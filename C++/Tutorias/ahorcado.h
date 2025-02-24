#include <iostream>
#include <string>
using namespace std;

void deportes(string deportes[]) {
    string deportesx[5] = {"futbol", "tenis", "baloncesto", "voley", "natacion"};
    for (int i = 0; i < 5; i++) {
        deportes[i] = deportesx[i];
    }
}

void animales(string animales[]) {
    string animalesx[5] = {"perro", "gato", "conejo", "tigre", "leon"};
    for (int i = 0; i < 5; i++) {
        animales[i] = animalesx[i];
    }
}

void frutas(string frutas[]) {
    string frutasx[5] = {"manzana", "naranja", "pera", "platano", "uva"};
    for (int i = 0; i < 5; i++) {
        frutas[i] = frutasx[i];
    }
}

void paises(string paises[]) {
    string paisesx[8] = {"peru", "ecuador", "colombia", "venezuela", "argentina", "chile", "bolivia", "china"};
    for (int i = 0; i < 8; i++) { 
        paises[i] = paisesx[i];
    }
}

void autos(string marcas[]) {
    string marcasx[5] = {"ford", "toyota", "bmw", "audi", "mercedes"};
    for (int i = 0; i < 5; i++) {
        marcas[i] = marcasx[i];
    }
}
