/*
Elabore um algoritmo que leia e mostre um vetor de 20 elementos inteiros. A seguir, conte quantos valores 
pares existem no vetor e troque cada um desses elementos por 0.  Em seguida escreva o vetor final.
*/

#include <iostream>

using namespace std;

int main(){
  int i, numerosPares = 0, t = 4;
  int v1[t];

  for(i = 0; i < t; i++){
    cout << "Preencha o vetor na posicao " << i << " : ";
    cin >> v1[i];
  }
  for(i = 0; i < t; i++){
    if(v1[i] % 2 == 0){
      v1[i] = 0;
      numerosPares++;
    }
  }
  for(i = 0; i < t; i++){
    cout << v1[i] << endl;
  }
}