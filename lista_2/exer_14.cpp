#include <iostream>

using namespace std;

int main(){
  int numero1, numero2, numero3;
  cout << "Digite o primeiro numero: ";
  cin >> numero1;
  cout << "Digite o segundo numero: ";
  cin >> numero2;
  cout << "Digite o terceiro numero: ";
  cin >> numero3;
  if((numero1 == numero2)&&(numero1 == numero3)&&(numero2 == numero3)){
    cout << "Todos os numeros sao iguais";
  } else if((numero1 != numero2)&&(numero1 != numero3)&&(numero2!=numero3)){
    cout << "Todos os numeros sao diferentes";
  } else {
    cout << "Apenas dois numeros sao iguais";
  }
} // ok