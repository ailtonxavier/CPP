#include <iostream>
#include <string>
using namespace std;

struct agenda {
  int codigo;
  string nome;
  string telefone;
};

int main(){
  int i, op, qntContatos,codigoAuxiliar, posicao, total = 0;
  bool existe;

  cout << "Defina a quantidade de contatos da agenda: ";
  cin >> qntContatos;

  agenda contatos[qntContatos];
  
  do {
    cout << "---------MENU----------" << endl;
    cout << "1 - INCLUSAO DE CONTATO" << endl;
    cout << "2 - CONSULTA DE CONTATO" << endl;
    cout << "3 - EXCLUSAO DE CONTATO" << endl;
    cout << "4 - EDITAR UM CONTATO" << endl;
    cout << "5 - RELATORIO DE CONTATOS" << endl;
    cout << "6 - ENCERRAR PROGRAMA" << endl;
    cout << "ESCOLHA UMA OPCAO: ";
    cin >> op;
    switch(op){
      case 1:
        existe = false;
        if(total == qntContatos){
          cout << "INCLUSAO NAO REALIZADA, AGENDA CHEIA!" << endl;
        } else {
          cout << "Digite o codigo do novo contato: ";
          cin >> codigoAuxiliar;
          for(i=0; i < total; i++){
            if(codigoAuxiliar == contatos[i].codigo){
              existe = true;
            }
          }
          if(existe){
            cout << "CONTATO JA EXISTENTE NA AGENDA!" << endl;
          } else {
            cout << "INCLUSAO DE CONTATO" << endl;
            contatos[codigoAuxiliar-1].codigo = codigoAuxiliar;
            cout << "Digite o nome do contato: ";
            cin.ignore();
            getline(cin, contatos[codigoAuxiliar-1].nome);
            cout << "Digite o numero do telefone: ";
            getline(cin, contatos[codigoAuxiliar-1].telefone);
            total++;
          }
        }
      break;

      case 2:
        existe = false;
        cout << "CONSULTA DE CONTATO" << endl;
        cout << "Digite o codigo do contato: ";
        cin >> codigoAuxiliar;
        for(i = 0; i < total; i++){
          if(codigoAuxiliar == contatos[i].codigo){
            existe = true;
            posicao = i;
          }
        }
        if(existe){ cout << endl;
          cout << "CONTATO ENCONTRADO!" << endl;
          cout << "Codigo: " << contatos[posicao].codigo << endl;
          cout << "Nome: " << contatos[posicao].nome << endl;
          cout << "Numero: " << contatos[posicao].telefone << endl << endl;
        } else {
          cout << "CONTATO NAO ENCONTRADO!" << endl;
        }
      break;

      case 3: 
        existe = false;
        cout << "EXCLUSAO DE CONTATO" << endl;
        cout << "Digite o codigo do contato que deseja excluir: ";
        cin >> codigoAuxiliar;
        for(i = 0; i < total; i++){
          if(codigoAuxiliar == contatos[i].codigo){
            existe = true;
            posicao = i;
          }
        }
        if(existe){
          for(i = posicao; i < total; i++){
            if(i != (total-1)){
              contatos[i].codigo = contatos[i+1].codigo;
              contatos[i].nome = contatos[i+1].nome;
              contatos[i].telefone = contatos[i+1].telefone;
            }
          }
          total--;
          cout << "CONTATO EXCLUIDO COM SUCESSO!" << endl;
        } else {
          cout << "CONTATO NAO ENCONTRADO" << endl;
        }
      break;
      case 4:
        existe = false;
        cout << "EDITAR CONTATO" << endl;
        cout << "Digite o codigo do contato que deseja editar: ";
        cin >> codigoAuxiliar;
        for(i = 0; i < total; i++){
          if(codigoAuxiliar == contatos[i].codigo){
            existe = true;
            posicao = i;
          }
        }
        if(existe){
          cout << "O que você deseja editar? " << endl;
          cout << "1 - Codigo" << endl;
          cout << "2 - Nome" << endl;
          cout << "3 - Telefone" << endl;
          int op2 = 0;
          do {
            cout << "Escolha uma opcao de 1 a 3: ";
            cin >> op2;
            if(op2 < 1 && op2 > 3){
              cout << "Valor invalido!" << endl;
            }
          }while(op2 < 1 && op2 > 3);
          switch(op2){
            case 1:
              cout << "Digite novo codigo do contato: ";
              cin >> contatos[posicao].codigo;
              cout << "CONTATO EDITADO COM SUCESSO" << endl;
            break;
            case 2:
            cout << "Digite o novo nome de contato: ";
            cin.ignore();
            getline(cin, contatos[posicao].nome);
            cout << "CONTATO EDITADO COM SUCESSO!" << endl;
            break;
            case 3:
              cout << "Digite o novo telefone do contato: ";
              getline(cin, contatos[posicao].telefone);
              cout << "CONTATO EDITADO COM SUCESSO";
            break;
          }
        } else {
          cout << "CONTATO NAO ENCONTRADO!" << endl;
        }
      break;

      case 5:
        cout << "RELATORIO DE CONTATOS CADASTRADOS" << endl << endl;
        cout << "Total de contatos cadastrados: " << total << endl << endl;
        for(i = 0; i < total; i++){
          cout << "Codigo: " << contatos[i].codigo << endl;
          cout << "Codigo: " << contatos[i].nome << endl;
          cout << "Codigo: " << contatos[i].telefone << endl << endl;
        }
      break;
    }
  } while(op != 6);
}