/*
Elabore um algoritmo que mostre o menu abaixo referente a uma eleição 
----------------------------- 
     MENU ELEIÇÃO 
----------------------------- 
0 – Finalizar Votação  
1 – Candidato 1  
2 – Candidato 2  
3 – Candidato 3  
4 – Voto em branco  
5 – Voto nulo 
----------------------------- 
Digite seu voto:  
Leia os votos de todos os eleitores considerando as opções de voto listadas no menu e, ao final da eleição, 
calcule e escreva o número total de votos, o número de votos por candidato, o total de votos brancos e 
o total de votos nulos. Informe ainda se houve vencedor (votos do candidato > 50% do total de votos) e, 
neste caso, o número do candidato que venceu. 
*/

#include <iostream>

using namespace std;

int main(){
    int
        menu = 1,
        votosCandidato1 = 0,
        votosCandidato2 = 0,
        votosCandidato3 = 0,
        votosBranco = 0,
        votosNulo = 0;
    float
        totalDeVotos = 0,
        totalDeVotosValidos = 0;
    

    while(menu != 0){
        
        cout << "------------------------------\n\tMENU ELEICAO\n------------------------------\n0 - Finalizar Votacao\n1 - Candidato 1\n2 - candidato 2\n3 - Candidato 3\n4 - Voto em branco\n5 - Voto nulo\n------------------------------\nDigite seu voto: ";
        cin >> menu;

        if((menu >= 0) && (menu <= 5)){
            switch(menu){
                case 0: totalDeVotos--; break;
                case 1: votosCandidato1++; break;
                case 2: votosCandidato2++; break;
                case 3: votosCandidato3++; break;
                case 4: votosBranco++; break;
                case 5: votosNulo++; break;
            } totalDeVotos++;
            if((menu > 0) && (menu <= 3)){
                totalDeVotosValidos++;
            }
        }
    }
    cout <<  "\nTotal de votos do candidato 1: " << votosCandidato1 << "\nTotal de votos do candidato 2: "<< votosCandidato2 << "\nTotal de votos do candidato 3: " << votosCandidato3 << "\nTotal de votos branos: " << votosBranco << "\nTotal de votos nulos: " << votosNulo << "\nNumero total de Votos - " << totalDeVotos << endl << endl;

    if(votosCandidato1 > (totalDeVotosValidos / 2)){
        cout << "Parabens candidato 1";
    } else if(votosCandidato2 > (totalDeVotosValidos / 2)){
        cout << "Parabens candidato 2";
    } else if(votosCandidato3 > (totalDeVotosValidos / 2)){
        cout << "parabens candidato 3";
    } else if((votosBranco + votosNulo) >= totalDeVotosValidos){
        cout << "Democracia representativa eh uma piada, topo politico rouba.";
    }
    else {
        cout << "Ninguem atingiu mais que 50% dos votos.";
    }
    
}