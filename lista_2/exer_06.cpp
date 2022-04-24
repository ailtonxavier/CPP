#include <iostream>

using namespace std;

int main(){
  int prof, horas;
  float prof_nv1, prof_nv2, prof_nv3;
  prof_nv1 = 12;
  prof_nv2 = 17;
  prof_nv3 = 25;

  cout << "Voce eh professor nivel 1, 2 ou 3? ";
  cin >> prof;
  cout << "Voce trabalha quantas horas por semana? ";
  cin >> horas;
  int salario_prof_1 = prof_nv1 * horas;
  int salario_prof_2 = prof_nv2 * horas;
  int salario_prof_3 = prof_nv3 * horas;
  if(prof == 1){
    cout << "Você trabalha " << horas << " por mes, seu salario por semana eh "<< salario_prof_1;
  } else if(prof == 2){
    cout << "Você trabalha " << horas << " por mes, seu salario por semana eh "<< salario_prof_2;
  } else if(prof == 3){
    cout << "Você trabalha " << horas << " por mes, seu salario por semana eh "<< salario_prof_3;
  }
}

// ok