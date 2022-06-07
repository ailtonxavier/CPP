/*
Elabore um algoritmo para ler um vetor A de 20 números  inteiros  e  obter  a  maior  diferença  entre  dois elementos consecutivos desse vetor. Ao final, escreva a maior diferença e os índices dos respectivos elementos.
*/

#include <iostream>
using namespace std;
int main(){
  int i, ianterior, iposterior, diferenca, mdiferenca = 0, t = 4;
  int vetor[t];
  for(i = 0; i < t; i++){
    cout << "digite a posicao " << i << " do vetor: ";
    cin >> vetor[i];
  }
  for(i = 0; i < t; i++){
    cout << "O vetor na posicao " << i << " eh: " << vetor[i] << endl;
  }

  for(i = 0; i < t-1; i++){
    diferenca = vetor[i] - vetor[i+1];
    if(diferenca < 0){
      diferenca = diferenca * -1;
    }
    if(mdiferenca < diferenca){
      mdiferenca = diferenca;
      ianterior = i;
      iposterior = i+1;
    }
  }

  cout << "A maior diferenca esta entre os indices" << ianterior << " e " << iposterior << endl;
  cout << "A maior diferenca eh: " << mdiferenca;


}