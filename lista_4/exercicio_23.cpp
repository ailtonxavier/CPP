/*
Escreva  um  algoritmo  que  leia  um  número  inteiro  A  e  uma  matriz  M  (30,30)  de  inteiros.  Conte  quantos 
valores da matriz M são iguais a A. Crie, a seguir, uma matriz X contendo todos os elementos de M diferentes 
de A (quando for igual a A, insira um 0). Mostre os resultados
*/
#include <iostream>
using namespace std;
int main(){
  int i, j, A, t = 3, cont = 0;
  int m[t][t], x[t][t];
  for(i = 0; i < t; i++){
    for(j = 0; j < t; j++){
      cout << "Digite um valor inteiro: ";
      cin >> m[i][j];
    }
  }
  cout << "Digite o valor de A";
  cin >> A;
  for(i = 0; i < t; i++){
    for(j = 0; j < t; j++){
      if(m[i][j] == A){
        cont++;
        x[i][j] = 0;
      } else {
        x[i][j] = m[i][j];
      }
    }
  }
  for(i = 0; i < t; i++){
    for(j = 0; j < t; j++){
      cout << x[i][j] << "\t";
    } cout << endl;
  } 
}