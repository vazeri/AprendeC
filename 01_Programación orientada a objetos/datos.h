#ifndef libreria
#define libreria 
#include<stdio.h>
#include<time.h>
#include<iostream>
#include<string>
using namespace std;

void LogoEsime()
{
 cout<<"                    / __// ___|\\_    \\| \\  / || __\\  "<<endl;
cout<<"                   / /_  | \\__   | |\\/|  \\/  || |__  "<<endl;
cout<<"                  / __/  \\___ \\  | |  |      || ___\\  "<<endl;
cout<<"                 / /___  ___/ | _| |__| |\\/  || |___   "<<endl;
cout<<"                /_____/ |____/ /_____/|_/  \\_||_____\\  "<<endl;
}

void Datos(string nombre, int Practica, int Programa)
{
     cout<<"        Vazquez Gonzalez Erick - 2CV7   "<<"   Pract: "<<Programa<<"   Prog: "<<Practica<<"\n"<<endl;
     cout<<"\t\t"<<nombre<<"\n"<<endl;
     }
     
string capturacad(string msg)
{
       string texto;
       fflush(stdin);
       cout<< msg;
       getline(cin,texto);
       return texto;
}
float capturanum(string msg)
{
      float numero;
      cout<<msg;
      cin>>numero;
      return numero;
}            



enum mes{Enero=01, Febrero, Marzo, Abril, Mayo, Junio, Julio, Agosto, Septiembre, Octubre, Noviembre, Diciembre};

void Fecha()
{
	struct tm *tiempo;
	int dia;
	int mes;
	int anio;

	time_t fecha_sistema;
	time(&fecha_sistema);
	tiempo=localtime(&fecha_sistema);
	
	anio=tiempo->tm_year + 1900;
	mes=tiempo->tm_mon + 1;
	dia=tiempo->tm_mday;

	printf("Fecha: %d% d %d",dia,mes,anio);

}

template <class T>
T Captura(string Msg)
{
   T Valor;
   cout<<Msg<<":";
   cin>>Valor;
   return Valor;
}

     #endif 
     
