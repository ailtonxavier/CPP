/*
28.	Faça um algoritmo que gere e escreva automaticamente a seguinte matriz:
1 1 1 1 1 1
1 2 2 2 2 1
1 2 3 3 2 1
1 2 3 3 2 1
1 2 2 2 2 1
1 1 1 1 1 1

*/
#include <iostream>
using namespace std;
int main(){
  int i, j, t = 6;
  int m[t][t];
  for(i = 0; i < t; i++){
    for(j = 0; j < t; j++){
      if(i > 0 && i < 5 && j > 0 && j < 5){
        if(i > 1 && i < 4 && j > 1 && j < 4){
          m[i][j] = 3;
        } else m[i][j] = 2;
      } else m[i][j] = 1;
    }
  }

  for(i = 0; i < t; i++){
    for(j = 0; j < t; j++){
      cout << m[i][j] << " ";
    }
    cout << endl;
  }
}