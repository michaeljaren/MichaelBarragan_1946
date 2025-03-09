#include <iostream>
using namespace std;

// Función para separar cifras y calcular la suma de los dígitos
int separacifras(int num, int &digito) {
    int suma = 0, contador = 0;
    while (num > 0) {
       if (contador == 0){
        digito = num % 10;
        suma += num % 10;  // Obtén el último dígito y súmalo
        num /= 10;
        contador ++;
       }
               // Elimina el último dígito
    }
    return suma;
}

int main() {
    int num,digito, suma;
    cout << "Ingrese un numero entero: ";
    cin >> num;
    suma = separacifras(num,digito);  // Llama a la función para calcular la suma
    cout << "La suma de los digitos de " << num << " es: " << suma << endl;
    (suma % digito == 0) ? cout << "La suma de las cifras es multiplo del ultimo digito" : cout << "La suma de las cifras no es multiplo del ultimo digito";
cout << "La suma de las cifras es multilo del ultimo digito"<<endl;
    return 0;  // Fin del programa
}
