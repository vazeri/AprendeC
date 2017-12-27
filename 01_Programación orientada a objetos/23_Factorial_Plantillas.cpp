#include <iostream>

using namespace std;

void imprimir(double factorial);

template <class T>
T Factorial(T n)
{
   T Fac=1;
   cout<<"Dame un Numero"<<endl;
   cin>>Fac;
   return Fac;
}
template <class T>
T calcular(T n)
{
  T signo,f;
       if(n==0)
                f=1;
       else if(n<0)       
       {
        signo=-1;
        n=n*signo;
        f=serie(n)*signo;     
            }
       else
       {
        f=serie(n);    
           }     
       return f;
}


template <class T>
T serie(T n)
{
int i;
T F=1;
for(i=int(n);i>=1;i--)
                 {
                 F*=i;
                 }     
        return F;          
       }


int main(void)
{
double n, factorial;
n=Factorial(n);
factorial=calcular(n);
imprimir(factorial);
return 0;
}





void imprimir(double factorial)
{
cout<<"El FACTORIAL ES:"<<factorial<<endl;
system("pause");        
     }
