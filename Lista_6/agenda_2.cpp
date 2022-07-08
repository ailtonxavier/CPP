#include <iostream>
#include <string>
using namespace std;

struct agenda {
  string nome;
  string telefone;
  int codigo;
};


int main(){
  int tamanhoContatos = 3;
  agenda contatos[tamanhoContatos];
  int i, j, op, contador = 0, codigoAux, iAux;
  string nomeDoContato;
  bool existe;
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
        cin.ignore();
        existe = false;
        cout << "INCLUSAO DE CONTATO!" << endl;
        if(contador == tamanhoContatos){
          cout << "NAO EH POSSIVEL ADICIONAR CONTATO!" << endl;
        } else {
        cout << "DIGITE O NOME DO CONTATO: ";
        getline(cin, contatos[contador].nome);
        cout << "DIGITE O TELEFONE DO CONTATO: ";
        getline(cin, contatos[contador].telefone);
        do {
          cout << "DIGITE O CODIGO DO CONTATO: ";
          cin >> codigoAux;
          cin.ignore();
          for(i = 0; i < tamanhoContatos; i++){
            if(codigoAux == contatos[i].codigo){
              cout << "O CODIGO JA EXISTE" << endl;
              existe = true;
            }
          }
        } while(existe);
        contatos[contador].codigo = codigoAux;
        contador++;
        }
      break;
      case 2:
        existe = false;
        if(contador == 0){
          cout << "NAO EXISTEM CONTATOS" << endl;
        } else {
          cout << "DIGITE O CODIGO DO CONTATO: ";
          cin >> codigoAux;
          for(i = 0; i < tamanhoContatos; i++){
            if(codigoAux == contatos[i].codigo){
              existe = true;
              iAux = i;
            }
          }
          if(existe){
            cout << "NOME DO CONTATO: " << contatos[iAux].nome;
            cout << "TELEFONE DO CONTATO: " << contatos[iAux].telefone;
          } else {
            cout << "CONTATO NAO ENCONTRADO!" << endl;
          }
        }
      break;
      case 3:
        existe = false;
        cout << "DIGITE O CODIGO DO CONTATO: ";
        cin >> codigoAux;
        for(i = 0; i < tamanhoContatos; i++){
          if(codigoAux == contatos[i].codigo){
            existe = true;
            iAux = i;
          }
        }
        if(existe){
          for(i = iAux; i < tamanhoContatos-1; i++){
            contatos[i].codigo = contatos[i+1].codigo;
            contatos[i].nome = contatos[i+1].nome;
            contatos[i].telefone = contatos[i+1].telefone;
          }
          tamanhoContatos--;
        } else {
          cout << "CODIGO NAO ENCONTRADO" << endl;
        }
      break;
      case 4:
        existe = false;
        cout << "DIGITE O CODIGO";
        cin >> codigoAux;
        for(i = 0; i < tamanhoContatos; i++){
          if(codigoAux == contatos[i].codigo){
            existe = true;
            iAux;
          }
        }
        cin.ignore();
        if(existe){
          cout << "DIGITE O NOVO NOME: ";
          getline(cin, contatos[iAux].nome);
          cout << "DIGITE O NOVO TELEFONE: ";
          getline(cin, contatos[iAux].telefone);
          cout << "DIGITE O NOVO CODIGO: ";
          cin >> contatos[iAux].codigo;
        }
      break;
      case 5:
        if(contador == 0){
          cout << "NAO EXISTEM CONTATOS" << endl;
        } else {
          for(i = 0; i < tamanhoContatos; i++){
            cout <<"CODIGO: "<< contatos[i].codigo;
            cout <<"NOME: "<< contatos[i].nome;
            cout <<"TELEFONE: "<< contatos[i].telefone << endl << endl;
          }
        }
      break;
      case 6:
        cout << "VOCE ABORTOU O PROGRAMA..." << endl;
      break;
      default: cout << "VOCE EH BURRO?" << endl;
    }
  } while(op != 6);
}