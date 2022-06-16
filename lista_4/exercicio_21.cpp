/*
Elabore um algoritmo que leia duas matrizes M(4,6) e N(4,6) e crie uma matriz que seja:  
a) o produto de M por N; 
b) a soma de M com N; 
c) a diferença de M com N;  
Escrever as matrizes calculadas.
*/
#include <iostream>
using namespace std;
int main(){
  int i, j;
  int t1 = 2, t2 = 3;
  int m[t1][t2],n[t1][t2];
  for(i = 0; i < t1; i++){
    for(j = 0; j < t2; j++){
      cout << "Qual valor na linha " << i << " e coluna " << j << ": ";
      cin >> m[i][j];
    }
    cout << endl;
  }
  
  for(i = 0; i < t1; i++){
    for(j = 0; j < t2; j++){
      cout << "Qual valor na linha " << i << " e coluna " << j << ": ";
      cin >> n[i][j];
    }
    cout << endl;
  }

  cout << "PRODUTO!" << endl;
  for(i = 0; i < t1; i++){
    for(j = 0; j < t2; j++){
      cout << m[i][j] * n[i][j] << "\t";
    }
    cout << endl;
  }
  cout << "SOMA!" << endl;
  for(i = 0; i < t1; i++){
    for(j = 0; j < t2; j++){
      cout << m[i][j] + n[i][j] << "\t";
    }
    cout << endl;
  }
  cout << "DIFERENCA!" << endl;
  for(i = 0; i < t1; i++){
    for(j = 0; j < t2; j++){
      cout << m[i][j] - n[i][j] << "\t";
    }
    cout << endl;
  }
}
