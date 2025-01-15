#include <iostream>
using namespace std;

float gravedad = 9.80;

void funcion1(int a) {
    float gravedad = 10.8;
    cout << "gravedad funcion " << gravedad << endl;
    cout << "gravedad global " << ::gravedad << endl;
    cout << "A:" << a << endl;
}

void funcion2(float x) {
    cout << "gravedad funcion es " << x << endl;
    cout << "X:" << x << endl;
}

int main() {
    int num1 = 10;
    float num2 = 20.5;

    {
        char letra = 'A';
        cout << "letra: " << letra << endl;
    }

    cout << gravedad << endl;
    funcion1(num1);
    funcion2(num2);
}
