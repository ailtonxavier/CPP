#include <iostream>

using namespace std;

int main(){
  int numeroInteiro;
  float porcentagem;

  cout << "Digite um número inteiro: ";
  cin >> numeroInteiro;
  cout << "Qual a porcentagem deseja aplicar ao numero? ";
  cin >> porcentagem;

  float percentualAplicado = (numeroInteiro * porcentagem)/100;

  cout << "Você aplicou "<<porcentagem << "% isso equivale a " << percentualAplicado << "\n" << "Logo " << numeroInteiro << " - " << porcentagem << "% é " << numeroInteiro - percentualAplicado << ".\n";
}