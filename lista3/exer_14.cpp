/*
Elabore  um  algoritmo  que  apresente  um  menu  contendo  as  opções  1-Triângulo,  2-Quadrado,  3-
Retângulo,  4-Trapézio,  5-Círculo,  6-Sair.  Em  seguida,  de  acordo  com  a  opção  escolhida  pelo  usuário,  o 
algoritmo deve solicitar as informações necessárias para cálculo da área, efetuar o cálculo e escrever o 
resultado. O algoritmo só deverá finalizar quando o usuário escolher a opção 6-Sair.
*/

#include <iostream>
using namespace std;
int main(){
    int menu = 1;
    float base, altura, raio, triangulo, quadrado, retangulo, trapezio, circulo, resultado, base_menor;
    while(menu != 6){
        cout << "--------------------\n        MENU        \n--------------------\n1 - Triangulo\n2 - Quadrado\n3 - Retangulo\n4 - Trapezio\n5 - Circulo\n6 - Sair\n--------------------\nDigite sua opcao: ";
        cin >> menu;

        switch(menu){
            case 1:
                cout << "Digite o lado da base: ";
                cin >> base;
                cout << "Digite o lado da altura: ";
                cin >> altura;
                resultado = (base * altura)/2;
                cout << "A area do triangulo eh " << resultado << "m2" << endl; break;
            case 2: 
                cout << "Digite o lado da base: ";
                cin >> base;
                resultado = base * base;
                cout << "A area do triangulo eh " << resultado << "m2" << endl; break;
            case 3:
                cout << "Digite o lado da base: ";
                cin >> base;
                cout << "Digite o lado da altura: ";
                cin >> altura;
                resultado = base * altura;
                cout << "A area do retangulo eh " << resultado << "m2" << endl; break;
            case 4:
                cout << "Digite o lado da base maior: ";
                cin >> base;
                cout << "Digite o lado da base menor: ";
                cin >> base_menor;
                cout << "Digite o lado da altura: ";
                cin >> altura;
                resultado = ((base + base_menor) * altura) / 2;
                cout << "A area do retangulo eh " << resultado << "m2" << endl; break;
            case 5: 
                cout << "Digite o raio do circulo: ";
                cin >> raio; break;
            case 6: menu = 6; break;
        }
    }
}