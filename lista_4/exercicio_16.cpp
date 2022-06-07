/*
Elabore um algoritmo que leia dois vetores de mesmo tamanho M e N, sendo M contendo as matrículas dos 
alunos e N suas respectivas notas (o tamanho deve ser digitado pelo usuário). Calcule a média de todas as 
notas  de  N.  Escreva  primeiramente  o  conjunto  das  notas  maiores  do  que  a  média  calculada.  Em  seguida, 
escreva as matrículas dos alunos cujas notas foram menores do que a média.
*/
#include <iostream>
using namespace std;
int main(){
  int quantidade, media, i, atribuicao, temp, cont;
  atribuicao = temp = cont = 0;
  cout << "Digite a quantidade de alunos: ";
  cin >> quantidade;
  int m[quantidade], n[quantidade];
  for(i = 0; i < quantidade; i++){
    cout << "Digite a matricula do Aluno de indice " << i << ": ";
    cin >> m[i];
    cout << "Agora digite a nota do Aluno de indice " << i << ": ";
    cin >> n[i];
  }
  for(i = 0; i < quantidade; i++){
    atribuicao = n[i];
    temp += atribuicao;
  }
  media = temp/quantidade;
  cout << "As maiores notas foram: ";
  for(i = 0; i < quantidade; i++){
    if(n[i] > media){
      cout << n[i] << endl;
    }
  }
  cout << "Essas sao as matriculas dos alunos com media baixa: ";
  for(i = 0; i < quantidade; i++){
    if(n[i] < media){
      cout << m[i] << " ";
    }
  }
}