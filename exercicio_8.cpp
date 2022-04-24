#include <iostream>

using namespace std;

int main(){
  float real, dolar, quantidade, cotacao;
  cout << "Qual a cotação do dólar? ";
  cin >> dolar;
  cout << "Quantos Reais você deseja converter em dólar? ";
  cin >> real;
  cotacao = real * dolar;
  cout << "R$" << real << " em dólares são exatamente: " << cotacao << "\n";
}