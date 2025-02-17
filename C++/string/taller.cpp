#include <iostream>
using namespace std;
int main(){
    string cadena= "informatica ";
    //boramos los caracetres de la cadena 
    cadena.clear();
    cout <<cadena; //NO MUESTRA NADA
    //VOLVEMOS A INCIIARLIZAR EL VALOR
    cadena = "informatica ";

    //longitud de la cadena
    cout << " La cadena  " << cadena << " tiene " << cadena.length() << " caracteres " << endl;

    // pimer y ultimo caracter  
    cout << " Primer caracter : " <<cadena.front() << endl;  //igual que cadena 0
    cout <<" Ultimo caracter : " <<cadena.back() << endl; // igual que cadena [[cadena.length()-1]];

    //anadir cadenas
    cadena.append("moderna");
    cout<< cadena << endl;
    //añadimos un caracter
    char car = '0';
    cadena. append (1,car);
    cout<< cadena << endl;

    //volvemos a iniciarlizar con un valor 
    cadena = "informatica ";

    //buscar caracteres
    if  (cadena.find("i")!=std::string::npos)
    cout << " La posicion del primer caracter i: " <<cadena.find("i") << endl;
    cout << " Poscion del segundo caracter i:  " << cadena.find("i",1) << endl;

    //extraer subcadenas 
    string subcad;
    subcad = cadena.substr(2,3);
    cout<< subcad <<endl;
    subcad = cadena.substr(5);
    cout<< subcad <<endl;

    //rempalzar parte de la cadena 
    cadena.replace(6,2, "accion");
    cout<< cadena <<endl;
    
    return 0;

}