#include<iostream>
#include<cmath>
#include<cstdlib>
#include "datos.h"
using namespace std;
//ERICK VAZQUEZ ONZALEZ

//dy/dx = y^3(1-x^2), approximating y(x)
int main() {

	double x=0,y=1,h,k,l;
	int i;
	
LogoEsime();
cout<<""<<endl;
Fecha(); //Libreria Propia, Agrega Dia Mes y Anio
Datos("\t  METODO DE EULER MEJORADO",13,13); //Libreria datos Titulo, No de Practica y Programa

	cout <<"Programa paara Resolver dy/dx = y^3(1-x^2)"<<endl;
	cout <<"\nIntrodusca el valor de X para Y(x): ";
	cin>>l;
	cout << "Introdusca el espacio: ";
	cin >> h;
	k=l/h; //Numero d epasos h divide entre 1
	cout<<"x_0="<<x<<'\n';
	cout<<"y_0="<<y<<'\n'<<'\n';

	for(i=1;i<=k;i++)
    {
    y=y+h*((pow(y,3.0))*(1-pow(x,2.0)));
		x=x+h;
		cout<<"x_"<<i<<"="<<x<<'\n';
		cout<<"y_"<<i<<"="<<y<<'\n'<<'\n';
		}
		system("pause");
return 0;

}
