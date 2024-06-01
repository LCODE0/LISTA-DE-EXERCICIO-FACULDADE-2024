#include <iostream>
#include <vector>
using namespace std;

int main() {

  vector<int>num(5);
  int maior;
  int menor;
  double soma = 0;

  cout << "digite os 5 numeros:\n" << endl;
  
  for(int i = 0; i < 5; i++){
     cout << "Numero " << i + 1 << ": ";
     cin >> num[i];
  }

  for(int i = 0; i < 5; i++){
    cout<< "Os numeros digitados foram: "<< num[i] << endl;
  }

  maior = num[0];
  menor = num[0];  
  
  for(int i = 0; i < 5; i++){
   if(num[i] > maior){
     maior = num[i];
   }
   if(num[i] < menor){
     menor = num[i];
   }
  }

  for(int i = 0; i < 5; i++){
    soma += num[i];
  }

  cout << "\nO maior numero digitado foi: " << maior;
  cout << "\nO menor numero digitado foi: " << menor;
  cout << "\nA media dos numeros digitados foi: " << soma / 5 <<endl; 
   
}