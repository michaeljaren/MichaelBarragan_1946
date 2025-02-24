#include <iostream>
#include <vector>
using namespace std;
int main(){
    //declaramos el vector 
    vector<int>miVector;
    //ahora inciialazamos el vector usando push back
    miVector.push_back(5);
    miVector.push_back(10);
    miVector.push_back(15);
    miVector.push_back(20);
    //mostramos el contenido del vector
    for(int x : miVector)
    cout<< x<< " ";
      //finalizamos con éxito el programa
}