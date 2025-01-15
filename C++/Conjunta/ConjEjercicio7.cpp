#include <iostream>
#include <cmath>
using namespace std;

main() {
    int n; 
    float X = 0; 
    float n1, n2, d; 
    cout << "Ingrese el numero de terminos de esta serie: ";
    cin >> n;
    for (int n3 = 1; n3 <= n; n3++) {
        if (n3 == 1) {
            X = 2.0 / 1; 
        } else if (n3 == 2) {
            X = 3.0 / 3; 
        } else if (n3 == 3) {
            X = 6.0 / 5; 
        } else if (n3 == 4) {
            X = 11.0 / 7; 
        } else {
            n1 = n3 * n3;
            n2 = n3; 
            d = n3 + 2; 
            if (n3 % 2 == 0) {
                X = (n1 + n2) / d;
            } else {
                X = (n1 + n2) / d;
            }
        }
    }
    cout << "El valor de X es: " << X << endl;

    return 0;
}