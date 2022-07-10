#include <iostream>

using namespace std;

int main(){
  int *p, n; int *r;
  p = &n;
  cout << *p;
  r = &*p;
  cout << *r;
}