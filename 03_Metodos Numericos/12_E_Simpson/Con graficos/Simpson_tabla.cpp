#include <winbgim.h>
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <dos.h>
#include <math.h>
#include "datos.h"
#include <iomanip>
void waitForLeftMouseClick();
//ERICK VAZQUEZ GONZALEZ
using namespace std;

int main()
{
int N,i;
double a,b,f,xi,h;
float suma;
LogoEsime();
cout<<""<<endl;
Fecha(); //Libreria Propia, Agrega Dia Mes y Anio
Datos("\t      METODO DE SIMPSON",10,10); //Libreria datos Titulo, No de Practica y Programa

cout<<"La Funcion a integrar es  F(X)= (x)/sqrt(1+X^4) \n"<<endl;
cout<<"Ingrese el Limite Inferior (A) de la Integral definida: ";
cin>>a;cout<<"Ingrese el Limite Superior (B) de la Integral definida: ";
cin>>b;cout<<"Ingrese un Numero par de Iteraciones (N) : ";
cin>>N;

h=(b-a)/N;
suma=0;i=0;

cout<<"\ni"<<"\t\tXi"<<"\t\tF"<<"\t\tsuma"<<endl;
cout<<"----------------------------------------------------"<<endl;

for(i=0;i<=N;i++)
{ 
     {
if (i%2!=0)
     f=4*xi/sqrt(1+xi*xi*xi*xi);
else if (i%2==0)
     f=2*xi/sqrt(1+xi*xi*xi*xi);
else if(i==0)
     f=xi/sqrt(1+xi*xi*xi*xi);
else if(i==N)
     f=xi/sqrt(1+xi*xi*xi*xi);
     }
xi=a+i*h;

suma=suma+f;
cout << setprecision (5) <<i<<"\t\t"<<xi<<"\t\t"<<f<<"\t\t"<<suma<<"\t"<<endl;


cout<<"\n los valores son los siguientes : "<<endl;
cout<<"a= "<<a<<endl;
cout<<"b= "<<b<<endl;
cout<<"h= "<<h<<endl<<endl;
cout<<"La suma de iteraciones = "<<suma<<endl;
cout<<"La integral es = "<<suma*h/3<<endl;    
    
initwindow(500,500);       
//Marco   

setfillstyle(1,WHITE);
  setcolor(DARKGRAY); //Gris EJES X Y
line(0,getmaxy()/2,getmaxx(),getmaxy()/2);

line(getmaxx()/2,0,getmaxx()/2,getmaxy());
//Graficando con circulos
setcolor(WHITE); 

suma=0;i=0;

 for (i=0;i<N;i++)
    {
                                    
if (i%2!=0)
     f=4*xi/sqrt(1+xi*xi*xi*xi);
else if (i%2==0)
     f=2*xi/sqrt(1+xi*xi*xi*xi);
else if(i==0)
     f=xi/sqrt(1+xi*xi*xi*xi);
else if(i==N)
     f=xi/sqrt(1+xi*xi*xi*xi);
     
xi=a+i*h;

suma=suma+f;
//circle((getmaxx()/2)+xi*75,(getmaxy()/2)-suma+f*10,3); //Circulo X Y y Radio
circle((getmaxx()/2)+xi*75,(getmaxy()/2)-suma+f*10,3); //Circulo X Y y Radio
}

delay(10);
}
   while(!kbhit());     // wait for user to press a key
    //waitForLeftMouseClick(); // use one or the other of these--not both
   closegraph();        //close graphics window
}

void waitForLeftMouseClick()
{
    clearmouseclick(WM_LBUTTONDOWN);
    const int DELAY = 50; // Milliseconds of delay between checks
    int x, y;
    while (!ismouseclick(WM_LBUTTONDOWN))
        delay(DELAY);
    getmouseclick(WM_LBUTTONDOWN, x, y);
}


