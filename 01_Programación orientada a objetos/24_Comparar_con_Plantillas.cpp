#include <iostream>
using namespace std;

template <class T> //T tipo de dato
T Comparar(T Num1,T Num2)
{
         if(Num1 > Num2)
         return Num1;
         else
         return Num2;
}

int main()
{
    int n1, n2;
    cout<<"Captura Numero 1: ";
    cin>>n1;
    cout<<"captura Numero 2: ";
    cin>>n2;
    
    cout<<"El mayor es: " <<Comparar<int>(n1,n2)<<endl;
    
    system("pause");
    return 0;
}
