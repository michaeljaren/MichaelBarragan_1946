#include <iostream>
#include <stdlib.h> // libreria para el uso de rand
#include <time.h> // Liberia para el uso de time
using namespace std;
void llenaDatos(int v [], int ne){
    srand(time(NULL)); //funcion semilla para generar numeros
    for (int i = 0; i < ne; i++){
        v[i] = rand() % 20 +1;
    }
}
void verDatos(int v [], int ne){
    cout <<" Los elementos del vecrot son :";
    for (int i = 0; i < ne; i++){
        cout<<v[i]<<" ";
    }

}

float sumaPromedioCifrass(int v [], int ne){
    int suma = 0;
    for (int i = 0; i < ne; i++){
        suma += v[i];
    }
    return (float)suma/ne;
} 
int contarDejaboPromedio(int v [], int ne,float promedio){
    int contador = 0;
    for (int i = 0; i < ne; i++){
        if(v[i]<promedio){
            contador++;
        }
    }
    return contador;

}
void guardaElementosmenores(int v [], int ne, float promedio, int lista[]){
    int j= 0;
    for (int i = 0; i < ne; i++){
        if(v[i]<promedio){
            lista[j] = v[i];
            j++;
        }
    }
}

main(){
    int ne,menores;
    float promedio;
    cout<<"Cuantos elementos tiene el vector?: ";
    cin>>ne;
    int vector[ne];
    llenaDatos(vector, ne);
    verDatos(vector, ne);
    promedio = sumaPromedioCifrass(vector, ne);
    cout<<"El promedio es: "<<promedio<<endl;
    menores = contarDejaboPromedio(vector, ne, promedio);
    cout<<"Cantidad de elementos menores al promedio: "<<menores<<endl;
    cout <<""
    int lista[menores];
    guardaElementosmenores(vector, ne, promedio, lista);
}