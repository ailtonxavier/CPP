#include <iostream>

using namespace std;
/*
Leia um número qualquer e verifique se ele é par ou ímpar. Se o número for par, escreva se é múltiplo
de 10; se for ímpar, escreva se é divisível por 5.
*/
int main(){
  int numero;
  cout << "Digite um numero: ";
  cin >> numero;
  if(numero % 2 == 0){
    if(numero % 10 == 0){
      cout << "Eh multiplo de 10.";
    }
  } else{
    if(numero % 5 == 0){
      cout << "Eh divisivel por 5.";
    }
  }
} // ok