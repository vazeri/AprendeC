#include <iostream>
#include <math.h>
using namespace std;

struct Resistencias{
double R1;
double R2;
double R3;
double R4;
};       

int CapturaNum(string Msg);
void CapturaDatos(Resistencias *pR);
int CapturaCad(string Msg);
double CalResistencia(Resistencias *pR);
void Imprimir(double D);

main()
{
int i,nR; double R; char opc;

do
  {
  
  Resistencias *pR; //crea el apuntador en Resistencias
  //Memoria Dinamica

  cout<<" "<<endl;
  if(nR<0)
        {cout<<"Error al crear memoria dinamica"<<endl;}
        else{
          pR=new Resistencias[nR]; 
           CapturaDatos(pR);}
     
     R=CalResistencia(pR); 
     Imprimir(R);     

 cout<<"Desea Repetir el programa (Si/No)"<<endl;
 cin>>opc; }
 while(opc=='S' or opc=='s');
 
      }

int CapturaNum(string Msg)
{
     int X;
     fflush(stdin);
     cout<<Msg;
     cin>>X;
     return X;
       }

void CapturaDatos(Resistencias *pR)
{
     pR->R1=CapturaCad("Introdusca la Resistencia 1: ");
     pR->R2=CapturaCad("Introdusca la Resistencia 2: ");
     pR->R3=CapturaCad("Introdusca la Resistencia 3: ");
     pR->R4=CapturaCad("Introdusca la Resistencia 4: ");
       }

int CapturaCad(string Msg)
{
    int Numero;
    fflush(stdin);
    cout<<Msg;
    cin>>Numero; //Cadenas de texto
    return Numero;
}
      
double CalResistencia(Resistencias *pR)
{
 double R;

 R=(1/((1/(pR->R1))+(1/(pR->R2))+(1/(pR->R3))+(1/(pR->R4))));
 return R;
       }
       
void Imprimir(double R)
{
     cout<<" "<<endl;
cout<<"La resistencia es de: "<<R<<endl;
cout<<" "<<endl;
     }
