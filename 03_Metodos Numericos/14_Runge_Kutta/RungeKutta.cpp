#include <iostream>
#include <iomanip>
#include "datos.h"
using namespace std;
//VAZQUEZ GONZALEZ ERICK
//Definiendo Constantes
#define X0 0 
#define Y0 0
#define H 0.2
#define N 5
double f(double x, double y);
double runge(double x, double y);


int main(double x, double y)
{

LogoEsime();
cout<<""<<endl;
Fecha(); //Libreria Propia, Agrega Dia Mes y Anio
Datos("\t    METODO DE RUNGE KUTTA",10,10); //Libreria datos Titulo, No de Practica y Programa

cout<<" "
<<setw(12)<<"x"<<setw(12)<<"\ty"
<<"\n"
<<"\t------------------------------"
<<"\n";
y=Y0;
for(int i=0;i<=5;i++)
{
x=X0+(i*H);
y=runge(x,y);
cout<<left<<setw(6)<<i<<"|"
<<setprecision(4)<<left<<setw(8)<<"\t"<<x
<<setprecision(4)<<left<<setw(8)<<"\t"<<y;
cout<<"\n";
}
cout<<"\n";

system("pause");
return 0;
}

double runge(double x, double y)
{
double K1 = (H * f(x,y));
double K2 = (H * f((x + 1 / 2 * H), (y + 1 / 2 * K1)));
double K3 = (H * f((x + 1 / 2 * H), (y + 1 / 2 * K2)));
double K4 = (H * f((x + H), (y + K3)));
double runge = (y + ((K1 + 2 * K2 + 2 * K3 + K4)/6));return runge;
}

double f(double x, double y)
{
double f = x+y;
return f;
}
