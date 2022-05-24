/*
Elabore  um  algoritmo  que  leia  um  vetor  de  15  posições  de  números  inteiros  e  pergunte  ao  usuário  quais 
elementos  ele  deseja  ver:  se  os  elementos  que  estão  em  índices  pares  ou  se  os  elementos  que  estão  em 
índices ímpares. Mostre somente os elementos solicitados.
*/

#include <iostream>

using namespace std;

int main(){
  int i, op, t = 8;
  int v1[t];

  for(i = 0; i < t; i++){
    cout << "Digite a posicao " << i << " do vetor: ";
    cin >> v1[i];
  }

  cout << "Voce deseja ver os numeros que estao em indices\n1 - PAR ou 2 - IMPAR: ";
  cin >> op;
  if(op == 1){
    for(i = 0; i < t; i+= 2){
      cout << v1[i] << endl;
    }
  }else {
    for(i = 1; i < t; i += 2){
      cout << v1[i] << endl;
    }
  }
}