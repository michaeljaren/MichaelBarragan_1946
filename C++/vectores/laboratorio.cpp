#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

struct Estudiante {
    int id;
    string nombre;
    float nota1, nota2, nota3;
    float promedio;
    float z;
    char categoria;
};

class SistemaEstudiantes {
private:
    vector<Estudiante> estudiantes;
    int contadorId = 1;

    float pedirNota() {
        float nota;
        while (true) {
            cin >> nota;
            if (nota >= 0 && nota <= 20) {
                return nota;
            } else {
                cout << "Nota invalida. Debe estar entre 0 y 20. Intente nuevamente: ";
            }
        }
    }

    float calcularMedia() {
        float suma = 0.0;
        for (const auto& est : estudiantes) {
            suma += est.promedio;
        }
        return estudiantes.empty() ? 0 : suma / estudiantes.size();
    }

    float calcularDesviacionEstandar(float media) {
        float suma = 0.0;
        for (const auto& est : estudiantes) {
            suma += pow(est.promedio - media, 2);
        }
        return estudiantes.empty() ? 0 : sqrt(suma / estudiantes.size());
    }

    void asignarCategorias(float media, float desviacion) {
        for (auto& est : estudiantes) {
            if (desviacion == 0) {
                est.z = 0;
            } else {
                est.z = (est.promedio - media) / desviacion;
            }

            if (est.z >= 1) {
                est.categoria = 'A';
            } else if (est.z >= 0) {
                est.categoria = 'B';
            } else if (est.z >= -1) {
                est.categoria = 'C';
            } else {
                est.categoria = 'D';
            }
        }
    }

    void actualizarCategorias() {
        float media = calcularMedia();
        float desviacion = calcularDesviacionEstandar(media);
        asignarCategorias(media, desviacion);
    }

public:
    void agregarEstudiante() {
        if (contadorId > 100) {
            cout << "No se pueden agregar mas estudiantes. Limite alcanzado." << endl;
            return;
        }
        Estudiante estudiante;
        estudiante.id = contadorId++;
        cin.ignore();
        cout << "Ingrese el nombre del estudiante: ";
        getline(cin, estudiante.nombre);
        cout << "Ingrese la nota 1: "; estudiante.nota1 = pedirNota();
        cout << "Ingrese la nota 2: "; estudiante.nota2 = pedirNota();
        cout << "Ingrese la nota 3: "; estudiante.nota3 = pedirNota();
        estudiante.promedio = (estudiante.nota1 + estudiante.nota2 + estudiante.nota3) / 3.0;
        estudiantes.push_back(estudiante);
        cout << "Estudiante agregado correctamente." << endl;
    }

    void eliminarEstudiante() {
        cout << "Eliminar por: \n1. ID\n2. Nombre\nIngrese una opcion: ";
        int opcion;
        cin >> opcion;
        cin.ignore();

        if (opcion == 1) {
            int id;
            cout << "Ingrese el ID del estudiante a eliminar: ";
            cin >> id;
            for (auto it = estudiantes.begin(); it != estudiantes.end(); ++it) {
                if (it->id == id) {
                    estudiantes.erase(it);
                    cout << "Estudiante eliminado correctamente." << endl;
                    return;
                }
            }
            cout << "No se encontro un estudiante con ese ID." << endl;
        } else if (opcion == 2) {
            string nombre;
            cout << "Ingrese el nombre del estudiante a eliminar: ";
            getline(cin, nombre);
            for (auto it = estudiantes.begin(); it != estudiantes.end(); ++it) {
                if (it->nombre == nombre) {
                    estudiantes.erase(it);
                    cout << "Estudiante eliminado correctamente." << endl;
                    return;
                }
            }
            cout << "No se encontro un estudiante con ese nombre." << endl;
        } else {
            cout << "Opcion no valida." << endl;
        }
    }

    void mostrarEstudiantes() {
        if (estudiantes.empty()) {
            cout << "No hay estudiantes registrados." << endl;
            return;
        }
        actualizarCategorias();
        cout << fixed << setprecision(2);
        cout << left << setw(5) << "ID"
            << setw(25) << "Nombre"
            << setw(10) << "Nota1"
            << setw(10) << "Nota2"
            << setw(10) << "Nota3"
            << setw(12) << "Promedio"
            << setw(10) << "Z"
            << "Categoria" << endl;

        for (const auto& estudiante : estudiantes) {
            cout << setw(5) << estudiante.id
                << setw(25) << estudiante.nombre
                << setw(10) << estudiante.nota1
                << setw(10) << estudiante.nota2
                << setw(10) << estudiante.nota3
                << setw(12) << estudiante.promedio
                << setw(10) << estudiante.z
                << estudiante.categoria << endl;
        }
    }

    void mostrarPromedioCurso() {
        float media = calcularMedia();
        cout << "El promedio del curso es: " << fixed << setprecision(2) << media << endl;
        cout << "La desviacion estandar del curso es: " << fixed << setprecision(2) << calcularDesviacionEstandar(media) << endl;
    }

    void actualizarEstudiante() {
        int id;
        cout << "Ingrese el ID del estudiante a actualizar: ";
        cin >> id;
        for (auto& est : estudiantes) {
            if (est.id == id) {
                cout << "Estudiante encontrado: " << est.nombre << endl;
                cout << "Ingrese el nuevo nombre del estudiante (actual: " << est.nombre << "): ";
                cin.ignore();  // Para ignorar el salto de línea que queda de cin
                getline(cin, est.nombre);

                cout << "Ingrese la nueva nota 1 (actual: " << est.nota1 << "): ";
                est.nota1 = pedirNota();
                cout << "Ingrese la nueva nota 2 (actual: " << est.nota2 << "): ";
                est.nota2 = pedirNota();
                cout << "Ingrese la nueva nota 3 (actual: " << est.nota3 << "): ";
                est.nota3 = pedirNota();
                
                // Actualizar el promedio
                est.promedio = (est.nota1 + est.nota2 + est.nota3) / 3.0;
                cout << "Estudiante actualizado correctamente." << endl;
                return;
            }
        }
        cout << "No se encontró un estudiante con ese ID." << endl;
    }

    void salir() {
        cout << "Saliendo del programa..." << endl;
    }
};

int main() {
    SistemaEstudiantes sistema;
    int opcion;
    do {
        cout << "\nMenu de opciones:\n1. Lista de estudiantes\n2. Anadir estudiante\n3. Actualizar estudiante\n4. Eliminar estudiante\n5. Promedio del curso\n6. Salir\nIngrese una opcion: ";
        cin >> opcion;
        switch (opcion) {
            case 1: sistema.mostrarEstudiantes(); break;
            case 2: sistema.agregarEstudiante(); break;
            case 3: sistema.actualizarEstudiante(); break;
            case 4: sistema.eliminarEstudiante(); break;
            case 5: sistema.mostrarPromedioCurso(); break;
            case 6: sistema.salir(); break;
            default: cout << "Opcion no valida. Intente nuevamente." << endl;
        }
    } while (opcion != 6);
    return 0;
}
