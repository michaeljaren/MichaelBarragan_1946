#include <iostream>
#include <cctype> // Para funciones isdigit y isalpha 
// se usa  para clasificar caracteres y comprobar si un carácter tiene un atributo específico

// Función para identificar el tipo de cadena
std::string identificarTipoCadena(const char* cadena) {
    bool tieneDigitos = false;
    bool tieneLetras = false;

    for (int i = 0; cadena[i] != '\0'; i++) {
        if (std::isdigit(cadena[i])) {
            tieneDigitos = true;
        } else if (std::isalpha(cadena[i])) {
            tieneLetras = true;
        } else {
            // Caracteres especiales encontrados especialemente el arroba @
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
    

    // Ejemplo
    char input[100];
    std::cout << "Introduce una cadena: ";
    std::cin.getline(input, 100);

    // Llamar a la función
    std::string resultado = identificarTipoCadena(input);

    // Mostrar el resultado
    std::cout << resultado << std::endl;

    return 0;
}
