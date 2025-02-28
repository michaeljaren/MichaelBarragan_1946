#include <iostream>
#include <fstream>
using namespace std;

int main(){
    // Create an ifstream object
    ofstream archivo;
    string frase;

    // Ask the user for a phrase
    cout << "Ingrese una frase para agregar al archivo: ";
    getline(cin, frase);

    // Open the file in write mode
    archivo.open("ejemplo1.txt", ios::out | ios::app);

    // Check if the file opened correctly
    if(archivo.is_open()){
        // Write the phrase to the file
        archivo << frase << endl;

        // Close the file
        archivo.close();
    } else {
        cout << "No se pudo abrir el archivo" << endl;
        return 1;
    }

    ifstream archivo_lectura;
    archivo_lectura.open("ejemplo1.txt", ios::in);

    if(archivo_lectura.is_open()){
        string linea;
        cout << "Contenido en el archivo: " << endl;

        while(getline(archivo_lectura, linea)){
            cout << linea << endl;
        }

        archivo_lectura.close();
    } else {
        cout << "No se pudo abrir el archivo para leer" << endl;
    }

    return 0;
}
