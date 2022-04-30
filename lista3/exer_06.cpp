/*
Em um jogo de adivinhação, o jogador deve descobrir um número entre 1 e 10 usando até três tentativas. 
A cada tentativa o jogador é informado se o número foi descoberto, se ele é maior ou menor do que a 
tentativa.  Se  após  três  tentativas  o  jogador  não  descobrir  o  número,  então  ele  perde  o  jogo.  Faça  um 
algoritmo que implemente esse jogo, considerando que o número a ser descoberto será definido dentro 
do algoritmo e não estará visível para o usuário.
*/

#include <iostream>

using namespace std;

int main(){
    int numeroSecreto = 4, contador, chute;
    for(contador = 1; contador <= 3; contador++){
        cout << "Tente advinhar o numero secreto: ";
        cin >> chute;
        if(chute == numeroSecreto){
            cout << "parabens tu ganhou desgraca.\n";
            contador = 4;
        } else {
            if(contador < 3){
            cout << "Errou, tente novamente!\n";
        }
        }
    }
    if(chute != numeroSecreto){
    cout << "Parece que tu erro foi tudo fi duma egua, o numero secreto era " << numeroSecreto << ".";
    }
} // ok