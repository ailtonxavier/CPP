/*
Elabore um algoritmo que leia 20 elementos de um vetor de inteiros e, em seguida, um valor de código. Se o 
código for 1, mostrar o vetor na ordem direta (do primeiro até o último),  se o código for 2, mostrar o vetor 
na ordem inversa (do último até o primeiro)
*/

#include <iostream>

using namespace std;

int main(){
  int i, t = 3, cod;
  int v1[t];

  for(i = 0; i < t; i++){
    cout << "Preencha o vetor na posicao " << i << ": ";
    cin >> v1[i];
  }
  
  cout << "Escolha a ordem de apresentacao\n1 ou 2: ";
  cin >> cod;

  if(cod == 1){
    for(i = 0; i < t; i++){
      cout << v1[i] << endl;
    }
  } else if(cod == 2){
    for(i = 0; i < t; i++){
      cout << v1[(t-1)-i] << endl;
    }
  }


}