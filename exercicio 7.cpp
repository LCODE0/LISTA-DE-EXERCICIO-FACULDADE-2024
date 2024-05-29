#include <iostream>
#include <vector>
using namespace std;

int main() {

  vector<int> num(10);
  int maior;
  int menor;
  

  for(int i = 0; i < 10; i++){
    cout << "digite o numero dos 10 vetores: ";
    cin >> num[i];
  }
  
  maior = num[0];
  menor = num[0];

  for(int i = 0; i < 10; i++){
    if(num[i] > maior) {
      maior = num[i];
    } 

    if(num[i] < menor) {
      menor = num[i];
    }
  }

  for(int i = 0; i < 10; i++){
    cout << "A posicao " << i << " do vetor e: " << num[i] << endl;
  }

  cout << "O maior numero do vetor e: " << maior << endl;
  cout << "O menor numero do vetor e: " << menor << endl;
 
  
}
