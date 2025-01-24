#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

void llenaVector (int v[], int n){
    srand(time(NULL)); // función semilla para generar numeros
    for (int i = 0; i < n; i ++){
        v[i] = rand() % 20 + 1;
        //cin >> v[i];
    }
}

int ordenaBurbuja (int v[], int n){
    int mejora=1;
    int aux, contador = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n - mejora; j++){
            contador++;
            if (v[j] > v[j + 1]){
                aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
            }
        
        }
        mejora ++;
    }
    return contador;
}

void muestraVector (int v[], int n){
    for (int i = 0; i < n; i++){
        cout << v[i] << " ";
    }
}

main (){
    int ne;
    cout << "Numero de elementos: ";
    cin >> ne;
    int vec [ne];
    llenaVector (vec,ne);
    cout << "Vector original: ";
    muestraVector (vec, ne);
    cout << endl;
    cout << "El numero de comparaciones burbuja v1 = " << ordenaBurbuja (vec, ne);
    ordenaBurbuja (vec, ne);
    cout << "\nVector ordenado: "<<endl;
    muestraVector(vec,ne);
}

