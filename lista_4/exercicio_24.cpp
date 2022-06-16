/*
Escreva um algoritmo que leia uma matriz M(5,5) e calcula as somas abaixo, escreva essas somas e a matriz. 
a) da linha 4 de M 
b) da coluna 2 de M 
c) da diagonal principal 
d) da diagonal secundária 
e) de todos os elementos da matriz M 
*/
#include <iostream>
using namespace std;
int main(){
  int i, j, soma, a, t = 3;
  int m[t][t];
  a = soma = 0;
  for(i = 0; i < t; i++){
    for(j = 0; j < t; j++){
      cout << "Digite um valor inteiro linha " << i << " coluna " << j << ": ";
      cin >> m[i][j];

      if(m[2][j]){
        
      }



    }
  }
  // Linha
  for(j = 0; j < t; j++){
    a = m[2][j];
    soma += a;
  }
    cout << "A soma da linha "<< 2 <<" eh: " << soma;
    soma = 0;
  // coluna
  for(i = 0; i < t; i++){
    a = m[i][2];
    soma += a;
  }

  cout << "A soma da coluna "<< 2 <<" eh: " << soma;
}