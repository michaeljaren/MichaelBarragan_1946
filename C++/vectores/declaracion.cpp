#include <iostream>
#include <vector>

using namespace std;
void cambiar_elemento(vector<int> &num)
{
    num[0] = 100;
}

int main() {
    vector<int> datos;
    vector<float> notas(3, 7.9);  // INICIALIZA CON 3 ELEMENTOS DE 7.9
    vector<int> datos1;  // Declaración de datos1
    datos.push_back(10);
    datos.push_back(20);
    datos.push_back(30);
    datos.push_back(40);
    datos.push_back(50);
    datos1 = datos;

    for (std::vector<int>::size_type i = 0; i < datos.size(); i++) {
        cout << datos[i] << " ";
    }
    cout << endl;
    for (auto x : datos) {
        cout << x << " ";
    }
    cout << "\n";

    for (auto y: notas) {
        cout << y << " ";
    }
    cout << "\n";

    datos1 = datos;

    cout << "Datos 1\n";

    for (auto x : datos1) {
        cout << x << " ";
    }
    datos.erase(datos.begin() + 2, datos.begin() + 4);
    cout<<"\nNuevos elementos de datos"<<endl;
    for (auto x : datos) {
        cout << x << " ";
    }
    datos.erase(datos.begin() + 1, datos.begin()+2);
    cout<<"\nNuevos elementos de datos"<<endl;
    for (auto x : datos) {
        cout << x << " ";
    }
    cout<<"insertando elementos entre elementos"<<endl;
    datos.insert(datos.begin()+1, 80);
    cout<<"\nNuevos elementos de datos"<<endl;
    for (auto x : datos) {
        cout << x << " ";
    }
    cout<<"Insertando valores en la posicion n veces"<<endl;
    datos.insert(datos.begin()+2, 3, 23);
    cout<<"\nNuevos elementos de datos"<<endl;
    for (auto x : datos) {
        cout << x << " ";
    }
    cambiar_elemento(datos);
    cout<<"\nNuevos elementos de datos"<<endl;
    for (auto x : datos) {
        cout << x << " ";
}
datos.pop_back();
    cout<<"\nNuevos elementos borrados "<<endl;
    for (auto x : datos) {
        cout << x << " ";
    }
    cout << boolalpha<<endl;

    cout << datos.empty();
    

}






// Explicación:

//Este programa inicializa un vector de enteros llamado datos. Luego, se agregan dos elementos al vector utilizando el método push_back(). Después, se muestra el contenido del vector utilizando un bucle for para cada elemento. Finalmente, se utiliza un bucle for-each para mostrar cada elemento del vector utilizando el auto keyword.

//Este código muestra cómo se puede manejar un vector de enteros en C++ y cómo se puede usar un bucle for para mostrar sus elementos. La diferencia entre un bucle for y un bucle for-each es que el bucle for-each es más legible y puede ser más eficiente para mostrar los elementos de un vector. Además, se puede usar el auto keyword para simplificar la sintaxis y mejorar la legibilidad del código.

//Nota: Este código utiliza la biblioteca estándar de C++. Si deseas usar otro tipo de biblioteca, como la STL (Standard Template Library), tendrás que incluirla en tu código. También es importante recordar que los auto keyword solo funcionan en C++11 y superior. Si estás utilizando una versión anterior de C++, deberás usar la sintaxis de declaración explícita para variables auto
