/*
Faça  um  programa  que  declare  dois  vetores  A  e  B  de  10  elementos  de  inteiros,  leia  os  seus  elementos  e 
intercale os dois vetores A e B formando o vetor C (de 20 elementos). 
*/
#include <iostream>
using namespace std;
int main(){
  int i, t = 3;
  int a[t], b[t], c[t*2];
  for(i = 0; i < t; i++){
    cout << "Digite um valor para o indice " << i << " do vetor A: ";
    cin >> a[i];
  }
  for(i = 0; i < t; i++){
    cout << "Digite um valor para o indice " << i << " do vetor B: ";
    cin >> b[i];
  }
  for(i = 0; i < t*2; i++){
    if(i < t){
      c[i] = a[i];
    } else {
      c[i] = b[i-t];
    }
  }
  for(i = 0; i < t*2; i++){
    cout << "O valor na posicao " << i << " do vetor C: "<< c[i] << endl;
  }
}