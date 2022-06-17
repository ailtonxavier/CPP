/*
Elabore  um  algoritmo  que  leia  uma  string  qualquer  e  escreva-a  em  letras  maiúsculas  e 
espelhada. 
Entrada: “uma frase qualquer” 
Saída: “reuqlauq esarf amu
*/
#include <iostream>
#include <string>
using namespace std;
int main(){
  int i, t;
  string frase, frase2;
  cout << "Digite uma frase qualquer: ";
  getline(cin, frase);
  t = frase.size();
  
  for(i = 0; i < t; i++){
    frase2[i] = toupper(frase[t-1-i]);
    cout << frase2[i];
  }
  
}