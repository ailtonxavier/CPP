  /*
  A condição de existencia de um triangulo é
  a soma dos lados, se a soma dos lados menores for
  maior que o maior lado, é possível um triangulo
  caso contrário não
  */


#include <iostream>
// atividade 1
using namespace std;

int main(){
  int x, y, z;

  cout << "Entre com valor de x: ";
  cin >> x;
  cout << "Entre com valor de y: ";
  cin >> y;
  cout << "Entre com valor de z: ";
  cin >> z;

  if(x > y + z || y > x + z || z > x + y){
    cout << "Nao forma um triangulo";
    } else if(x == y && y == z){
      cout << "Eh equilatero";
    } else if(x == y && y != z || x == z && z != y || y == x && x != z || y == z && z != x || z == x && x != y || z == y && y != x){
      cout << "Eh triangulo isoceles";
    } else if(x != y && y != z){
      cout << "Eh escaleno";
    }
}