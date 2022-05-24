/*
Elabore um algoritmo que leia dois vetores, A (10 elementos inteiros) e B (12 elementos inteiros), e escreva 
todos os elementos comuns aos dois vetores.
*/

#include <iostream>
using namespace std;
int main(){

  int tamanhoVetor1 = 4, tamanhoVetor2 = 5, i, i2;
  int v1[tamanhoVetor1], v2[tamanhoVetor2];

  for(i = 0; i < tamanhoVetor1; i++){
    cout << "Digite o valor do "<< i << " do vetor 1: ";
    cin >> v1[i];
  } cout << endl;
  for(i2 = 0; i2 < tamanhoVetor2; i2++){
    cout << "Digite o valor do "<< i2 << " do vetor 2: ";
    cin >> v2[i2];
  }
  for(i = 0; i < tamanhoVetor1; i++){
    for(i2 = 0; i2 < tamanhoVetor2; i2++){
      if(v1[i] == v2[i2]){
        cout << v1[i] << endl;
      }
    }
  }
}