#include <iostream>

using namespace std;

int main(){
  float nota_a, nota_b, nota_c, media;
  cout << "digite a nota do trabalho de laboratorio: ";
  cin >> nota_a;
  cout << "digite a nota da avaliacao semestral: ";
  cin >> nota_b;
  cout << "digite a nota do exame final: ";
  cin >> nota_c;
  media = nota_a + nota_b + nota_c;
  if(media == 0 || media <= 2.9){
    cout << "Reprovado";
  } else if (media >= 3 || media <= 4.9){
    cout << "Recuperacao";
  } else {
    cout << "Aprovado";
  } // ok
}