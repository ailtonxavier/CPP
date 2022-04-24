/*
Num determinado Estado, para transferências de veículos o DETRAN cobra uma taxa de 1% para carros
fabricados antes de 1990 e uma taxa de 1.5% para os fabricados a partir de 1990, taxa esta que incide
sobre o preço do carro. Elabore um algoritmo que leia o ano e o preço do carro, calcule e escreva o
imposto a ser pago.
*/

#include <iostream>

using namespace std;

int main(){
  int ano;
  float preco;

  cout << "Qual ano do seu carro? ";
  cin >> ano;

  cout << "Qual valor do seu carro? ";
  cin >> preco;

  if(ano < 1990){
    cout << "O valor do imposto eh: " << (preco/100*1) ;
  } else {
    cout << "O valor do imposto eh: " << (preco/100*1.5);
  }
}