#include <iostream>

using namespace std;

int main(){
  // variaveis
  int cigarrosPorDia;
  float precoDaCarteira;
  int anosDeConsumo;
  // entrada
  cout << "Você fuma quantos cigarros por dia? ";
  cin >> cigarrosPorDia;
  cout << "Quanto custa uma carteira de cigarro? ";
  cin >> precoDaCarteira;
  cout << "Faz quantos anos que você fuma? ";
  cin >> anosDeConsumo;
  // processamento
  float somatorio = ((cigarrosPorDia * (anosDeConsumo * 365))/20)* precoDaCarteira;
  cout << "Parabéns você churrascou seu pulmão, você gastou " << somatorio << " poderia ter gastado com coisa melhor, meus pêsames\n";
}