/*
Elabore  um  algoritmo  que  apresente  um  menu  contendo  as  opções  1-Triângulo,  2-Quadrado,  3-
Retângulo,  4-Trapézio,  5-Círculo,  6-Sair.  Em  seguida,  de  acordo  com  a  opção  escolhida  pelo  usuário,  o 
algoritmo deve solicitar as informações necessárias para cálculo da área, efetuar o cálculo e escrever o 
resultado. O algoritmo só deverá finalizar quando o usuário escolher a opção 6-Sair.
*/

#include <iostream>
using namespace std;
int main(){
    int menu = 1, base, altura, raio, triangulo, quadrado, retangulo, trapezio, circulo, resultado;
    while(menu != 6){
        triangulo = false, quadrado = false, retangulo = false, trapezio = false, circulo = false, resultado = 0;
        cout << "--------------------\n        MENU        \n--------------------\n1 - Triangulo\n2 - Quadrado\n3 - Retangulo\n4 - Trapezio\n5 - Circulo\n6 - Sair\n--------------------\nDigite sua opcao: ";
        cin >> menu;

        switch(menu){
            case 1: triangulo = true; break;
            case 2: quadrado = true; break;
            case 3: retangulo = true; break;
            case 4: trapezio = true; break;
            case 5: circulo = true; break;
            case 6: menu = 6; break;
        }
        if(circulo){
            cout << "Digite o raio do circulo: ";

            cin >> raio;
        } else {
            cout << "Digite o lado da base: ";
            cin >> base;
            cout << "Digite o lado da altura: ";
            cin >> altura;
            if(triangulo){
                resultado = (base * altura)/2;
                cout << "A area do triangulo eh " << resultado << "m2" << endl;
            }
        }

    }
}