/*
Escreva um programa para cadastrar dois clientes de uma loja. As informações necessárias 
para  o  cliente  são:  identidade,  nome,  endereço  e  telefone.  OBS:  Deve  ser  usada  uma 
estrutura de registro para a construção deste cadastro.
*/
#include <iostream>
#include <string>
using namespace std;
struct clientes {
  string identidade;
  string nome;
  string endereco;
  string telefone;
};

int main(){
  int op = 0, contador = 0;
  string nomeCliente, identidadeCliente, clienteEndereco, clienteTelefone;
  clientes loja[2];
  do {
    cout << "##########################" << endl;
    cout << "1 - CADASTRO DE CLIENTE" << endl;
    cout << "2 - LISTA DE CLIENTES" << endl;
    cout << "3 - SAIR DO MENU" << endl;
    cout << "##########################" << endl;
    cout << "SELECIONE UMA OPCAO: ";
    cin >> op;
    switch(op){
      case 1:
        cin.ignore();
        if(contador > 2){
          cout << "LIMITE DE CADASTROS ATINGIDO" << endl;
        } else {
          cout << "CRIANDO CLIENTE..." << endl;
          cout << "DIGITE O NOME: ";
          getline(cin, nomeCliente);
          loja[contador].nome = nomeCliente;
          cout << "DIGITE A IDENTIDADE: ";
          getline(cin, identidadeCliente);
          loja[contador].identidade = identidadeCliente;
          cout << "DIGITE O ENDEREÇO: ";
          getline(cin, clienteEndereco);
          loja[contador].endereco = clienteEndereco;
          cout << "DIGITE O TELEFONE: ";
          getline(cin, clienteTelefone);
          loja[contador].telefone = clienteTelefone;
          contador ++;
        }
      break;
      case 2:
        cin.ignore(); 
        if(contador == 0){
          cout << "A LISTA DE CLIENTES ESTA VAZIA" << endl;
        } else {
          cout << "LISTA DE CLIENTES..." << endl << endl;
          for(int i = 0; i < contador; i++){
            cout << "CLIENTE DE NOME: " << loja[i].nome << endl;
            cout << "DE IDENTIDADE: " << loja[i].identidade << endl;
            cout << "ENRECO: " << loja[i].endereco << endl;
            cout << "TELEFONE: " << loja[i].telefone <<endl << endl;
          }
        }
      break;
    }
  }while(op != 3);
}