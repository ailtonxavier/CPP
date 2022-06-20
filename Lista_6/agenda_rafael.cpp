#include <iostream>
#include  <string>

using namespace std;


struct agenda{
    int codigo;
    string nome;
    string telefone;
};

int main() {
int i, j, num, op, total = 0, capacidade, codaux, posicao, op2;
bool existe;

  
cout<<"\nDefina o número de contatos de sua agenda: ";
cin>>capacidade;  
  
  agenda contato[capacidade];

do{  
  cout<<"\n\n         MENU      ";
  cout<<"\n1-INCLUSÃO DE CONTATO";
  cout<<"\n2-CONSULTA DE CONTATO";
  cout<<"\n3-EXCLUSÃO DE CONTATO";
  cout<<"\n4-EDITAR CONTATO";
  cout<<"\n5-RELATORIO DE CONTATOS CADASTRADOS";
  cout<<"\n6-SAIR";  
  cout<<"\nEscolha uma opção: ";
  cin>>op;  
  
    switch(op){
      case 1:
         existe = false;
       if(total==capacidade){
         cout<<"\nINCLUSÃO NÃO REALIZADA, AGENDA CHEIA!";
        }else{
         cout<<"\n\nDigite o codigo do novo contato: ";
         cin>>codaux;
          for(i=0; i<total; i++){
             if(codaux==contato[i].codigo){
                  existe = true;
             }
          }
          if(existe){
              cout<<"\nCONTATO JA EXISTE NA AGENDA!";
          }else{
            cout<<"\nINCLUSÃO DE CONTATO";
            contato[codaux-1].codigo = codaux;
            cout<<"\nDigite o nome do contato: ";
            cin.ignore();
            getline(cin,contato[codaux-1].nome); // checar isso!
            cout<<"\nDigite o número de telefone: ";
            getline(cin,contato[codaux-1].telefone);
            total++;
          }
        }
      break;
      case 2:
          existe = false;
          cout<<"\nCONSULTA DE CONTATO";
          cout<<"\n\nDigite o codigo do novo contato: ";
          cin>>codaux;
          for(i=0; i<total; i++){
             if(codaux==contato[i].codigo){
                  existe = true;
                  posicao = i;
             }
          }
          if(existe){
            cout<<"\nCONTATO ENCONTRADO!";
            cout<<"\nCodigo: " << contato[posicao].codigo;
            cout<<"\nNome: " << contato[posicao].nome;
            cout<<"\nTelefone: " << contato[posicao].telefone;
          }else{
            cout<<"\nCONTATO NÃO ENCOTRADO!";
          }
      break;
      case 3:
          existe = false;
          cout<<"\nEXCLUSÃO DE CONTATO";
          cout<<"\n\nDigite o codigo do contato que deseja excluir: ";
          cin>>codaux;
          for(i=0; i<total; i++){
             if(codaux==contato[i].codigo){
                  existe = true;
                  posicao = i;
             }
          }
          if(existe){
              for(i=posicao; i<total; i++){     
                if(i != (total -1)){
                  contato[i].codigo = contato[i+1].codigo;
                  contato[i].nome = contato[i+1].nome;
                  contato[i].telefone = contato[i+1].telefone;
                }
              }
            
            total--;
            cout<<"\nCONTATO EXCLUIDO COM SUCESSO!";
         }else{
             cout<<"\nCONTATO NÃO ENCOTRADO!";
         }
      break;
      case 4:
          cout<<"\nEDITAR CONTATO";
          existe = false;
          cout<<"\n\nDigite o codigo do contato que deseja editar: ";
          cin>>codaux;
          for(i=0; i<total; i++){
             if(codaux==contato[i].codigo){
                  existe = true;
                  posicao = i;
             }
          }
        if(existe){
          cout<<"\n\nO que deseja editar?";
          cout<<"\n1Codigo";
          cout<<"\n2-Nome";
          cout<<"\n3-Telefone";
  
          do{
            cout<<"\nEscolha uma opção de (1) a (3): ";
            cin>>op2;
            if(op2<1 && op2>3){
              cout<<"\nValor invalido!";
            }
          }while(op2<1 && op2>3);  
          
          switch(op2){
            case 1:
                cout<<"\nDigite novo codigo do contato: ";
                cin>>contato[posicao].codigo;
                cout<<"\nCONTATO EDITADO COM SUCESSO!";
            break;
            case 2:
                cout<<"\nDigite novo nome do contato: ";
                cin.ignore();
                getline(cin,contato[posicao].nome);
                cout<<"\nCONTATO EDITADO COM SUCESSO!";
            break;
            case 3:
                cout<<"\nDigite novo telefone do contato: ";
                getline(cin,contato[posicao].telefone);
                cout<<"\nCONTATO EDITADO COM SUCESSO!";
            break;
          }
          
        }else{
          cout<<"\nCONTATO NÃO ENCOTRADO!";
        }
      break;
      case 5:
         cout<<"\nRELATORIO DE CONTATOS CADASTRADOS";
         cout<<"\n\ntotal de contatos cadastrados: " << total;
        
          for(i=0; i<total; i++){
            cout<<"\n\nCodigo: " << contato[i].codigo;
            cout<<"\n\nNome: " << contato[i].nome;
            cout<<"\n\nTelefone: " << contato[i].telefone;
          }
      break;
      case 6:
          cout<<"\nPrograma encerrado!";
      break;    
    }
    
        
        
  }while(op!=6);

}