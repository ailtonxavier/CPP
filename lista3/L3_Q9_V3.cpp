
/*
9.	Elabore um algoritmo que mostre o calendário de um determinado mês. 
Os dados de entrada são o mês (cujos dados devem ser mostrados) e o dia da
semana em que esse mês inicia. Assuma que esse mês está em um ano que não é bissexto, 
porém considere meses de 28, 30 e 31. O resultado deve ser como mostrado abaixo. 
Ex: janeiro, começando na 5a feira:
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    int mes, dia, cont, fim, qtdNumeros1aLinha, contar7em7, ultimoDiaImpresso;
    bool primeiraLinha, quero = true;


    cout << "\nDigite o mes desejado: ";
    cin >> mes;
    cout << "\nDigite o dia da semana em que o mes inicia (1-dom, 2-seg, 3-ter, 4-qua, 5-qui, 6-sex, 7-sab): ";
    cin >> dia;


    while(quero){ 

        contar7em7=0;
        primeiraLinha = true;
        cout << "\n\n\tCALENDARIO DO MES " << mes << "\n";

        switch(mes){
            case 2: fim = 28;
            break;
            case 4:
            case 6:
            case 9:
            case 11: fim = 30;
            break;
            default: fim = 31;        
        }

    
        switch(dia){    
            case 1: qtdNumeros1aLinha = 7; break;
            case 2: qtdNumeros1aLinha = 6; break;
            case 3: qtdNumeros1aLinha = 5; break;
            case 4: qtdNumeros1aLinha = 4; break;
            case 5: qtdNumeros1aLinha = 3; break;
            case 6: qtdNumeros1aLinha = 2; break;
            case 7: qtdNumeros1aLinha = 1; break;
        }

        cout << "\tDOM\tSEG\tTER\tQUA\tQUI\tSEX\tSAB\n";

        switch(dia){
            //case 1: cout << "";
            //break;
            case 2: cout << "\t";
            break;
            case 3: cout << "\t\t";
            break;
            case 4: cout << "\t\t\t";
            break;
            case 5: cout << "\t\t\t\t";
            break;
            case 6: cout << "\t\t\t\t\t";
            break;
            case 7: cout << "\t\t\t\t\t\t";
            break;
        }

        for(cont=1; cont<=fim; cont++){

            cout << "\t" << cont;

            if(primeiraLinha==true){
                if(cont>=qtdNumeros1aLinha){
                    cout << "\n";
                    primeiraLinha = false;
                }
            }else{
                contar7em7++;
                if(contar7em7==7){
                    cout << "\n";
                    contar7em7 = 0;
                }
            }
        }

        // código adicionado para calcular o calendário do mes subsequente...
        mes++;
        if(mes>12){
            mes = 1; //volta para janeiro caso o mês passe de dezembro.
        }
        dia = contar7em7+1;
        if(dia>7){
            dia = 1;
        }
        

        cout << "\nAinda quer? (1-sim, 0-nao): ";
        cin >> quero;

    }


    cout << "\n\n";
    system("PAUSE");
}



