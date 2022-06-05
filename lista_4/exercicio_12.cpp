/*
Elabore um algoritmo que leia um vetor V de 10 posições de inteiros, não  permitindo que sejam digitados 
números negativos. Em seguida, leia um número inteiro qualquer e verifique se o número existe no vetor. Se 
existir, informe o seu índice. Se não existir, informe a mensagem “Número não localizado!”.
*/

#include <iostream>
using namespace std;
int main(){
  
  bool verificacao = true;
  int i, inteiroQualquer, t=5;
  int vetor[t];

  for(i = 0; i < t; i++){
    cout << "Digite um valor no indice " << i << " do vetor: ";
    cin >> vetor[i];
    if(vetor[i] < 0){
      cout << "Voce digitou um valor menor que zero!!!" << endl;
      i--;
    }
  }
  cout << "Digite um inteiro qualquer e veja se existe no vetor: ";
  cin >> inteiroQualquer;
  for(i = 0; i < t; i++){
    if(vetor[i] == inteiroQualquer){
      cout << "Existe e esta no indice -> " << i;
      verificacao = false;
    }
  } if(verificacao){
    cout << "Numero nao localizado!";
  }
}