#include <iostream>
#include <string>
using namespace std;
struct tProduto {
  string descicao;
  int quantidade;
  float precoUnitario;
  float subTotal = 0;
};

const int tamanhoItens = 2;

struct tNotaFiscal {
  int numero;
  string data;
  tProduto itens[tamanhoItens];
  float total = 0;
};

int main(){
  const int tamanhoNotasFiscais = 2;
  tNotaFiscal NotasFiscais[tamanhoNotasFiscais];
  int sub, contador = 0, i, j, numeroNotaAuxiliar;
  bool existe;
  
  for(int i = 0; i < tamanhoNotasFiscais; i++){
    cout << "DIGITE O NUMERO DA NOTA FISCAL: ";
    cin >> NotasFiscais[i].numero;
    cin.ignore();
    cout << "DIGITE A DATA: ";
    getline(cin, NotasFiscais[i].data);
    for(j = 0; j < tamanhoItens; j++){
      cout << "DESCRICAO DO PRODUTO: ";
      getline(cin, NotasFiscais[i].itens[j].descicao);
      cout << "QUANTIDADE DE PRODUTOS: ";
      cin >> NotasFiscais[i].itens[j].quantidade;
      cout << "QUAL PRECO UNITARIO: ";
      cin >> NotasFiscais[i].itens[j].precoUnitario;
      NotasFiscais[i].itens[j].subTotal = NotasFiscais[i].itens[j].quantidade * NotasFiscais[i].itens[j].precoUnitario;
      NotasFiscais[i].total += NotasFiscais[i].itens[j].subTotal;
      cin.ignore();
    }
    contador++;
  }
  int op;
  do {
    cout << "########################################" << endl;
    cout << "############ MENU PRINCIPAL ############" << endl;
    cout << "########################################" << endl;
    cout << "1 - RELATORIO DE NOTAS FISCAIS" << endl;
    cout << "2 - BUSCAR NOTA POR NUMERO" << endl;
    cout << "3 - EXIBIR NOTA COM MAIOR VLAOR TOTAL" << endl;
    cout << "4 - EXIBIR A QUANTIDADE TOTAL VENDIDA DE\nUM PRODUTO A PARTIR DA SUA DESCICAO" << endl;
    cout << "5 - EXIBIR MEDIA TOTAL DAS NOTAS" << endl;
    cout << "6 - ABORTAR O PROGRAMA" << endl;
    cout << "AGORA SELECIONE UMA OPCAO: ";
    cin >> op;
    cin.ignore();
    switch(op){
      case 1:
        cout << "RELATORIO DE NOTAS FISCAIS" << endl;
        if(contador == 0){
          cout << "NAO EXISTEM NOTAS FISCAIS" << endl;
        } else {
          cout << "TOTAL DE NOTAS FISCAIS CADASTRADAS: " << contador << endl;
          for(i = 0; i < tamanhoItens; i++){
            cout << "NUMERO DA NOTA FISCAL: " << NotasFiscais[i].numero << endl;
            cout << "DATA: " << NotasFiscais[i].data << endl;
            for(j = 0; j < tamanhoItens; j++){
              cout << "DESCRICAO DO PRODUTO: " << NotasFiscais[i].itens[j].descicao << endl;
              cout << "QUANTIDADE DO MESMO PRODUTO: " << NotasFiscais[i].itens[j].quantidade << endl;
              cout << "PRECO UNITARIO: " << NotasFiscais[i].itens[j].precoUnitario << endl;
              cout << "SUBTOTAL: " << NotasFiscais[i].itens[j].subTotal << endl;
            }
            cout << "TOTAL: " << NotasFiscais[i].total << endl << endl;
          }
        }
      break;
      case 2:
        cout << "BUSCAR NOTA POR NUMERO" << endl;
        cout << "DIGITE O NUMERO DA NOTA: ";
        cin >> numeroNotaAuxiliar;
        for(i = 0; i < tamanhoNotasFiscais; i++){
          if(numeroNotaAuxiliar == NotasFiscais[i].numero){
            cout << "NOTA FISCAL ENCONTRADA!" << endl;
            cout << "NUMERO DA NOTA FISCAL" << NotasFiscais[i].numero << endl;
            cout << "DATA: " << NotasFiscais[i].data << endl;
            for(j = 0; j < tamanhoItens; j++){
              cout << "DESCRICAO DO PRODUTO: " << NotasFiscais[i].itens[j].descicao << endl;
              cout << "PRECO UNITARIO DO PRODUTO: " << NotasFiscais[i].itens[j].precoUnitario << endl;
              cout << "QUANTIDADE: " << NotasFiscais[i].itens[j].quantidade << endl;
              cout << "SUBTOTAL: " << NotasFiscais[i].itens[j].subTotal << endl;
            }
            cout << "TOTAL: " << NotasFiscais[i].total << endl << endl;
          }
        }
      break;
      case 6: cout << "VOCE ABORTOU O PROGRAMA!"; break;
      default: cout << "VOCE DIGITOU UM VALOR INVALIDO!" << endl << endl; break;
    }
  } while(op!=6);
}

/*
Elabore um algoritmo que: 
- Crie o registro tProduto:  Registro tProduto: 
descricao: string 
quantidade: int 
precoUnitario: float 
subTotal: float  
Obs: o campo subtotal deve ser 
calculado automaticamente, sendo 
ele resultante da quantidade x 
pre??o unit??rio do produto. 
 
  
- Crie o registro tNotaFiscal Registro tNotaFiscal: 
numero: int 
data: string 
itens: tProduto[5] 
total: float  
Obs: o campo total deve ser 
calculado automaticamente, sendo 
ele  a  soma  de  todos  os  SubTotais 
dos produtos cadastrados. 
- Declare um vetor NotasFiscais (5 posi????es de tNotaFiscal) e leia seus dados. 
- Informe o seguinte menu e proceda com a opera????o de acordo com a escolha do usu??rio: 
  MENU PRINCIPAL                               
1 ??? RELAT??RIO DE NOTAS FISCAIS  
2 ??? BUSCAR NOTA POR NUMERO 
3 ??? EXIBIR NOTA COM MAIOR VALOR TOTAL 
4 ??? EXIBIR A QUANTIDADE TOTAL VENDIDA DE  
UM PRODUTO A PARTIR DA SUA DESCRI????O 
5 ??? EXIBIR M??DIA DO TOTAL DAS NOTAS 
6 ??? SAIR 
- Se o usu??rio escolher a op????o 1, o algoritmo dever?? mostrar todos os dados de todas as 
notas cadastradas. 
- Se o usu??rio escolher a op????o 2, solicite o n??mero da nota e fa??a a busca. Se existir, mostre 
seus produtos. Se n??o existir, informe. 
- Se o usu??rio escolher a op????o 3, mostre os dados da nota que tem o maior valor total. 
-  Se  o  usu??rio  escolher  a  op????o  4,  solicite  a  descri????o  do  produto,  calcule  e  mostre  o 
somat??rio de todas as quantidades vendidas daquele produto em todas as notas. 
- Se o usu??rio escolher a op????o 5, calcule e mostre a m??dia de todos os totais das notas. 
- Se o usu??rio escolher a op????o 6, finalize o sistema.
*/