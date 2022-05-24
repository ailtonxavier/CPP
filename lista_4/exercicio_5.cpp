/*
Elabore um algoritmo  que leia um vetor A de 20 posições. Em seguida, trocar (armazenando em um novo 
vetor B) o primeiro elemento com o último, o segundo com o penúltimo, o terceiro com o antepenúltimo, e 
assim sucessivamente.  Ao final, escreva os vetores A e B.
*/

#include <iostream>
using namespace std;
int main(){

  int i, t = 5;
  int v1[t], v2[t];
  for(i = 0; i < t; i++){
    cout << "Alimente o vetor na posicao " << i << ": ";
    cin >> v1[i];
  }
  for(i = 0; i < t; i++){
    v2[i] = v1[(t-1)-i];
    // v1[(t-1)-i] contagem em órdem decrescente!!!
  }
  for(i = 0; i < t; i++){
    cout << v1[i] << endl;
  }
  for(i = 0; i < t; i++){
    cout << v2[i] << endl;
  }
}