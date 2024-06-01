#include <iostream>
#include <vector>
using namespace std;

int main() {

 vector<int>num(5);
  int maior;
  int menor;
  int posicaoMaior, posicaoMenor;
 
 cout << "Digite os 5 vetores:\n" << endl;
  
 for(int i = 0; i < 5; i++){
   cout << "Numero " << i + 1 << ": ";
   cin >> num[i];
}

 maior = num[0];
 menor = num[0];
 posicaoMaior = 0;
 posicaoMenor = 0; 

 for(int i = 0; i < 5; i++){
   if(num[i] > maior){
     maior = num[i];
     posicaoMaior = i;
   }
   if(num[i] < menor){
     menor = num[i];
     posicaoMenor = i;
   }
 } 

 cout << "\nO maior numero é: " << maior << ", e está na posição: " << posicaoMaior << endl;
  
 cout << "\nO menor numero é: " << menor << ", e esta na posição: " <<posicaoMenor << endl;  
  
  
}