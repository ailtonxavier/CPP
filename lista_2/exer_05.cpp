#include <iostream>

using namespace std;

int main(){
  int codigo;
  float salario;
  cout << "Qual seu salario? ";
  cin >> salario;
  cout << "Qual o codigo do seu cargo? ";
  cin >> codigo;
  if(codigo == 101){
    cout << "Voce eh gerente recebeu aumento de 10% seu novo salario eh " << (((salario * 10)/100)+salario);
  } else if(codigo == 102){
    cout << "Voce eh engenheiro recebeu aumento de 20% seu novo salario eh " << (((salario * 20)/100)+salario);
  } else if(codigo == 103){
    cout << "Voce eh tecnico recebeu aumento de 30% seu novo salario eh " << (((salario * 30)/100)+salario);
  } else {
    cout << "Voce  recebeu aumento de 40% seu novo salario eh " << (((salario * 40)/100)+salario);
  } // ok
}