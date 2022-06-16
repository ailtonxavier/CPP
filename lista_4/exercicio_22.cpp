/*
Elabore um algoritmo que leia uma matriz M(6,6) e um valor A inteiro e multiplique a matriz M pelo valor A 
inserindo os resultados em um vetor de V(36). Ao final, escreva o vetor V.
*/
#include <iostream>
using namespace std;
int main(){
  int n, i, i2 = 0, j, t = 3;
  int m[t][t], v[t*t];
  for(i = 0; i < t; i++){
    for(j = 0; j < t; j++){
      cout << "Qual valor na linha " << i << " e coluna " << j << ": ";
      cin >> m[i][j];
    }
  }
  cout << "Digite um numero: ";
  cin >> n;
  for(i = 0; i < t; i++){
    for(j = 0; j < t; j++){
      v[i2] = m[i][j] * n;
      i2++;
    }
  }

  for(i = 0; i < t*t; i++){
    cout << v[i] << " ";
  }

}