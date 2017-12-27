#include <iostream>
#include <cmath>
#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
int N,i;
double a,b,suma,f,xi,h;
cout<<" *********METODO SIMPSON 1/3************"<<endl;
cout<<"LA FUNCION A INTEGRAR ES F(X)= (X)/SQRT(1+X^4) "<<endl;
cout<<"Ingrese el Limite Inferior de la Integral definida: ";

cin>>a;cout<<"Ingrese el Limite Superior de la Integral definida: ";
cin>>b;cout<<"Ingrese un Numero par de Iteraciones : ";
cin>>N;

h=(b-a)/N;
suma=0;i=0;

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
suma=suma+f;}

cout<<"los valores son los siguientes : "<<endl;
cout<<"a= "<<a<<endl;
cout<<"b= "<<b<<endl;
cout<<"h= "<<h<<endl<<endl;
cout<<"la suma es = "<<suma<<endl;
cout<<"la integral es = "<<suma*h/3<<endl;
system ("PAUSE");
return(0);
}
