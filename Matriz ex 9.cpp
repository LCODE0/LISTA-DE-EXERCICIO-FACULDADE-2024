#include <iostream>
using namespace std;

int main() {
  int matriz[3][3];
  int soma = 0;

  // Leitura da matriz
  cout << "Digite os elementos da matriz 3x3:\n";
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cin >> matriz[i][j];
    }
  }

  // Soma dos elementos abaixo da diagonal principal
  for (int i = 1; i < 3; i++) {
    for (int j = 0; j < i; j++) {
      soma += matriz[i][j];
    }
  }

  // Impressão da soma
  cout << "A soma dos elementos abaixo da diagonal principal é: " << soma << endl;

  return 0;
}