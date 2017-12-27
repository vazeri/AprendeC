#include<iostream>
#include<cmath>
using namespace std;

int N,D,Opc;
double F,x,a,b,auxa,auxb,I,Func;
//Varables universales(por el momento)

void Biseccion();
void PuntoMedio();
void Div_a();
void Div_b();
void ReglaFalsa();
void PuntoMedioRF();
double f_a(double &A);
double f_b(double &B);
void Div_aRF();
void Div_bRF();

int main()
{
    cout<<"METODOS PARA ENCONTRAR RAICES"<<endl<<endl;
    
    cout<<"Por cual metodo quisiera encontrar la raices?"<<endl<<endl;
    cout<<"1.- Biseccion"<<endl;
    cout<<"2.- Regla Falsa   ";
    cin>>Opc; cout<<endl;
    if(Opc==1)
    { 
              Biseccion();
    }
    if(Opc==2)
    {
              ReglaFalsa();
    }  
    
    system("pause");
    return 1;
}
void Biseccion()
{
    cout<<"Ingrese el intervalo de la funcion."<<endl;
    cout<<"Ingrese el valor de (a): "; cin>>a; 
    cout<<"Ingrese el valor de (b): "; cin>>b; cout<<endl;
    PuntoMedio();
    
}
void PuntoMedio()
{
     x=(a+b)/2;
     F=(pow(x,2))-2;
     cout<<"\n Punto Medio"<<endl;
     cout<<"Valor de (a)= "<<a<<endl;
     cout<<"Valor de (b)= "<<b<<endl;
     cout<<"Valor de (x)= "<<x<<endl<<endl;
     
     if(F==0)
     {
            
            cout<<"Raiz Encontrada!! "<<endl;
            cout<<"El valor de la funcion evaluada en X= "<<x<<" es: f(X)= "<<F<<endl;
            cout<<"La Raiz es X = "<<x<<endl;
     }
     else
     {
         cout<<"Raiz no encontrada!! "<<endl;
         cout<<"El valor de la funcion evaluada en X= "<<x<<" es: f(X)= "<<F<<endl<<endl;
         cout<<"Cuantas iteraciones quiere hacer?"<<endl;
         cout<<"Ingrese el numero de iteraciones a realizar: "; cin>>I; cout<<endl;
         cout<<"Por cual lado desea empezar a dividir el intervalo? :"<<endl;
         cout<<"1.- Lado (a)"<<endl;
         cout<<"2.- Lado (b)  ";
         cin>>D; cout<<endl;
         if(D==1)
         {
                 for(int i=0;i<I;i++)
                 {
                         Div_a();
                 }
                 cout<<"Iteracion "<<I<<endl;
                 cout<<"Valor de (a)= "<<a<<endl;
                 cout<<"Valor de (b)= "<<b<<endl;
                 cout<<"Valor de (x)= "<<x<<endl;
                 cout<<"\n El valor de la funcion evaluada en "<<x<<" es: f(X)= "<<F<<endl<<endl;
         }
         if(D==2)
         {
                 for(int j=0;j<I;j++)
                 {
                         Div_b();
                 }
                 cout<<"Iteracion "<<I<<endl;
                 cout<<"Valor de (a)= "<<a<<endl;
                 cout<<"Valor de (b)= "<<b<<endl;
                 cout<<"Valor de (x)= "<<x<<endl;
                 cout<<"\n El valor de la funcion evaluada en "<<x<<" es: f(X)= "<<F<<endl<<endl;
         }
         
     }
     
}
void Div_a()
{
    a=(a+b)/2;
    x=(a+b)/2;
    F=(pow(x,2))-2;
    
}
void Div_b()
{
    b=(a+b)/2;
    x=(a+b)/2;
    F=(pow(x,2))-2;
}
void ReglaFalsa()
{
    cout<<"Ingrese el intervalo de la funcion."<<endl;
    cout<<"Ingrese el valor de (a): ";cin>>a;
    cout<<"Ingrese el valor de (b): ";cin>>b; cout<<endl;
    PuntoMedioRF();
}
void PuntoMedioRF()
{
     x=(b-a)/((f_b(b))-(f_a(a)));
     x=x*(f_a(a));
     x=a-x;
     F=(pow(x,2))-2;
     cout<<"\n Punto Medio"<<endl;
     cout<<"Valor de (a)= "<<a<<endl;
     cout<<"Valor de (b)= "<<b<<endl;
     cout<<"Valor de (x)= "<<x<<endl<<endl;
     
     if(F==0)
     {
            
            cout<<"Raiz Encontrada!! "<<endl;
            cout<<"El valor de la funcion evaluada en X= "<<x<<" es: f(X)= "<<F<<endl;
            cout<<"La Raiz es X = "<<x<<endl;
     }
     else
     {
         cout<<"Raiz no encontrada!! "<<endl;
         cout<<"El valor de la funcion evaluada en X= "<<x<<" es: f(X)= "<<F<<endl<<endl;
         cout<<"Cuantas iteraciones quiere hacer?"<<endl;
         cout<<"Ingrese el numero de iteraciones a realizar: "; cin>>I; cout<<endl;
         cout<<"Por cual lado desea empezar a dividir el intervalo? :"<<endl;
         cout<<"1.- Lado (a)"<<endl;
         cout<<"2.- Lado (b)  ";
         cin>>D; cout<<endl;
         if(D==1)
         {
                 for(int i=0;i<I;i++)
                 {
                         Div_aRF();
                 }
                 cout<<"Iteracion "<<I<<endl;
                 cout<<"Valor de (a)= "<<a<<endl;
                 cout<<"Valor de (b)= "<<b<<endl;
                 cout<<"Valor de (x)= "<<x<<endl;
                 cout<<"\n El valor de la funcion evaluada en "<<x<<" es: f(X)= "<<F<<endl;
         }
         if(D==2)
         {
                 for(int j=0;j<I;j++)
                 {
                         Div_bRF();
                 }
                 cout<<"Iteracion "<<I<<endl;
                 cout<<"Valor de (a)= "<<a<<endl;
                 cout<<"Valor de (b)= "<<b<<endl;
                 cout<<"Valor de (x)= "<<x<<endl;
                 cout<<"\n El valor de la funcion evaluada en "<<x<<" es: f(X)= "<<F<<endl;
         }
         
     }
}
double f_a(double &A)
{      
       Func=(pow(A,2)) - 2;
       
       return Func;
}
double f_b(double &B)
{      
       Func=(pow(B,2)) - 2;
       
       return Func;
}
void Div_aRF()
{
     auxa=a;
     a=(b-auxa)/((f_b(b))-(f_a(auxa)));
     a=a*(f_a(auxa));
     a=auxa-a;
     ///////////////////////
     x=(b-a)/(f_b(b)-f_a(a));
     x=x*(f_a(a));
     x=a-x;
     
     F=(pow(x,2))-2;
}
void Div_bRF()
{
     auxb=b;
     b=(auxb-a)/(f_b(auxb)-f_a(a));
     b=b*(f_a(a));
     b=a-b;
     ///////////////////////
     x=(b-a)/(f_b(b)-f_a(a));
     x=x*(f_a(a));
     x=a-x;
     
     F=(pow(x,2))-2;
}
