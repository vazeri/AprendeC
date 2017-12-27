//Con un arreglo de numeros enteros hacer una funcion recursiva para sumar sus localidades 
#include <string>
#include <iostream>
#include <exception>
using namespace std;

int sumaValor(int X1[],int N);

int main()
{   
    int   X,N;
    int X1[6]={1,2,3,4,5,6};
    //cout<<"Introdusca el valor de N "<<endl;
    //cin>>N;
    X=sumaValor(X1,6);
    cout<<"Resultado sumaValor: "<<X<<" "<<endl;
    system("Pause");
    }

int sumaValor(int X1[],int N)
{
int R;
    if(N=0)
        R=0;
    else
        R=X1[N]+sumaValor(X1,N-1);
return R;
    }
    
