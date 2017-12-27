#include <winbgim.h>
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <dos.h>
#include <math.h>
#include "datos.h"
using namespace std;

//VAZQUEZ GONZALEZ ERICK
int main()
{
int i,N;  
float x[50],fx[50],xy[50],x2[50],Newy[50]; //Reserva espacio en memoria
float sx,sy=0,sxy=0,sx2, M, B,xm,ym;
  
LogoEsime();
cout<<""<<endl;
Fecha(); //Libreria Propia, Agrega Dia Mes y Anio
Datos("\t      MINIMOS CUADRADOS",09,09); //Libreria datos Titulo, No de Practica y Programa
//Interpolacion Binomial
cout<<"\nIntrodusca el No de Eventos Pares (X,Y): ";cin>>N;
cout<<"\nIntrodusca los datos que se piden"<<endl;

for (i=0;i<N;i++) //Guarda los puntos iniciales
    {
    cout<<"\n";
    cout<<"   X"<<i+1<<":";
    cin>>x[i];
    cout<<"   Y"<<i+1<<":";
    cin>>fx[i];
    }

for (i=0;i<N;i++)
    {
    xy[i]=x[i]*fx[i];
    x2[i]=x[i]*x[i];
    sx+=x[i];       //Suma de X
    sy+=fx[i];      //Suma de Y
        
        sxy+=xy[i]; //Suma de X*Y 
        sx2+=x2[i]; //Suma de X^2
    }
    xm=sx/N;
    ym=sy/N;
  
    cout<<"N\tX\t\tY\t\tXY\t\tX^2"<<endl;
    cout<<"------------------------------------------------------------------"<<endl;
    for (i=0;i<N;i++)
    cout<<i<<"\t"<<x[i]<<"\t\t"<<fx[i]<<"\t\t"<<xy[i]<<"\t\t"<<x2[i]<<"\t\t"<<endl;
    cout<<"-------------------------------------------------------------------"<<endl;
    
    cout<<"\t"<<sx<<"\t\t"<<sy<<"\t\t"<<sxy<<"\t\t"<<sx2<<endl;
    
    M=((N*sxy)-(sx*sy))/((N*sx2)-(sx*sx));

    B=((sy)-(M*sx))/(N);
    cout<<"\n\n";     
    
    cout<<" El valor de la pendiente es : "<<M<<endl;
    cout<<" El valor de B es : "<<B<<endl<<endl;    
    
    cout<<"El Nuevo valor de Y es: "<<"y = "<<M<<"x + ( "<<B<<" )"<<endl;
    
    cout<<"\n Evaluando y en los valores de X \n " <<endl;
    
    
    cout<<"X \t Y(x) \n "<<endl;
   
    for (i=0;i<N;i++)
    {
    Newy[i]=B+(M*x[i]);
    cout<<x[i]<<"\t"<<Newy[i]<<endl;
    }
     cout<<"\n\n";
    
initwindow(500,500);       
//Marco   
setfillstyle(1,WHITE);
  setcolor(DARKGRAY); //Gris EJES X Y
line(0,getmaxy()/2,getmaxx(),getmaxy()/2);

line(getmaxx()/2,0,getmaxx()/2,getmaxy());

  setcolor(WHITE); 
//Graficando con circulos
 for (i=0;i<N;i++)
    {
   circle((getmaxx()/2)+x[i]*10,(getmaxy()/2)-Newy[i]*10,3); //Circulo X Y y Radio
   delay(200);
   if(i==N-1)
   {
         line((getmaxx()/2),(getmaxy()/2),(getmaxx()/2)+x[i]*10,(getmaxy()/2)-Newy[i]*10);    
   }
}
//Linea
//line((getmaxx()/2)+x[i], (getmaxy()/2), x[i],Newy[i]);


 //Grafica la recta x1 y1 x2 y2


    while(!kbhit());     // wait for user to press a key
    //waitForLeftMouseClick(); // use one or the other of these--not both
    closegraph();        //close graphics window
	return 0;

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



