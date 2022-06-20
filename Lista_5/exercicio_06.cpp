/*
Elabore um algoritmo que declare duas strings e leia a primeira string. Em seguida, copie o texto da primeira string para a segunda em letras maiúsculas. Imprima no final o conteúdo das duas strings.
*/
#include <iostream>
#include <string>
using namespace std;
int main(){
  string primeiraString, segundaString;
  getline(cin, primeiraString);
  for(int i = 0; i < primeiraString.length(); i++){
    primeiraString[i] = toupper(primeiraString[i]);
  }
  segundaString = primeiraString;
  cout << segundaString;
}