/*
Numa  disciplina  são  dadas  duas  provas  e  dois  trabalhos,  mas  a  média  é  calculada 
considerando-se apenas a maior nota de prova e a maior nota de trabalho. Elabore um 
algoritmo  que,  dadas  as  quatro  notas  de  um  aluno,  informe  a  sua  média.  Para  isso, 
utilize duas funções: uma que determine o maior valor entre as notas (de provas ou de 
trabalhos) e outra que calcule a média aritmética das duas maiores notas.
*/

#include <iostream>
using namespace std;

float maioresNotas();
float mediaNotas(float a);

int main(){
  float n = maioresNotas(); float MediaNotas;
  MediaNotas = mediaNotas(n);
  cout << n;
  cout << "Media das notas: " << MediaNotas;
}

float maioresNotas(){
  float maiorNotaTrabalho, maiorNotaProva, maiorNota;
  maiorNota = maiorNotaProva = maiorNotaTrabalho = 0;
  float v[4];
  for(int i = 0; i < 4; i++){
    if(i < 2){
      cout << "Digite a nota do " << i+1 << "o trabalho: ";
      cin >> v[i];
      if(v[i] > maiorNotaTrabalho){
        maiorNotaTrabalho = v[i];
      }
    } else {
      cout << "Digite a nota da " << i-1  << "a prova: ";
      cin >> v[i];
      if(v[i] > maiorNotaProva){
        maiorNotaProva = v[i];
      }
    }
  }
  maiorNota = maiorNotaProva + maiorNotaTrabalho;
  return maiorNota;
}

float mediaNotas(float a){
  a = a/2;
  return a;
}