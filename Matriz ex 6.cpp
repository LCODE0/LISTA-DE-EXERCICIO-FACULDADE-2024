#include <iostream>
using namespace std;

int main() {
    int matriz1[4][4], matriz2[4][4], matriz3[4][4];

    // Leitura da primeira matriz
    cout << "Digite os elementos da primeira matriz 4x4:\n";
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> matriz1[i][j];
        }
    }

    // Leitura da segunda matriz
    cout << "Digite os elementos da segunda matriz 4x4:\n";
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> matriz2[i][j];
        }
    }

    // Criação da terceira matriz com os maiores valores
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (matriz1[i][j] > matriz2[i][j]) {
                matriz3[i][j] = matriz1[i][j];
            } else {
                matriz3[i][j] = matriz2[i][j];
            }
        }
    }

    // Impressão da terceira matriz
    cout << "Matriz com os maiores valores:\n";
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << matriz3[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}