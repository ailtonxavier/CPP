#include <iostream>
#include <string>
using namespace std;

struct tProduto {
  string descricao;
  int quantidade;
  float precoUnitario;
  float subTotal;
};

const int qnt = 1;

struct tNotaFiscal {
  int numero;
  string data;
  tProduto itens[qnt];
  float total;
};

int main(){
  const int qnt2 = 2;
  int i, j, op, contador = 0, numAux, posicao, posicao2, contador2, maiorValorTotal = 0, somatorio = 0;
  bool existe;
  string produto;
  
  tNotaFiscal NFs[qnt2];

  // cout << "PREENCHIMENTO DE NOTA FISCAL";
  for(i = 0; i < qnt2; i++){
    cout << "\n\nDigite o numero da nota fiscal: ";
    cin >> NFs[i].numero;
    cout << "\nDigite a data: ";
    cin.ignore();
    getline(cin, NFs[i].data);
    for(j = 0; j < qnt; j++){
      cout << "\ndescricao do produto: ";
      cin.ignore();
      getline(cin, NFs[i].itens[j].descricao);
      cout << "\nquantidade de produtos: ";
      cin >> NFs[i].itens[j].quantidade;
      cout << "\nqual preco unitario: ";
      cin >> NFs[i].itens[j].precoUnitario;
      NFs[i].itens[j].subTotal = NFs[i].itens[j].quantidade * NFs[i].itens[j].precoUnitario;
      NFs[i].total += NFs[i].itens[j].subTotal;

    } // FIM DO FOR
    contador++;
  } // FIM DO FOR
  do {
    cout << "\n1 - RELATORIO DE NOTAS FISCAIS: ";
    cout << "\n2 - BUSCAR NOTA POR NUMERO: ";
    cout << "\n3 – EXIBIR NOTA COM MAIOR VALOR TOTA: ";
    cout << "\n4 - EXIBIR A QUANTIDADE TOTAL VENDIDA DE UM PRODUTO A PARTIR DA SUA DESCRIÇÃO: ";
    cout << "\n5 - EXIBIR MÉDIA DO TOTAL DAS NOTAS: ";
    cout << "\n6 - SAIR: ";
    cin >> op;
    switch(op){
      case 1:
        cout << "\nRELATORIO DE NOTAS FISCAIS";
        if(contador == 0){
          cout << "\nNAO EXISTE NOTAS FISCAIS CADASTRADAS";
        } else {
          cout << "\nTOTAL DE NOTAS FISCAIS CADASTRADAS: " << contador;
        for(i = 0; i < qnt2; i++){
            cout << "\n\numero da nota fiscal: " << NFs[i].numero;
            cout << "\ndata: " << NFs[i].data;
            for(j = 0; j < qnt; j++){
              cout << "\ndescricao do produto: " << NFs[i].itens[j].descricao;
              cout << "\nquantidade de produtos: " << NFs[i].itens[j].quantidade;
              cout << "\nqual preco unitario: " << NFs[i].itens[j].precoUnitario;
              cout << "\nSubtotal: " << NFs[i].itens[j].subTotal;
              cout << "\nTotal: " << NFs[i].total;
            } // FIM DO FOR
           
          }
        }
      break;
      case 2:
        existe = false;
        cout << "\nBUSCAR NOTA FISCAL POR NUMERO: ";
        cin >> numAux;
        for(i = 0; i < qnt2; i++){
          if(numAux == NFs[i].numero){
            existe = true;
            posicao = i;
          }
        }
        if(existe){
          cout << "NOTA FISCAL ENCONTRADA!";
          cout << "\nnumero da nota fiscal: " << NFs[posicao].numero;
          cout << "\ndata da nota fiscal: " << NFs[posicao].data;
          for(j = 0; j < qnt; j++){
            cout << "\n\nDescricao do produto: " << NFs[posicao].itens[j].descricao;
            cout << "\npreco unitario do produto: " << NFs[posicao].itens[j].precoUnitario;
            cout << "\nquantidade: " << NFs[posicao].itens[j].quantidade;
            cout << "\nsubotal: " << NFs[posicao].itens[j].subTotal;
          }
          cout << "Total: " << NFs[posicao].total;

        } else {
          cout << "\nNOTA FISCAL NAO CADASTRADA!";
        }
      break;
      case 3: // exibir nota com maior valor total
        if(contador == 0){
          cout << "NAO EXISTEM NOTAS FISCAIS";
        } else {
          for(i = 0; i < qnt2; i++){
            if(maiorValorTotal < NFs[i].total){
              maiorValorTotal = NFs[i].total;
              posicao = i;
            }
          }
          cout << "\nnumero da nota fiscal: " << NFs[posicao].numero;
          cout << "\ndata da nota fiscal: " << NFs[posicao].data;
          for(j = 0; j < qnt; j++){
            cout << "\n\nDescricao do produto: " << NFs[posicao].itens[j].descricao;
            cout << "\npreco unitario do produto: " << NFs[posicao].itens[j].precoUnitario;
            cout << "\nquantidade: " << NFs[posicao].itens[j].quantidade;
            cout << "\nsubotal: " << NFs[posicao].itens[j].subTotal;
          }
        }
      break;
      case 4:
        existe = false;
        contador2 = 0;
        //EXIBIR A QUANTIDADE TOTAL VENDIDA DE UM PRODUTO A PARTIR DA SUA DESCRIÇÃO 
        cin.ignore();
        cout << "\nDIGITE A DESCRICAO DO PRODUTO: ";
        getline(cin, produto);
        for(i = 0; i < qnt2; i++){
          for(j = 0; j < qnt; j++){
            if(produto == NFs[i].itens[j].descricao){
              existe = true;
              posicao = i;
              posicao2 = j;
              contador2++;
            }

          }
        }
        if(existe){
          cout << "Produto: " << NFs[posicao].itens[posicao2].descricao;
          cout << "Quantidade: " << contador2;
        }
      break;
      case 5: // EXIBIR MÉDIA DO TOTAL DAS NOTAS
        for(i = 0; i < qnt2; i++){
          somatorio = somatorio + NFs[i].total;
        }
        cout << "MEDIA TOTAL DE NOTAS: " << somatorio / qnt2;
      break;
      case 6:
        cout << "Fim de programa...";
      break;
    }
  } while(op != 6);
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
preço unitário do produto. 
 
  
- Crie o registro tNotaFiscal Registro tNotaFiscal: 
numero: int 
data: string 
itens: tProduto[5] 
total: float  
Obs: o campo total deve ser 
calculado automaticamente, sendo 
ele  a  soma  de  todos  os  SubTotais 
dos produtos cadastrados. 
- Declare um vetor NotasFiscais (5 posições de tNotaFiscal) e leia seus dados. 
- Informe o seguinte menu e proceda com a operação de acordo com a escolha do usuário: 
  MENU PRINCIPAL                               
1 – RELATÓRIO DE NOTAS FISCAIS  
2 – BUSCAR NOTA POR NUMERO 
3 – EXIBIR NOTA COM MAIOR VALOR TOTAL 
4 – EXIBIR A QUANTIDADE TOTAL VENDIDA DE  
UM PRODUTO A PARTIR DA SUA DESCRIÇÃO 
5 – EXIBIR MÉDIA DO TOTAL DAS NOTAS 
6 – SAIR 
- Se o usuário escolher a opção 1, o algoritmo deverá mostrar todos os dados de todas as 
notas cadastradas. 
- Se o usuário escolher a opção 2, solicite o número da nota e faça a busca. Se existir, mostre 
seus produtos. Se não existir, informe. 
- Se o usuário escolher a opção 3, mostre os dados da nota que tem o maior valor total. 
-  Se  o  usuário  escolher  a  opção  4,  solicite  a  descrição  do  produto,  calcule  e  mostre  o 
somatório de todas as quantidades vendidas daquele produto em todas as notas. 
- Se o usuário escolher a opção 5, calcule e mostre a média de todos os totais das notas. 
- Se o usuário escolher a opção 6, finalize o sistema.
*/

