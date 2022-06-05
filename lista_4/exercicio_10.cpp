/*
Sejam A e B dois vetores contendo 10 elementos inteiros.  Elabore um algoritmo que: 
a. Leia A e B.  
b. Calcule a soma dos elementos de A. 
c. Crie o vetor C contendo a soma dos elementos de mesma posição dos vetores A e B.
*/

#include <iostream>
using namespace std;
int main(){

  int i, acumulador = 0, t = 10;
  int vetorA[t], vetorB[t], vetorC[t];

  for(i = 0; i < t; i++){ // Inserindo valores nos indicdes do vetor A.
    cout << "insira um valor no indice "<< i << " do vetor A: ";
    cin >> vetorA[i];
    acumulador += vetorA[i];
  }
  cout << "Soma do dos valores do vetor A: " << acumulador << endl; // printando o somatorio do vetor A.

  for(i = 0; i < t; i++){ // inserindo valores nos indices do vetor B.
    cout << "insira um valor no indice "<< i << " do vetor B: ";
    cin >> vetorB[i];
  }
  for(i = 0; i < t; i++){ // somando os vetores A e B e printando na tela.
    vetorC[i] = vetorA[i] + vetorB[i];
    cout << "A soma do valor do indice " << i << " do vetor A e B eh: " << vetorC[i] << endl;
  }
}