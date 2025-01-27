#include <iostream>

void identificarCadena(const char* cadena) {
    bool esNumerica = true;    // Suponemos que es numérica
    bool esAlfabetica = true;  // Suponemos que es alfabética
    bool esAlfanumerica = false; // Inicialmente no se considera alfanumérica

    // Iterar sobre cada carácter de la cadena
    for (int i = 0; cadena[i] != '\0'; i++) {
        char c = cadena[i];

        // Verificar si es un carácter numérico (ASCII: '0' = 48, '9' = 57)
        if (c < '0' || c > '9') {
            esNumerica = false; // No es numérica
        }

        // Verificar si es un carácter alfabético (ASCII: 'A' = 65, 'Z' = 90, 'a' = 97, 'z' = 122)
        if (!((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))) {
            esAlfabetica = false; // No es alfabética
        }

        // Si el carácter es alfanumérico
        if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
            esAlfanumerica = true; // Al menos un carácter es alfanumérico
        }
    }

    // Imprimir el resultado
    if (esNumerica) {
        std::cout << "La cadena es numérica." << std::endl;
    } else if (esAlfabetica) {
        std::cout << "La cadena es alfabética." << std::endl;
    } else if (esAlfanumerica) {
        std::cout << "La cadena es alfanumérica." << std::endl;
    } else {
        std::cout << "La cadena contiene caracteres no numéricos ni alfabéticos." << std::endl;
    }
}

int main() {
    // Ejemplo de uso
    const char* cadena1 = "12345";       // Cadena numérica
    const char* cadena2 = "HolaMundo";   // Cadena alfabética
    const char* cadena3 = "Hola123";     // Cadena alfanumérica
    const char* cadena4 = "Hola@Mundo";   // Contiene caracteres especiales
    const char* cadena5 = " ";            // Espacio
    const char* cadena6 = "";             // Cadena vacía
    
    identificarCadena(cadena1); // La cadena es numérica.
    identificarCadena(cadena2); // La cadena es alfabética.
    identificarCadena(cadena3); // La cadena es alfanumérica.
    identificarCadena(cadena4); // La cadena contiene caracteres no numéricos ni alfabéticos.
    identificarCadena(cadena5); // La cadena contiene caracteres no numéricos ni alfabéticos.
    identificarCadena(cadena6); // La cadena contiene caracteres no numéricos ni alfabéticos.

    return 0;
}
