
/*
19.	Escreva um algoritmo que conte de 100 a 999 (inclusive) e exiba, um por linha, 
o produto dos três dígitos dos números. Por exemplo, inicialmente o programa irá exibir:
100 = 0 (1*0*0)
101 = 0 (1*0*1)
102 = 0 (1*0*2)
(...)
110 = 0 (1*1*0)
111 = 1 (1*1*1)
112 = 2 (1*1*2)
(...)
999 = 9*9*9=729
Faça o seu algoritmo dar uma pausa a cada 20 linhas para que seja possível ver 
todos os números pouco a pouco. Solicite que seja pressionada alguma tecla para 
ver a próxima sequência de números.
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    int num, alg1, alg2, alg3, resto, cont=0;

    for(num=100; num<=999; num++){

        // extração dos algarismos do numero
        alg1 = num/100;
        resto = num%100;
        alg2 = resto/10;
        alg3 = resto%10;

        cout << "\n" << num << " = " << (alg1*alg2*alg3);

        cont++;
        if(cont==20){
            cout << "\n\n";
            system("Pause");
            cont = 0;
            system("cls");
        }

    }



    cout << "\n\n";
    system("PAUSE");
}