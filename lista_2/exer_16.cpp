#include <iostream>

using namespace std;

int main(){
  int idade, tempo_para_CNH;
  cout << "Qual sua idade? ";
  cin >> idade;
  if(idade >= 18){
    cout << "Você é maior de idade, portanto pode tirar a CNH"; 
  } else {
    tempo_para_CNH = 18 - idade;
    cout << "Falta "<< tempo_para_CNH << " ano(s) para poder tirar sua CNH"; 
  }
} // ok