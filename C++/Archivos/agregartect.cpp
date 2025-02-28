#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ofstream archivoSalida;
    archivoSalida.open("ejemplo1.txt",ios::app);
    if(archivoSalida.is_open()){
        archivoSalida <<"Agregando una nueva linea al final " <<endl;
        archivoSalida <<" Otra mas para molestar sjjsjs"<<endl;
        archivoSalida.close();
        cout << "texto agregado con exito" << endl;
    } else {
        cout<<"No se pudo abrir el archivo "<<endl;
    }
    return 0;
    
}