#include <stdio.h>
#include <iostream>
#include <cmath>
using namespace std;
int main() {
  double x1, x2, y1, y2, d;
  cout<< "Programa para calcular la distancia entre dos puntos"<<endl;
  cout<< "x1:";
  cin>>x1;
  cout<< "y1:";
  cin>>y1;
  cout<< "x2:";
  cin>>x2;
  cout<< "y2:";
  cin>>y2;
  d=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
  cout<<"La distancia entre los dos puntos es: "<<d<<endl;
  return 0;
}