#include <iostream>
#include <string>
using namespace std;
void cambiarString(string &nombre){
    nombre = "Sin nombre";

}
void cambiarArrive(char apellido[]){
    cout<<"Ingresa el nuevo apelledio: "; 
    cin.getline(apellido, 20);
}
main(){
    string nombre,apodo;
    string curso [5]={"Matematicas","Fisica","Quimica","Programacion","Electronica"};
    char apellido[20];
    cout << "Ingrese sus nombres: ";
    getline(cin, nombre);
    cout << "Ingrese sus apellidos: ";
    cin.getline(apellido, 20);
    cout <<"Su apellido es: "<<apellido <<endl;
    cout <<" Su nombre luego de llamar  a la funcion: "<<nombre <<endl;
    cin.getline(apellido,20);
    cambiarArrive(apellido);
    cout <<"Su apellido luefo de llamar a la funcion es : "<<apellido <<endl;
    


}

    