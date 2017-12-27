#ifndef 3erSem
#define 3erSem 
#include <stdio>
#include <time>
#include <iostream>
#include <string>
#include <cstdlib> //system("color a"); 
 #define pi 3.1416


void LogoEsime()
{
   cout<<"                         ____ _____ _____  _    _ ____   "<<endl;
cout<<"                        / __// ___|\\_    \\| \\  / || __\\  "<<endl;
cout<<"                       / /_  | \\__   | |\\/|  \\/  || |__  "<<endl;
cout<<"                      / __/  \\___ \\  | |  |      || ___\\  "<<endl;
cout<<"                     / /___  ___/ | _| |__| |\\/| || |___   "<<endl;
cout<<"                    /_____/ |____/ /_____/|_/  \\_||_____\\  "<<endl;

}

void Datos(string nombre, int Practica)
{
     cout<<"         Vazquez Gonzalez Erick    "<<"   Grupo: 3CV1"<<"   Pract: "<<Practica<<"\n"<<endl;
     cout<<"\t"<<nombre<<endl;
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



enum mes{Enero=1, Febrero, Marzo, Abril, Mayo, Junio, Julio, Agosto, Septiembre, Octubre, Noviembre, Diciembre};

string ConvierteMes(int M)
{
string st;
switch(M){
          case 1: 
               st=" Ene ";
               break;
          case 2:
               st=" Feb ";
               break;
          case 3: 
               st=" Mar ";
               break;
          case 4:
               st=" Abr ";
               break;
          case 5: 
               st=" May ";
               break;
          case 6:
               st=" Jun ";
               break;
          case 7: 
               st=" Jul ";
               break;
          case 8:
               st=" Agosto ";
               break;
          case 9: 
               st=" Sep ";
               break;
          case 10:
               st=" Oct ";
               break;
          case 11: 
               st=" Nov ";
               break;
          case 12:
               st=" Dic ";
          break;
          }
return st;
}

void Fecha()
{
	struct tm *tiempo;
	int D, M, A;
	string X;

	time_t fecha_sistema;
	time(&fecha_sistema);
	tiempo=localtime(&fecha_sistema);
	
	A=tiempo->tm_year + 1900;
	M=tiempo->tm_mon +1;
    D=tiempo->tm_mday;
	X=ConvierteMes(M); 
cout<<" Fecha: "<<D<<X<<A;         
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
     
