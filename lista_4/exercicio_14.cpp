/*
Elabore um algoritmo que leia um vetor de 20 posições de  inteiros e verifique se ele é um palíndromo, ou 
seja, se a sua leitura em qualquer direção é a mesma.
*/

#include <iostream>
using namespace std;
int main(){
  bool flag;
  int i, t = 6;
  int v[t];
  for(i = 0; i < t; i++){
    cout << "Digite o valor na posicao " << i << " do vetor: ";
    cin >> v[i];
  }

  for(i = 0; i < t/2; i++){
    if(v[i] == v[t-1-i]){
      flag = true;
    } else {
      flag = false;
      i = t/2;
    }
  }

  if(flag){
    cout << "Eh palindromo!";
  } else {
    cout << "Nao eh palindromo!";
  }
}