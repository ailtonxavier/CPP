/*
7.	Elabore um algoritmo que implemente uma calculadora real: o usuário digita um número, 
depois a operação (+, -, *, /), outro número, outra operação, outro número, e assim 
continua até que ele digite enfim o sinal “=”, quando então a calculadora mostra o resultado. 
Exemplos: 1 + 3 – 2 / 2 = 1; 4 – 2 / 1 + 4 = 6. O algoritmo deve resolver a expressão na ordem 
de digitação.
*/

#include <iostream>

using namespace std;

int main(){
  float numero, resultado;
  char operador;
  bool primeiraVez = true;

  do{
    cout << "Digite um numero: ";
    cin >> numero;
    if(primeiraVez){ // na primeira vez vai entrar porque o vez1 é verdadeiro.
      resultado = numero;
      primeiraVez = false;
    }else{ // na segunda vez pra frente entra porque o vez1 se tornou falso.
      switch(operador){ // nesse casoo 
        case '+': resultado = resultado + numero; break;
        case '-': resultado = resultado - numero; break;
        case '*': resultado = resultado * numero; break;
        case '/': while(numero == 0){ // se o divisor for 0 gera um erro matemático, por isso o while.
          cout << "\nNao eh possivel divisao por 0, digite outro numero: ";
          cin >> numero;
        } resultado = resultado / numero; break;
      }
    }
    cout << "\nDigite a operacao ( + , - , * , / ): ";
    cin >> operador;
  }while(operador != '=');

  cout << "\n\nResultado = " << resultado;

  cout << "\n";
}
/*
1o passo, leitura de variaveis;
apos isso entra o do onde executa o bloco, como inicialmente a variavel "primeiraVez" é verdadeira, ela entra no if, somente na primeira vez, pôs ao entrar no if, torna-se falsa após o resultado receber o valor do primeiro numero. após isso o bloco pula para o cout << "Digite sua operação", pôs na primeira vez é verdadeiro, apôs você definir o operador sendo ele, (+, -, *, / ou =) o while vai verificar se o operador for =, se for qualquer outro ele volta ao inicio do "do" e da segunda vez pra frente entra no else, pôs a variavel "primeiraVez" agora é falsa, usando o operador digitado anteriormente, o algoritmo cai no switch e realiza uma conta, conforme o operador digitado, após a saída, o cout vai perguntar novamente o operador, se for '=' ele dirá a resposta

*/