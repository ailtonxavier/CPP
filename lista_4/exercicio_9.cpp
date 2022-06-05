/*
Elabore um algoritmo que leia um vetor A de 10 elementos e construa um vetor P formado pelos índices dos 
elementos pares de A. Exemplo: Se A = [1  3  6  7  8], seus elementos pares estão nos índices 2 e 4 . Assim, P 
=  [2  4]
*/

#include <iostream>
using namespace std;
int main(){
  int i, i2 = 0, t = 5;
  int cont = 0;
  int vetorA[t];

  for(i = 0; i < t; i++){
    cout << "Digite um valor inteiro para a posicao " << i << " do vetor: ";    
    cin >> vetorA[i];
    if(vetorA[i] % 2 == 0){
      cont++;
    }
  }
  int vetorB[cont];
  for(i = 0; i < t; i++){
    if(vetorA[i] % 2 == 0){
      vetorB[i2] = i;
      i2++;
    }
  }
  
  for(i = 0; i < t; i++){
    cout << vetorB[i] << endl;
  }
}