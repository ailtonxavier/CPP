#include <iostream>
#include <string>
using namespace std;


struct tAluno {
  string nome;
  int matriculaDoAluno;
};

struct tDisciplina {
  int matriculaDoAluno;
  string disciplina;
  float nota1;
  float nota2;
  float media;
}


int main(){
  const int t = 3;
  const int t2 = 12;
  int i, j, cont = 0;
  string nomeAux;
  int matriculaAux;
  tDisciplina displina[t2];
  tAluno aluno[t];


  for(i = 0; i < t;i++){
    cout << "Nome: " << endl;
    getline(cin, aluno[i].nome);
    cout << "Matricula: " << endl;
    cin >> aluno[i].matriculaDoAluno;
    cin.ignore();
  }
  for(i = 0; i < t; i++){
    cout << "Nome: " << aluno[i].nome;
    cout << "Matricula: " << aluno[i].matriculaDoAluno;
  }

  for(i = 0; i < t; i++){
    cout << "\nDados da disciplina do Aluno";
    for(j = 1; j <= 4; j++){
      cout << "Matricula: ";
      cin >> displina[cont].matriculaDoAluno;
      cout << "\nDisciplina: ";
      getline(cin, );
      cont++;
    }
  }

}


/*
Elabore um algoritmo que: 
- Crie o registro tAluno:  Registro tAluno: 
nome: string 
matriculaDoAluno: int 
- Declare um vetor Alunos (3 posições de tAluno) e cadastre 3 alunos no vetor Alunos; 
- Após o cadastro, escreva os dados de todos os alunos cadastrados; 
- Crie o registro tDisciplina:  Registro tDisciplina: 
  
Obs: o usuário não deverá 
digitar o valor do campo media. 
O sistema deverá calcular 
automaticamente a média 
aritmética  das  duas  notas  do 
aluno e armazenar neste 
campo. 
- Crie o vetor Disciplinas (12 posições de tDisciplina) e cadastre, para cada um dos 3 alunos 
existentes no vetor Alunos, 4 disciplinas com as respectivas informações. Lembre-se que a 
matrícula do aluno tem que ser a mesma cadastrada no vetor Alunos. 
- Informe o seguinte menu e proceda com a operação de acordo com a escolha do usuário: 
 
  MENU PRINCIPAL                       _ 
1 – EXIBIR DADOS DE UM ALUNO 
2 – EXIBIR MAIOR MEDIA 
3 – EXIBIR MÉDIA DAS MÉDIAS POR ALUNO 
4 – EXIBIR OS ALUNOS DE UMA DISCIPLINA 
5 – SAIR 
-  Se  o  usuário  escolher  a  opção  1,  pergunte  qual  a  matrícula  do  aluno  que  ele  deseja 
consultar.  Depois  que  ele  informar,  procure  a  matrícula  procurada  no  vetor  Alunos.  Se 
existir,  mostre  o  nome  do  Aluno.  Em  seguida,  procure  no  vetor  Disciplinas  pelos  dados 
daquele Aluno e mostre os três resultados. 
-  Se  o  usuário  escolher  a  opção  2,  procure  no  vetor  notas  qual  a  matrícula  do  Aluno  que 
possui maior média e escreva A DISCIPLINA E O NOME DO Aluno. 
-  Se  o  usuário  escolher  a  opção  3,  mostre  a  média  das  médias  por  Aluno,  informando  o 
nome do Aluno e a média aritmética de suas médias. 
- Se o usuário escolher a opção 4, pergunte qual a disciplina que ele deseja consultar. Depois 
que ele informar, procure e mostre todos os nomes dos Alunos daquela disciplina. 
- Se o usuário escolher 5, finalize o sistema.
*/