/*
O cardápio de uma lanchonete é o seguinte:
Sanduíche
Código Descrição Preço
Unitário
100 Cachorro
quente
1,10
101 Baurú simples 1,30
102 Baurú com ovo 1,50
103 Hamburger 1,10
104 Cheesburger 1,30
Bebida
Código Descrição Preço
Unitário
105 Refrigerante 1,00
106 Suco 2,00
107 Nescau 1,50
*/

#include <iostream>

using namespace std;

int main(){
  float sand, bebida;
  float qnt1, qnt2;
  cout << "Sanduiches\n100 - Cachorroquente\n101 - Bauru simples\n102 - Bauru com ovo\n103 - Hamburguer\n104 - X-burguer\n";
  cin >> sand;
  cout << "Quantos? ";
  cin >> qnt1;

  cout << "Bebidas\n105 - Refrigerantes\n106 - Suco\n107 - Nescau\n";
  cin >> bebida;
  cout << "Quantas? ";
  cin >> qnt2;

  if(sand == 100){
    cout << "Cachorro quente\n";
    sand = (1.10 * qnt1);
  } else if(sand == 101){
    cout << "Bauru simples\n";
    sand = (1.30 * qnt1);
  } else if(sand == 102){
    cout << "Bauru com ovo\n";
    sand = (1.50 * qnt1);
  } else if(sand == 103){
    cout << "Hamburguer\n";
    sand = (1.10 * qnt1);
  } else if(sand == 104){
    cout << "X-Burguer\n";
    sand = (1.30 * qnt1); 
  }

  if(bebida == 105){
    cout << "Refrigerante\n";
    bebida = (1.0 * qnt2); 
  } else if(bebida == 106){
    cout << "Suco\n";
    bebida = (2.0 * qnt2);
  } else if(bebida == 107){
    cout << "Nescau\n";
    bebida = (1.5 * qnt2);
  }

  cout << "Valor a pagar: " << sand + bebida;
}