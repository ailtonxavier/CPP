/*
Elabore  um  algoritmo  que  implemente  uma  calculadora  real:  o  usuário  digita  um  número,  depois  a 
operação (+, -, *, /), outro número, outra operação, outro número, e assim continua até que ele digite 
enfim o sinal “=”, quando então a calculadora mostra o resultado. Exemplos: 1 + 3 – 2 / 2 = 1; 4 – 2 / 1 + 
4 = 6. O algoritmo deve resolver a expressão na ordem de digitação. 
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
    if(primeiraVez){
      resultado = numero;
      primeiraVez = false;
    } else {
      switch(operador){
        case '+': resultado = resultado + numero; break;
        case '-': resultado = resultado - numero; break;
        case '*': resultado = resultado * numero; break;
        case '/': while(numero == 0){
          cout << "Impossivel dividir por zero, Digite novamente o numero: ";
          cin >> numero;
        } resultado = resultado / numero; break;
      }
    }
    cout << "Digite o operador \" + , - , * , /  ou = \" para sair: ";
    cin >> operador;
  }while(operador != '=');
  cout << "Resultado: " << resultado;
}