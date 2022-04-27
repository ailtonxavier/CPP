#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    int mes, dia, i, fim;

    cout << "Mes: ";
    cin >> mes;
    cout << "Dia: ";
    cin >> dia;

    cout << "\nFim = " << fim;

    cout << "\tDom\tSeg\tTer\tQua\tQui\tSex\tSab\n";

    for(i = 1; i <= fim; i++){
        switch(mes){
            case 1: fim = 28;
            break;
            case 4:
            case 6:
            case 9:
            case 11: fim = 30;
            break;
            default: fim = 31;
        }
    }


}
/*
    for(i = 1; i <= 7; i++){
        switch(dia){
            case 1: cout << "\t";
                break;
            case 2: cout << "\t\t";
                break;
            case 3: cout << "\t\t\t";
                break;
            case 4: cout << "\t\t\t\t";
                break;
            case 5: cout << "\t\t\t\t\t";
                break;
            case 6: cout << "\t\t\t\t\t\t";
                break;
            case 7: cout << "\t\t\t\t\t\t\t";
                break;
            default: fim = 31;
        }

    }*/