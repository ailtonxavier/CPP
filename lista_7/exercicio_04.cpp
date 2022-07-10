/*
Escreva um programa que lê um valor inteiro (maior do que 1 e menor ou igual a 10) 
e  exibe  a  tabuada  (até  10)  de  multiplicação  do  número  lido.  Você  deverá  escrever  as 
seguintes funções: 
- int LeNumero(int n1,int n2) 
Lê um número inteiro no intervalo especificado (n1, n2) e o retorna. Cada vez que for 
digitado  um  número  inválido  (fora  do  intervalo  especificado)  a  função  deve  exibir  a 
mensagem "Número inválido. Digite novamente!" 
- void Tabuada( int n) 
Recebe como parâmetro um número inteiro e exibe na tela a tabuada de multiplicação 
até 10 do número lido. Exemplo: número lido 5 
5 x 1 = 5 5 x 2 = 10 .... 5 x 10 = 50
*/

#include <iostream>
using namespace std;

void tab(int a);

int main(){
  int n;
  do {
    cout << "Digite um numero de 1 a 10: ";
    cin >> n;
  } while(!(n > 1 && n < 10));
  tab(n);
}

void tab(int a){
  int i;
  for(i = 1; i <= 10; i++){
    cout << a*i << "\n";
  }
}