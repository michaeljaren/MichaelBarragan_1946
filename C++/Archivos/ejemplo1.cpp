#include <fstream>
#include <iostream>
using namespace std;
int main(){
    //crear un objeto de tipo ifstream para escrbir en el archivo
    ofstream archivoSalida;
    archivoSalida.open("ejemplo1.txt");
    //abrir el archivo
    if(archivoSalida.is_open()){
        //escribir en el archivo
        archivoSalida <<"Hola, mundo" <<endl;
        archivoSalida <<"Este es un ejemplo de escritura en un archivo" <<endl;
        archivoSalida <<"Gracias por utilizar este programa" <<endl;
        //cerrar archivo
        archivoSalida.close();
        cout << "Archivo creado y escrito exitosamente" << endl;
    } else {
        cout << "No se pudo crear el archivo" << endl;
    }
    return 0;
}
