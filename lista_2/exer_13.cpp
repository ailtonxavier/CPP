#include <iostream>

using namespace std;

int main(){
  float km, litro;

    cout << "Voce percorreu quantos km? ";
    cin >> km;
    cout << "Com quantos litros? ";
    cin >> litro;


  if(km/litro < 8){
    cout << "Venda o carro!";
  } else if(km/litro >= 8 && km/litro <= 12){
    cout << "Economico";
  } else {
    cout << "Super economico";
  }
} // ok