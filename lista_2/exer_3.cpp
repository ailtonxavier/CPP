/*
Calcule o peso ideal de uma pessoa. Dados de entrada: altura e sexo (“m”-masculino ou “f”-feminino).
Utilize as seguintes fórmulas para cálculo do peso ideal:
• Homem = (72,7 x altura) - 58
• Mulher = (62,1 x altura) - 44,7
*/

#include <iostream>

using namespace std;

int main(){
  char sexo;
  float altura;


  cout << "Como voce se autodeclara\nm - Homem\nf - Mulher\nDigite a letra correspondente: ";
  cin >> sexo;
  cout << "Qual sua altura? ";
  cin >> altura;

  if(sexo == 'm'){
    cout << "seu peso ideal eh: " << (72.7 * altura - 58);
  } else if(sexo == 'f'){
    cout << "seu peso ideal eh: " << (62.1 * altura - 44.7);
    
  }
}