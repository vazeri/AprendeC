#include <iostream>
#include "datos.h"
using namespace std;
//Erick Vazquez Gonzalez 4CV4
 
float m[10][10];
float inv[10][10];
void imprime(float M[10][10], int ly, int lx);
void ceros(int X, int Y, int lx, int ly);
void pivote(int X, int Y, int lx);
bool validar(float val); //Verifica que se introdusca un numero decente
void uno(int X, int Y, int lx);


int main()
{
    
    LogoEsime();
    cout<<""<<endl;
    Fecha(); //Libreria Propia, Agrega Dia Mes y Anio
    Datos("               MATRIZ INVERSA",8,9);
    int x,y,i,j;
    float R;
    bool continuar=false;    
    do{
    cout<<"El sistema sera de XnX, introdusca X: ";cin>>y;//No puede ser menor a 1
    continuar=validar(y);
      }while (!continuar);
    
    x=y+1;
    continuar=false;
    for (i=0;i<y;i++) //Ingresa las Variables
    {cout<<"\t ECUACION "<<i+1<<endl;
    
        for (j=0;j<x-1;j++)
        {
            do{
            cout<<"a["<<i+1<<"]["<<j+1<<"] :";
            cin>>m[i][j];
            continuar=validar(m[i][j]); //Valida la funcion
            }
            while (!continuar);
        }
        do{
        cout<<"Variable independiente ["<<i+1<<"] :";
        cin>>m[i][j];
        
        continuar=validar(m[i][j]);
        }while (!continuar);
    }
   
    for (i=0;i<y;i++) //Genera la funcion inversa
    {
        for (j=0;j<x-1;j++)
        {
            if(i==j)
            inv[i][j]=1;
            else
            inv[i][j]=0;
        }
    }
            
    imprime(m,y,x-1);
    i=0;j=0;
    
    
    do
    {        
        if (m[i][j]==0)
        pivote(j,i,x);
        else
        {i++;j++;}  
    }while(i!=y);
    
    imprime(m,y,x-1);
    i=0;j=0;

    for (i=0;i<y;i++) //Genera las operacione paso por paso 
    {
        uno(j,i,x);
        imprime(m,y,x-1);
        ceros(j,i,x,y);
        imprime(m,y,x-1);
        j++;
    }
    cout<<"\n Las Variables Incognitas son :";
    for (i=0;i<y;i++)
    {   
        R=0;
        for(j=0;j<x;j++)
        {
           R+=inv[i][j]*m[j][x-1];
        }
        cout<<"\nX["<<i+1<<"]="<<R;
        j++;
    }
    cout<<"\n\n";
    system("pause");
}

bool validar(float val)
{
    if(val>1000||val<-1000)
    {
    fflush( stdin );
    cin.clear();
    cout <<val<< "ERROR Introdusca un numero entre -1000 y 1000" << endl;
      return(false);
    }
    else
    {   
    return(true);
    }
}

void imprime(float M[10][10],int ly, int lx)
{
     int i,j;
     system("cls");
       LogoEsime();
    cout<<""<<endl;
    Fecha(); //Libreria Propia, Agrega Dia Mes y Anio
    Datos("               MATRIZ INVERSA",8,9);

    for (i=0;i<ly;i++)
    {
        for (j=0;j<lx;j++)
        {
            cout<<"        "<<m[i][j];
        }
//        cout<<"            |";
          cout<<"\t|";
        for (j=0;j<lx;j++)
        {
            cout<<"        "<<inv[i][j];
        }
        cout<<"\n";
    }
    system("pause");
}
    
void uno(int X, int Y, int lx)
{
     int i;
     float t;
     t=m[X][Y];
     for (i=0;i<lx-1;i++)
     {
         m[X][i]=m[X][i]/t;
         inv[X][i]=inv[X][i]/t;
     }
}

void ceros(int X, int Y, int lx, int ly)
{
     int i,j;
     float t;
     for (i=0;i<ly;i++)
     {
         t=-1*m[i][X];
         if (i!=Y)
         {
            for(j=0;j<lx-1;j++)
            {
            inv[i][j]=t*inv[Y][j]+inv[i][j];
            m[i][j]=t*m[Y][j]+m[i][j];
            }
         }
     }
}

void pivote(int X, int Y, int lx)
{
     int j;
     float t[2][10];
     for (j=0;j<lx;j++)
     {
         t[0][j]=m[Y][j];
         if((Y+1)>9)
         t[1][j]=m[0][j];
         else
         t[1][j]=m[Y+1][j];
     }
     for (j=0;j<lx;j++)
     {
         m[Y][j]=t[1][j];
         if((Y+1)>9)
         m[0][j]=t[0][j];
         else
         m[Y+1][j]=t[0][j];
     }             
     system("pause");
}

