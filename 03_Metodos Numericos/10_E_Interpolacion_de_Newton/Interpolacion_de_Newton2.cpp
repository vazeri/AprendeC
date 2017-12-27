#include <winbgim.h>
#include <iostream>
#include<stdio.h>   
#include<math.h>
#include "datos.h"
using namespace std;
// VAZQUEZ GONZALEZ ERICK
void waitForLeftMouseClick();

int main()
{
    //Se recomienda usar un maximo de 4 diferencias debido al tamaño de la ventana
    float H,x[10],y[15][15]; //Reserva espacio en memoria
    int n,i,j;
    LogoEsime();
    cout<<("");
    Fecha(); //Libreria Propia, Agrega Dia Mes y Anio
    Datos("           INTERPOLACION DE NEWTON",10,10);
    cout<<"Entre el Numero de PARES (X,Y) de Datos : ";
    cin>>n;
    
    for(i = 0;i<n;i++){
            cout<<" X"<<i<<" Y"<<i<<endl;; 
            scanf("%f %f",&x[i],&y[i][0]); //ordena los valores en X y Y
    }
    
    //Tabla de diferencias hacia adelante
    for(j=1;j<n;j++)
        for(i=0;i<(n-j);i++)
            y[i][j] = y[i+1][j-1] - y[i][j-1];
    
    cout<<"\n***********Tabla de diferencias hacia adelante ***********\n"<<endl;
    //printf ("%c",127);
    printf ("i\tXi\t%cYi1\t%cYi2\t%cYi3\t%cYi4\t%cYi5\t%cYi6\t%cYi7",127,127,127,127,127,127,127);
    
    cout<<"\n------------------------------------------------------------------------------"<<endl;
    for(i=0;i<n;i++)
    {
        printf("%d\t%.3f",i,x[i]);        //%d = No entero %f, flotante 
        for(j=0;j<(n-i);j++)
            printf("\t%.4f",y[i][j]);
        cout<<"\n";
    }
    
//Tabla dferencias hacia atras
    for(j=1;j<n;j++)
    //para j = 0 se toma como inicial asi que tomamos j=1
        for(i=n-1;i>(j-1);i--)
        y[i][j] = y[i][j-1] - y[i-1][j-1];
    
    cout<<"\n***********Tabla de diferencias hacia atras ***********\n\n";
    printf ("i\tXi\t%cYi1\t%cYi2\t%cYi3\t%cYi4\t%cYi5\t%cYi6\t%cYi7",127,127,127,127,127,127,127);
    cout<<"\n------------------------------------------------------------------------------"<<endl;
    
    for(i=0;i<n;i++) //Invierte e Imprime los Resultados
    {//AQUI ESTA EL ERROR
        cout<<i;
        for(j=0;j<=i;j++)
        //printf("%d\t%.3f",i,y[i][j]);
printf("\t%.3f",y[i][j]);
        cout<<"\n";
    }
    
    H=x[1]-x[0];
    cout<<"\nEl valor de H es de: "<<H<<endl; //
     
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

