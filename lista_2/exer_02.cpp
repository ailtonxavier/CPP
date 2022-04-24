#include <iostream>
//atividade 2
using namespace std;

int main(){
  int numero;
  cout << "Escreva um numero: ";
  cin >> numero;
  int resto = numero % 2; // calcula o resto do número
  
  if (resto == 0){
    if (numero > 100){
      cout << "O numero " << numero << " É maior que 100 e eh par";
    } else if (numero == 100){
      cout << "O numero " << numero << " eh 100 e eh par";
    } else {
      cout << "O numero eh menor que 100 e eh par.";
    }
  } else {
    if (numero > 0){
      cout << "O numero " << numero << " eh positivo";
    } else if (numero == 0){
      cout << "O numero eh 0";
    } else {
      cout << "O numero eh negativo";
    }
  }
} // ok