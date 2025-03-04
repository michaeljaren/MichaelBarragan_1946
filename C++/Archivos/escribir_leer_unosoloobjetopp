#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
    fstream archivo;
    string frase,nombreArchivo;

    cout<<"Ingrese el nombre del archivo con extencion"<<endl;
    cin>>nombreArchivo;
    
    cout <<"Escriba una frase para agrear al archivo";
    cin.ignore();
    getline (cin,frase);
    archivo.open (nombreArchivo,ios::out | ios::app);
    if(archivo.is_open()){
        archivo<<frase<<endl;
        cout<<"Frase agregada con exito"<<endl;
        archivo.close();
    }else{
        cout<<"No se pudo abrir el archivo"<<endl;
    }
    return 0;


}