/*
Elabore  um  algoritmo  preencha  o  cadastro  de  10  alunos  contendo  matricula,  nome, endereço e média geral. Após o preenchimento, deve ser somado o valor 0,5 às médias de todos os alunos que tiveram médias maiores que 5. Em seguida escreva o vetor final.
*/
#include <iostream>
#include <string>
using namespace std;

struct alunos {
  string matricula;
  string nome;
  string endereco;
  float nota;
};

const int qntalunos = 10;

int main(){
  int op, contador, i;
  float mediaDeNotas = 0;
  float media[10];
  op = contador = mediaDeNotas = i = 0;
  string nomeDoAluno;
  alunos cadastro[qntalunos];

  do {
    cout << "1 - CADASTRO DE ALUNOS" << endl;
    cout << "2 - MEDIA GERAL" << endl;
    cout << "3 - SAIR DO PROGRAMA" << endl;
    cout << "SELECIONE UMA OPCAO: ";
    cin >> op;
    switch(op){
      case 1:        
        if(contador == qntalunos){
          cout << "INCLUSAO NAO REALIZADA, JA EXISTEM 10 ALUNOS";
        } else {
          cout << "CADASTRO DE ALUNO " << contador+1 << endl;
          cout << "DIGITE A MATRICULA DO ALUNO: ";
          cin.ignore();
          getline(cin, cadastro[contador].matricula);
          cout << "DIGITE O NOME DO ALUNO: ";
          getline(cin, cadastro[contador].nome);
          cout << "DIGITE O ENDERECO DO ALUNO: ";
          getline(cin, cadastro[contador].endereco);
          cout << "DIGITE A NOTA DO ALUNO: ";
          cin >> cadastro[contador].nota;
          if(cadastro[contador].nota > 5){
            cadastro[contador].nota += 0.5;
          }
          media[contador] = cadastro[contador].nota;
          cout << "A nota do aluno eh: " << cadastro[contador].nota << endl << endl;
        }
        contador++;
      break;
      case 2:
        mediaDeNotas = 0;
        cout << "A MEDIA DOS ALUNOS EH: ";
        for(i = 0; i < contador; i++){
          mediaDeNotas += cadastro[i].nota;
        }
        cout << mediaDeNotas/contador << endl << endl;
      break;
      case 3:
        cout << "VOCE ENCERROU O PROGRAMA!!!";
      break;
    }
  } while(op != 3);

}