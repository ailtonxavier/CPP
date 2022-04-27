#include <iostream>

using namespace std;

int main(){
  float celsius, fahrenheit;
  cout << "Converta Celsius para Fahrenheit, qual a temperatura deseja converter em graus Fahrenheit? ";
  cin >> celsius;
  fahrenheit = (9 * celsius + 160)/5;
  cout << celsius << "º C em Fahrenheit são exatamente: " <<  fahrenheit << "º F.";
}