#include <iostream>
int main() {
    int valor;
    std::cout << "Introduce un valor entre 1 y 20: ";
    std::cin >> valor;
    
    const char* categorias[] = {
        "Deficiente", // 1
        "Deficiente", // 2
        "Deficiente", // 3
        "Deficiente", // 4
        "Deficiente", // 5
        "Regular",    // 6
        "Regular",    // 7
        "Regular",    // 8
        "Regular",    // 9
        "Regular",    // 10
        "Bueno",      // 11
        "Bueno",      // 12
        "Bueno",      // 13
        "Bueno",      // 14
        "Bueno",      // 15
        "Muy bueno",  // 16
        "Muy bueno",  // 17
        "Muy bueno",   // 18
        "Excelente",   // 19
        "Excelente"    // 20
    };

    const char* categoria = (valor >= 1 && valor <= 20) ? categorias[valor - 1] : "Valor fuera de rango. Introduce un valor entre 1 y 20.";
    std::cout << categoria << std::endl;

    return 0;
}
