/*
Elabore um algoritmo que leia dois vetores de 10 posições e faça a multiplicação dos elementos de mesmo 
índice, colocando o resultado em um terceiro vetor. Mostre o vetor resultante.
*/
#include <iostream>
using namespace std;
int main(){
  int i, t = 5;
  int vetor1[t], vetor2[t], vetor3[t];

  for(i = 0; i < t; i++){
    cout << "Digite um valor para o indice " << i << " do vetor 1: ";
    cin >> vetor1[i];
  }
  for(i = 0; i < t; i++){
    cout << "Digite um valor para o indice " << i << " do vetor 2: ";
    cin >> vetor2[i];
  }
  for(i = 0; i < t; i++){
    vetor3[i] = vetor1[i] * vetor2[i];
    cout << vetor3[i] << endl;
  }


}