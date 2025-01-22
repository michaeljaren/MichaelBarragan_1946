#include <iostream>
using namespace std;
void llenartabla(int tabla[][50], int f, int c){
    for(int i=0; i<f; i++){
        for(int j=0; j<c; j++){
            cout<<"Introduce el valor de la posicion ["<<i<<"]["<<j<<"] : ";
            cin>>tabla[i][j];
        }
    }

}
// This function prints the elements of a 2D array (table) in a formatted manner.
// Assumes that the table has been previously filled with values.

void imprimertabla(){
}
main(){
int tabla[50][50], filas, columnas;
cout<<"Introduce el numero de filas : ";
cin>>filas;
cout<<"Introduce el numero de columnas : ";
cin>>columnas;


}