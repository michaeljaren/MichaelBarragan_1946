#include <iostream>
using namespace std;

int main() {
    int n1, n2, n3;
    

    cout << "Ingresa el valor de n1= ";
    cin >> n1;
    cout << "Ingresa el valor de n2= ";
    cin >> n2;
    cout << "Ingresa el valor de n3= ";
    cin >> n3;

    cout << "Valores iniciales:" << endl;
    cout << "n1= " << n1 << ", n2= " << n2 << ", n3= " << n3 << endl;

    
    int aux= n1;
    n1 = n3;      
    n3 = n2;      
    n2 = aux;  

    cout << "Valores intercambiados:" << endl;
    cout << "n1= " << n1 << ", n2= " << n2 << ", n3= " << n3 << endl;

    return 0;
}
