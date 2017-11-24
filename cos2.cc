//Programa
//Autor: Daniela Canul Garcia
//Fecha: 22 de Noviembre del 2017
#include <iostream>
#include <math.h>
using namespace std;
int main(){
float x=0.15;
float h=0.0001;
float cos1=cos(x + h);
float cos2=cos(x + 2*h);

cout<< "cos(0.15 + h)= "<<cos1<<endl;
cout<< "cos(0.15 + 2h)= "<<cos2<<endl;
cout<< "Con h= "<<h<<endl;
return 0;
}
