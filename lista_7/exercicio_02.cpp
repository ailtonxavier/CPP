/*
Faça uma função que recebe um número inteiro por parâmetro e retorna 
verdadeiro se ele for par e falso se for ímpar.
*/
#include <iostream>
using namespace std;
bool verdadeiroFalso(int a);
int main(){
  int n, retorno;
  cout << "Digite um numero inteiro: ";
  cin >> n;
  retorno = verdadeiroFalso(n);
  if(retorno == 0) cout << "falso"; else cout << "verdadeiro";
}
bool verdadeiroFalso(int a){
  bool retorno;
  if(a % 2 == 0) retorno = true; else retorno = false; return retorno;
}