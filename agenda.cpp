#include <iostream>
#include <string>
using namespace std;

struct Contato{
  int codigo;
  string nome;
  string telefone;
};

int main(){
  int a, op, capacidade;

  cout << "Qual a capacidade maxima de armazenamento? ";
  cin >> capacidade;


  do{
    cout << "---- Menu Principal ----" << endl;
    cout << "1 - Incluir Contato" << endl;
    cout << "2 - Alterar Contato" << endl;
    cout << "3 - Excluir Contato" << endl;
    cout << "4 - Buscar Contato" << endl;
    cout << "5 - Relatorio de Contatos Cadastrados" << endl;
    cout << "6 - Sair" << endl;
    cout << "Qual a opcao desejada? " << endl;
    cin >> op;
    switch(op){
      case 1: 
        cout << "Incluindo um novo contato...";
       
      break;
    }
  }while(a != 6);
}