/*
Faça um algoritmo que leia as matrículas e as respectivas médias finais de vários alunos de uma turma, 
até  que  seja  digitada  uma  média  negativa.  Ao  final,  o  algoritmo  deve  mostrar  a  quantidade  de  alunos 
aprovados (média >=7), reprovados (média <3) ou em recuperação. Além disso, o algoritmo deve mostrar 
as matrículas de todos os alunos que obtiveram médias superiores a 9.
*/

#include <iostream>

using namespace std;

int main(){
    // enquanto nota maior maior igual a zero, repetir.
    //     matricula
    //     nota 1;
    //     nota 2;
    //     media = (nota 1 + nota 2) / 2
    //     se a media for maior ou igual a 7 calcular quantos aprovados e se maior que nove mostrar medias maior que 9
    //     se a media for menor que 3 reprovado
    //     se a nota tiver entre (7:3] recuperacao
    float media = 0, nota1, nota2;
    int matricula;
    while (media >= 0){
        cout << "Informe a matricula: ";
        cin >> matricula;
        cout << "Informe a nota da unidade 1: ";
        cin >> nota1;
        cout << "Informe a nota da unidade 2: ";
        cin >> nota2;
        media = (nota1+nota2)/2;

        if(media >= 7){
            if(media > 9){
                cout << "O aluno referente a matricula " << matricula << " passou com louvor.\n";
            }else {
                cout << "O aluno referente a matricula " << matricula << " foi aprovado.\n";
            }

        } else if ((media <7) && (media >= 3)){
            cout << "O aluno referente a matricula " << matricula << " vai para a recuperacao.\n";
        } else if ((media < 3)&&(media >= 0)){
            cout << "O aluno referente a matricula " << matricula << " foi reprovado.\n";
        } else if (media < 0){
            cout << "A media foi negativa, portanto voce abortou o programa.\n";
            media = -1;
        }
        cout << "\n";
    } // ok
}