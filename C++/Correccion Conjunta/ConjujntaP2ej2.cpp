#include <iostream>
#include <string>   //almacenamiento de cadenas

// Funciones equivalentes a isdigit e isalpha
bool esDigito(char c) {
    return c >= '0' && c <= '9';
}

bool esLetra(char c) {
    return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
}

// Función principal
std::string identificarTipoCadena(const char* cadena) {
    bool tieneDigitos = false;
    bool tieneLetras = false;

    for (int i = 0; cadena[i] != '\0'; i++) {
        if (esDigito(cadena[i])) {
            tieneDigitos = true;
        } else if (esLetra(cadena[i])) {
            tieneLetras = true;
        } else {
            // Caracteres especiales encontrados
            return "La cadena contiene caracteres especiales.";
        }
    }

    // Determinar el tipo de cadena según los resultados
    if (tieneLetras && tieneDigitos) {
        return "La cadena es alfanumerica.";
    } else if (tieneLetras) {
        return "La cadena es alfabetica.";
    } else if (tieneDigitos) {
        return "La cadena es numerica.";
    } else {
        return "La cadena está vacia.";
    }
}

int main() {
    char input[100];
    std::cout << "Introduce una cadena: ";
    std::cin.getline(input, 100);

    // Llamar a la función
    std::string resultado = identificarTipoCadena(input);

    // Mostrar el resultado
    std::cout << resultado << std::endl;

    return 0;
}
