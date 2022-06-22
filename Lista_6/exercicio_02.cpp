/*
Elabore um algoritmo que  
- Crie a estrutura tAnimal: Registro tAnimal: 
nome: string 
raca: string 
idade: int 
- Declare um vetor Animais (5 posições de tAnimal) e cadastre 8 animais; 
- Verifique e escreva o nome do animal mais velho; 
- Pergunte ao usuário se deseja consultar os animais cadastrados solicitando uma raça para 
a busca. Se existir animal da raça procurada, informe seus dados (nome e idade)
*/

#include <iostream>
#include <string>
using namespace std;

struct tAnimal {
  string nome;
  string raca;
  int idade;
};
int main(){
  int op = 0, contador = 0;
  string nomeDoPet, racaDoPet;
  int idadeDoPet;
  tAnimal cadastro[8];

  do {
    cout << "1 - CADASTRO ANIMAL" << endl;
    cout << "2 - VERIFIQUE O ANIMAL MAIS VELHO" << endl;
    cout << "3 - VERIFIQUE O ANIMAL POR RACA" << endl;
    cin >> op;
    switch(op){
      case 1:
        // CONTADOR INICIANDO DO Z3R0;
        if(contador > 7){
          cout << "O LIMITE EH DE 8 ANIMAIS";
        } else { cin.ignore();
          cout << "##### REGISTRO ANIMAL #####" << endl;
          cout << "DIGITE O NOME: ";
          getline(cin, nomeDoPet);
          cadastro[contador].nome = nomeDoPet;
          cout << "DIGITE A RACA: ";
          getline(cin, racaDoPet);
          cadastro[contador].raca = racaDoPet;
          cout << "DIGITE A IDADE DO ANIMAL";
          cin >> idadeDoPet;
          cadastro[contador].idade = idadeDoPet;
          contador++;
        }
      break;
      case 2:
        if(contador == 0){
          cout << "NAO EXISTE ANIMAL MAIS VELHO, NAO EXISTE NEM ANIMAL" << endl;
        } else {
          int animalMaisVelho = 0; int temp = 0;
          string animalMaisVelho_nome;
          for(int i = 0; i < contador; i++){
            temp = cadastro[i].idade;
            if(temp > animalMaisVelho){
              animalMaisVelho = temp;
              animalMaisVelho_nome = cadastro[i].nome;
            }
          }
          cout << "O Animais mais velho eh " << animalMaisVelho_nome << " sua idade eh " << animalMaisVelho << " anos."<< endl;
        }
      break;
      case 3:
      int contador2 = 0;
        if(contador == 0){
          cout << "NAO EXISTE ANIMAL MAIS VELHO, NAO EXISTE NEM ANIMAL" << endl;
        } else { cin.ignore();
          cout << "Digite o nome da raca: ";
          getline(cin, racaDoPet);
          for(int i = 0; i < contador; i++){
            if(i == 0){
              cout << "ANIMAL CADASTRADOS" << endl;
            }
            if(racaDoPet == cadastro[i].raca){
              cout << "SEU NOME EH: " << cadastro[i].nome << "." << endl;
              cout << "SUA IDADE EH: " << cadastro[i].idade << " ANOS." <<  endl;
              cout << endl;
              contador2++;
            }
          }
          cout << "TOTAL DE ANIMAIS CADASTRADOS: " << contador2;
        }
      break;
    }
  }while(op != 3);
}