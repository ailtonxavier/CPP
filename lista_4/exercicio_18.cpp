/*
Leia um vetor ORIGINAL de 20 posições de inteiro, verifique e informe se os seus elementos estão em: 
Ordem crescente; 
Ordem decrescente; 
Ordem aleatória.
*/
#include <iostream>
using namespace std;
int main(){
  int t, i, crescente, decrescente, aleatorio;
  crescente = decrescente = true;
  aleatorio = false;
  t = 5;
  int v[t];
  for(i = 0; i < t; i++){
    cout << "Digite um valor para a posicao " << i << " do vetor: ";
    cin >> v[i];
  }
  for(i = 0; i < t-1; i++){
    if(crescente){
      if(!(v[i] < v[i+1])){
        crescente = false;
      }
    }
    if(decrescente){
      if(!(v[i] > v[i+1])){
        decrescente = false;
      }
    }
    if(!(crescente && decrescente)){
      aleatorio = true;
    }
  }
  if(crescente){
    cout << "Crescente";
  } else if(decrescente){
    cout << "Decrescente";
  } else {
    cout << "Aleatorio";
  }
}