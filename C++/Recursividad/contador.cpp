#include <iostream>

using namespace std;

void counter(int n) {
    if (n == 0)
        return;
    else {
        cout << "Valor de n: " << n << endl;
        counter(n - 1);
        cout << "Valor de n después del control: " << n << endl;
        return;
    }
}

int main() {
    int contador = 3;
    counter(contador);
    return 0;
}
