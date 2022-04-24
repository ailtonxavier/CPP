/*
20. Calcular o valor a ser pago por um plano de saúde dada a idade do conveniado. Considere que todos
pagam R$ 100 mais um adicional conforme a seguinte tabela:
• Crianças com menos de 10 anos pagam R$80;
• Conveniados com idade entre 10 e 30 anos pagam R$50;
• Conveniados com idade entre 31 e 60 anos pagam R$ 95;
• Conveniados com mais de 60 anos pagam R$130.
*/
#include <iostream>

using namespace std;


int main(){
  int idade, adicional, faixa1, faixa2, faixa3, faixa4;
  
  cout << "Qual sua idade? ";
  cin >> idade;
  adicional = 100;

  faixa1 = 80 + adicional;
  faixa2 = 50 + adicional;
  faixa3 = 95 + adicional;
  faixa4 = 130 + adicional;


  if (idade < 10){
    cout << "Você tem "<< idade << " anos, e pagara: " << faixa1;
  } else if (idade >= 10 && idade <= 30){
    cout << "Você tem "<< idade << " anos, e pagara: " << faixa2;
  } else if (idade > 31 && idade <= 60){
    cout << "Você tem "<< idade << " anos, e pagara: " << faixa3;
  } else if (idade > 60) {
    cout << "Você tem "<< idade << " anos, e pagara: " << faixa4;
  }
} // ok