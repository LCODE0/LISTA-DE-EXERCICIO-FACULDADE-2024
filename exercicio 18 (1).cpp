#include <iostream>
#include <vector>
using namespace std;

int main() {

  vector<int>vetor(10);
  int x;

  for(int i = 0; i < 10; i++){
    cout << "Digite os 10 numeros: " << endl;
    cin >> vetor[i];
  }

  cout << "\nDigite o numero X: " << endl;
  cin >> x;

  int contagem = 0;
  cout << "\nmultiplos de " << x << " no vetor:" << endl;
  for(int i = 0; i < 10; i++){
    if(vetor[i] % x == 0){
      cout << vetor[i] << " " << endl;
      contagem++;
    }
  }

  cout << "\nA quantidade de multiplos de " << x << ": " << contagem << endl;

  return 0;

  
}