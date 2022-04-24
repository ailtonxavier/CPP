#include <iostream>

using namespace std;

int main(){
  float valorDocARRO, lucro, imposto;
  cout << "Quanto custa o carro que você deseja comprar? ";
  cin >> valorDocARRO;
  lucro = (valorDocARRO * 28)/100;
  imposto = (valorDocARRO * 45)/100;
  cout << lucro;
}