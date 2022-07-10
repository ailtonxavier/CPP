/*
FUNÇÕES
*/

#include <iostream>

using namespace std;

void cabecalho();
int verificarIdade();
int* maiorMenor();
int maior(int a, int b);
void dobra(int* a, int* b);

int main(){
    int alguem, x, y;
    //cabecalho();
    //alguem = verificarIdade();
    //cout << "\nA idade digitada foi: " << alguem;

    int *p;
    p = maiorMenor();
    cout << "\nMaior elemento: " << *p;
    p++;
    cout << "\nMenor elemento: " << *p;
    
    /*int v[2];
    v[0] = 10;
    v[1] = 20;
    int *p;

    p = v;

    cout << "\nElemento v[0]: " << *p;
    p++;
    cout << "\nElemento v[1]: " << *p;
    */

    //cout << "\nDigite dois numeros: ";
    //cin >> x >> y;
    //cout << "\nO maior eh: " << maior(x,y);

    //cout << "\nDigite dois numeros: ";
    //cin >> x >> y;
    //dobra(&x, &y);
    //cout << "\nDobrados: " << x << " e " << y;

    cout << "\n";
    system("PAUSE");
    return 0;
}

void cabecalho(){
    cout << "Bem vindo!"; 
}

int verificarIdade(){
    int id;
    cout << "Qual eh a sua idade? ";
    cin >> id;
    return id;
}

int* maiorMenor(){
    //ler um conjunto de 4 numeros e retornar o maior
    //e o menor
    static int v[2]; //CORREÇÃO APLICADA AQUI, EXPLICAÇÃO NO FIM DA FUNÇÃO
    int i, maior, menor, numero;
    for(i=1; i<=4; i++){
        cout << "\nDigite um numero: ";
        cin >> numero;
        if(i==1){
            maior = menor = numero;
        }else{
            if(numero>maior)
                maior = numero;
            if(numero<menor)
                menor = numero;
        }
    }
    v[0] = maior;
    v[1] = menor;
    //p = v;
    return v;

    /*
    MOTIVO DO ERRO:
    O problema é que retornamos o endereço de uma variável local 
    que não é recomendada, pois as variáveis ​​locais podem não
    existir na memória após o término da chamada de função .
    Portanto, em palavras simples, Funções não podem retornar 
    matrizes em C. No entanto, para retornar a matriz em C
    por uma função, PODE-SE DECLARAR O VETOR COMO STATIC pois
    sua vida útil continuará durante a execução de todo o programa. 
    */
}


int maior(int a, int b){
    if(a>b){
        return a;
    }else{
        return b;
    }
}

void dobra(int* a, int* b){
    *a = (*a)*2;
    *b = (*b)*2;
}