/*
Elabore um algoritmo que:
Solicite um número inteiro N ao usuário. 
Declare um vetor V com N elementos inteiros. 
Gere os elementos do vetor de tal forma que o primeiro seja N e os próximos sejam sempre iguais ao dobro do anterior.
Solicite um número inteiro X ao usuário e busque este elemento no vetor. Caso exista, troque X pelo menor elemento existente no vetor e o menor elemento por X. Caso não exista, informe ao usuário.
Mostre o vetor antes e depois da mudança.
*/

#include <iostream>
using namespace std;
int main(){
  bool flag = true;
  int N, X, i, t, mvalor;
  cout << "Digite o tamanho do vetor: ";
  cin >> N;
  t = N;
  int V[N], V2[N];
  for(i = 0; i < t; i++){
    if(i == 0){
      V[i] = N;
    } else {
      N = N * 2;
      V[i] = N;
    }
  }

  for(i = 0; i < t; i++){
    cout << "Vetor na posicao " << i << " eh: " << V[i] << endl;
  }

  cout << "informe o valor de X: ";
  cin >> X;
  for(i = 0; i < t; i++){
    if(V[i] == X){
      mvalor = V[0];
      V[0] = X;
      X = mvalor;
      V[i] = mvalor;
      cout << "X existe no vetor!" << endl;
      flag = false;
    }
  }

  if(flag == true){
    if(X != V[i]){
      cout << "X nao existe no vetor!" << endl;
    }
  }

  if(!flag){
    for(i = 0; i < t; i++){
      cout << "Vetor na posicao " << i << " eh: " << V[i] << endl;
    }
  }
}