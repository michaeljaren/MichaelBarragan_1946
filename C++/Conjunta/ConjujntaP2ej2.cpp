#include <iostream>

//CUERPO DE LA FUNCION 
void identificarCadena(const char* cadena) {
    bool esNumerica = true;
    bool esAlfabetica = true;
    bool esAlfanumerica = true;

    // Iterar sobre cada carácter de la cadena
    for (int i = 0; cadena[i] != '\0'; i++) {
        char c = cadena[i];

        // Verificar si es un carácter numérico 
        if (c < '0' || c > '9') {
            esNumerica = false;
        }

        // Verifica si es un carácter alfabético 
        if (!((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))) {
            esAlfabetica = false;
        }

        // Verifica si es un carácter alfanumérico
        if (!((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))) {
            esAlfanumerica = false;
        }
    }

    // ANALIZA Y DESPUES IMRPIME EL RESULTADO
    if (esNumerica) {
        std::cout << "La cadena es numerica." << std::endl;
    } else if (esAlfabetica) {
        std::cout << "La cadena es alfabetica." << std::endl;
    } else if (esAlfanumerica) {
        std::cout << "La cadena es alfanumerica." << std::endl;
    } else {
        std::cout << "La cadena contiene caracteres no numericos ni alfabeticos." << std::endl;
    }
}


//EJEMPLO
//Para comprobar que funcione podemos cambiar los ejemplos que estan entre comillas ""
int main() {
    const char* cadena1 = "123495";
    const char* cadena2 = "Hola";
    const char* cadena3 = "Pez321";
    const char* cadena4 = "Hola@Mundo";
    
    identificarCadena(cadena1); 
    identificarCadena(cadena2); 
    identificarCadena(cadena3); 
    identificarCadena(cadena4); 

    return 0;
}
