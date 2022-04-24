/*
Elabore um algoritmo que leia o código (inteiro) e a idade de 100 pessoas e escreva ao final o código da
pessoa mais velha e a idade da pessoa mais nova.
*/

#include <iostream>

using namespace std;

int main(){
  int qntPessoas = 1, idade, codigo = 0, maisVelho, maisNovo,codigoMaisVelho,codigoMaisNovo, codigoZero;
  for(qntPessoas; qntPessoas <= 3; qntPessoas++){
    cout << "Por favor digite o codigo pessoa: ";
    cin >> codigo;
    cout << "Agora sua idade: ";
    cin >> idade;
    
    if(qntPessoas == 1){
      maisVelho = idade;
      maisNovo = idade;
      codigoMaisNovo = codigo;
      codigoMaisVelho = codigo;
    } else {
      if(idade > maisVelho){
        maisVelho = idade;
        codigoMaisVelho = codigo;
      }
      if(idade < maisNovo){
        maisNovo = idade;
        codigoMaisNovo = codigo;
      }
    }
  }
  cout << "O mais novo tem " << maisNovo << " anos e seu codigo eh " << codigoMaisNovo << ".\n" << "O mais velho tem " << maisVelho << " anos e seu codigo eh " << codigoMaisVelho << ".\n";
}