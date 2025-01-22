#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace std;

void showMatrixWithDiagonals(const vector<vector<int>>& matrix) {
    int n = matrix.size();
    cout << "Matriz con diagonales resaltadas:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i == j || i + j == n - 1) {
                cout << "[" << matrix[i][j] << "]" << " ";
            } else {
                cout << matrix[i][j] << "   ";
            }
        }
        cout << "\n";
    }
    cout << endl;
}

int main() {
    srand(time(0));
    int n;
    cout << "Ingrese el tamano de la matriz cuadrada: ";
    cin >> n;
    vector<vector<int>> matrix(n, vector<int>(n));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            matrix[i][j] = 10 + rand() % 11;
        }
    }
    int sumPrincipal = 0, sumSecondary = 0;
    for (int i = 0; i < n; ++i) {
        sumPrincipal += matrix[i][i];
        sumSecondary += matrix[i][n - 1 - i];
    }
    string comparison;
    if (sumPrincipal > sumSecondary) {
        comparison = "Diagonal Principal es mayor.";
    } else if (sumPrincipal < sumSecondary) {
        comparison = "Diagonal Secundaria es mayor.";
    } else {
        comparison = "Ambas diagonales son iguales.";
    }
    cout << "\nMatriz generada:\n";
    for (const auto& row : matrix) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << "\n";
    }
    cout << "\nSuma de la Diagonal Principal: " << sumPrincipal << endl;
    cout << "Suma de la Diagonal Secundaria: " << sumSecondary << endl;
    cout << "Resultado: " << comparison << endl;
    showMatrixWithDiagonals(matrix);
    return 0;
}
