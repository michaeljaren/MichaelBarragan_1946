#include <iostream>
using namespace std;
struct persona{
    string nombre= "Sin nombre";  //componentes llamados miembros teniendo un nombre unico

    int edad=0;
    float estatura = 0.0;
}persona1,persona2; //ambito global

struct {
    string nombre;
    float nota;
}e1,e2;


void registro(){
    persona p5,p6;
}
main(){
    persona persona3,persona4;  //det ipo local p3,p4 , persona es un nuevo tipo de dato struc
    persona3.nombre= " Carlos Ortiz"; 
    persona3.edad=25;
    persona3.estatura=1.70;
    
  cout <<" Ingrese datos de la persona 2"<<endl;
  cout<<" nombre = ";
  getline (cin,persona4.nombre);
  cout<<" edad = ";
  cin>>persona4.edad;
  cout<<" estatura = ";
  cin>>persona4.estatura;
  cout <<"nombre = "<<persona3.nombre<<"\t";
    cout <<"edad = "<<persona3.edad<<"\t";
    cout <<"estatura = "<<persona3.estatura<<endl;
  cout <<"nombre = "<<persona4.nombre<<"\t";
    cout <<"edad = "<<persona4.edad<<"\t";
    cout <<"estatura = "<<persona4.estatura<<"\t";
    cout<<"Datos del estudiante 1 = "<<endl;
    cout<<"nombre = ";
    cin.ignore();
    getline (cin,e1.nombre);
    cout<<"Nota:";
    //modificando valores

}
