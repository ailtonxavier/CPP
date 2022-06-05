/*
Elabore um algoritmo  que leia  um vetor A de 20 posições.  Em seguida, trocar o primeiro elemento com o 
último,  o  segundo  com  o  penúltimo,  o  terceiro  com  o  antepenúltimo,  e  assim  sucessivamente.    Ao  final, 
escreva o vetor A modificado.
*/

#include <iostream>
using namespace std;
int main(){

  int i, t = 5;
  int vetor[t];

  for(i = 0; i < t; i++){
    cout << "Digite o valor do indice " << i << " do vetor: ";
    cin >> vetor[(t-1)-i]; // atribuindo os valores de forma reversa ao indice.
  }

  for(i = 0; i < t; i++){
    cout << "valor do vetor no indice " << i << ": "<<  vetor[i] << endl;
  }
}