/*
Elabore  um  algoritmo  que  leia  uma  frase  em  uma  string  e  uma  palavra  em  outra  string, 
verifique e escreva se a palavra está contida na frase. 
Entradas: “esta é a frase” e “frase” 
Saída: a palavra “frase” está contida na frase “esta é a frase”.
*/
#include <iostream>
#include <string>
using namespace std;
int main(){
  int t1, t2, i, j, cont = 0;
  string frase, palavra;
  cout << "Digite uma frase: ";
  getline(cin, frase);
  cout << "Digite uma palavra contida ou nao na frase: ";
  getline(cin, palavra);
  t1 = frase.size();
  t2 = palavra.size();
  for(i = 0; i < t1; i++){
    for(j = 0; j < t2; j++){
      if(frase[i] == palavra[j]){      
        cont++;
      }
    }
  }
 
  if(cont >= t2) cout << "A palavra esta contida!"; else cout << "Nao esta contida";

}