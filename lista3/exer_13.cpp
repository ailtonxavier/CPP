/*
Elabore  um  algoritmo  que  leia  um  número  inteiro  qualquer  e  verifique  se  ele  é  quadrangular.  Se  for, 
mostrar os próximos 10 quadrangulares depois dele. Se não for, informar. OBS: Os números 
quadrangulares são 1, 4, 9, 16, 25, ..., ou seja, 1x1, 2x2, 3x3, 4x4, ...
*/

#include <iostream>

using namespace std;

int main(){
    int quadrado, a = -1;
    cout << "Digite um numero e direi se eh quadrangular: ";
    cin >> quadrado;
    while(a < quadrado){
        a++;
        if((a * a) == quadrado){
            cout << "Eh quadrangular\n";
            a = quadrado;
        } else if((a * a) > quadrado) {
            cout << "Nao eh quadrangular\n";
            a = quadrado;
        }
    }
}