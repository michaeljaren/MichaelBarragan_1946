#include <iostream>
#include <iomanip> // Para usar setw()

using namespace std;

// Estructura para guardar los datos de cada estudiante
struct estudiante {
    int id;
    string nombres;
    float notap;
}; // Falta punto y coma aquí

int main() { 
    int ne;
    float suma = 0;
    
    bool ordena = true;

    cout << "Ingrese la cantidad de estudiantes que desea ingresar: ";
    cin >> ne;
    cin.ignore(); // Evita problemas con getline

    estudiante estudiantes[ne]; // Declaración correcta después de obtener 'ne'
    
    for (int i = 0; i < ne; i++) {
        cout << "Ingrese el id del estudiante: ";
        cin >> estudiantes[i].id;
        cin.ignore(); // Evita que getline lea una línea vacía
        
        cout << "Ingrese el nombre del estudiante: ";
        getline(cin, estudiantes[i].nombres);
        
        cout << "Ingrese la nota del estudiante: ";
        cin >> estudiantes[i].notap;
    }
    
    cout << "Los datos ingresados son: " << endl;
    cout << setw(5) << "ID" << setw(19) << "NOMBRE Y APELLIDO " << setw(15) << "NOTA" << endl;
    
    for (int i = 0; i < ne; i++) {
        cout << setw(5) << estudiantes[i].id << setw(15) << estudiantes[i].nombres << setw(17) << estudiantes[i].notap << endl;
        suma += estudiantes[i].notap;
    }
    
    cout << "El promedio de notas es: " << (float)suma / ne << endl;
    cout << "Listado de estudiantes de mayor nota a menor nota" << endl;
    
    for (int i = 0; i < ne - 1 && ordena; i++) {
        ordena = false;
        for (int j = 0; j < ne - 1; j++) {
            if (estudiantes[j].notap < estudiantes[j + 1].notap) {
                estudiante aux = estudiantes[j + 1];
                estudiantes[j + 1] = estudiantes[j];
                estudiantes[j] = aux;
                ordena = true; // Indica que hubo cambios en la lista para seguir iterando
            }
        }
    }

    for (int i = 0; i < ne; i++) {
        cout << setw(5) << estudiantes[i].id << setw(15) << estudiantes[i].nombres << setw(17) << estudiantes[i].notap << endl;
    }

    return 0;
}