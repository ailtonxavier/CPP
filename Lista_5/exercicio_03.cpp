/*
Elabore um algoritmo que leia duas strings A e B e junte-as em uma única string C. 
Entradas: “frase 1” e “outra frase qualquer” 
Saída: “frase 1 e outra frase qualquer” 
*/
#include <iostream>
#include <string>
using namespace std;
int main(){
  string A, B;
  getline(cin, A);
  getline(cin, B);
  string C = A+B;
  cout << C;
}