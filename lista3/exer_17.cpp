/*
Elabore um algoritmo que simule o caixa de um supermercado. Para cada produto da compra, o algoritmo 
deve  ler  o  seu  código,  o  valor  unitário  e  a  quantidade  adquirida.  Após  as  informações  do  produto,  o 
algoritmo deve mostrar o subtotal da compra e perguntar se o usuário deseja continuar (S-sim, N-não). 
Caso o usuário escolha ‘S’, o algoritmo deverá pedir os dados do próximo produto. Caso escolha ‘N’, o 
algoritmo deverá informar o total da compra e a quantidade total de produtos adquiridos. Em seguida 
deve ler o valor pago e informar se está correto, existe troco ou está insuficiente.
*/

#include <iostream>

using namespace std;

int main(){
  int codigoDoProduto, quantidadeDeProdutos = 0;
  float valorDoProduto, somatorio, valorAPagar;
  char escolha = 's';
  bool primeiraVez;

  do{
    cout << "Digite o codigo do produto: ";
    cin >> codigoDoProduto;
    cout << "Agora digite o valor do produto: ";
    cin >> valorDoProduto;
    quantidadeDeProdutos++;

    if(primeiraVez){
      somatorio = valorDoProduto;
      primeiraVez = false;

    } else {
      somatorio += valorDoProduto;

    }

    cout << "(s - para sim, n - se nao)\nDeseja continuar? ";
    cin >> escolha;

    while((escolha != 's') && (escolha != 'n')){
      cout << "Voce digitou errado, escolha s para sim ou n para nao: ";
      cin >> escolha;
      
    }

  }while(escolha == 's');

  if(escolha == 'n'){
   cout << "Voce pagara: "<< somatorio << endl << "Voce comprou " << quantidadeDeProdutos << " produtos." << endl;
   cout << "Digite o valor a pagar: ";
   cin >> valorAPagar;
   while(valorAPagar != somatorio){

     if(valorAPagar > somatorio){
       cout << "Voce pagou " << valorAPagar << ", seu troco eh R$" << valorAPagar - somatorio << endl; //
       valorAPagar = somatorio;
     } else if(valorAPagar < somatorio){
       cout << "Voce pagou " << valorAPagar << " faltam R$: " << somatorio - valorAPagar << endl;
       cout << "Pague o valor total para confirmar a compra: ";
       cin >> valorAPagar;
     }
   }
  } cout << "Obrigado e volte sempre!" << endl;
}