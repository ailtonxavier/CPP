/*
Elabore um algoritmo que leia um vetor S contendo os salários dos funcionários de uma empresa com, no 
máximo, 100 funcionários, sendo que para terminar a entrada será fornecido o valor -1. Após toda a entrada 
ter  sido  realizada,  leia  o  valor  de  um  reajuste.  Em  seguida,  gere  e  escreva  um  segundo  vetor  R  contendo 
todos os salários de S já reajustados.
*/
#include <iostream>
using namespace std;
int main(){
  int t = 5, i, novoValor, cont;
  int s[t], R[t];
  for(i = 0; i < t; i++){
    cout << "Digite o salario do funcionario com indice " << i << ": ";
    cin >> s[i];
    if(s[i] == -1){
      i = t;
    }
  }
  for(i = 0; i < t; i++){
    R[i] = s[i];  
  }
  cout << "Voce deseja fazer um reajuste salarial no funcionario de qual indice?\nCaso deseje encerrar so digitar um valor negativo\ndigite agora a primeira alteracao: ";
  do{
  cin >> i;
  if(i >= 0){
    cout << "Qual novo Salario, digite agora: ";
    cin >> novoValor;
    R[i] = novoValor;
  }
  }while(i >= 0);
  for(i = 0; i < t; i++){
    cout << "O Salario do funcionario de idice " << i << " eh: " << R[i] << endl;
  }
}