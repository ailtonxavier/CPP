/*
Elabore  um  algoritmo  que  preencha  automaticamente  um  vetor  de  20  posições  de  inteiros  gerando  os 
elementos a partir da multiplicação do seu índice por 2. Em seguida, calcule e escreva a soma dos elementos 
pares e impares. 
*/

#include <iostream>
using namespace std;
int main(){
  int i, somatorio = 0, t = 20;
  int vetor[t];

  for(i = 0; i < t; i++){
    vetor[i] = i*2;
    somatorio += vetor[i];
  }
  
  for(i = 0; i < t; i++){
    cout << vetor[i] << endl;
  } cout << "O somatorio do vetor eh " << somatorio << endl;
}