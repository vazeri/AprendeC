#include <iostream>
#include <cmath>
#include <string>
#include "peje.h"
using namespace std;

struct Circuito
         {
double Voltaje;
double Resistencia;
double Inductancia;
double Capacitancia;
double Frecuencia;
          };
          
void Leer(Circuito *AptC);
void Imprimir(const Circuito *AptC);
double CalcularI(const Circuito *AptC);

int main(void)
          {
          system("cls");
          Circuito *AptC;
          AptC=new Circuito;
          Leer(AptC);
          Imprimir(AptC);
          delete AptC;
          system("pause");

return 0;
           }

void Leer(Circuito *AptC)
           {
           cout<<"Voltaje:";
           cin>>(*AptC).Voltaje;
           cout<<"Resistencia:";
           cin>>(*AptC).Resistencia;
           cout<<"Inductancia:";
           cin>>(*AptC).Inductancia;
           cout<<"Capacitancia:";
           cin>>(*AptC).Capacitancia;
           cout<<"Frecuencia:";
           cin>>(*AptC).Frecuencia;
           cout<<endl;
            } 

void Imprimir(const Circuito *AptC)
            {
            cout<<"La intensidad de corriente es:  "<<CalcularI(AptC);
             } 

double CalcularI(const Circuito *AptC)
            { 
double Corriente;

             Corriente=1/(2.0*3.1416*(*AptC).Frecuencia*(*AptC).Capacitancia); 

             Corriente=2.0*3.1416*(*AptC).Frecuencia*(*AptC).Inductancia - Corriente;

             Corriente=pow ((*AptC).Resistencia,2) + pow (Corriente,2);

             Corriente=sqrt(Corriente);

             Corriente=(*AptC).Voltaje/Corriente;
return Corriente;
             } 
