#include <iostream>
using namespace std;

template <class T> 
class cComparaPar{
protected:
      T Num1, Num2;
public:
       cComparaPar();
        //Constructor
       void Capturar();
       T Comparar();
       };
 
 
template <class T> 
T cComparaPar<T>::cComparaPar()
{
 Num1=0;
 Num2=0;
}

template <class T> 
void cComparaPar<T>::Capturar()
{
         cout<<"Captura Numero 1: ";
         cin>>Num1;
         cout<<"captura Numero 2: ";
         cin>>Num2;
}

template <class T> 
T cComparaPar<T>::Comparar()
{
         if(Num1 > Num2)
         return Num1;
         else
         return Num2;
}    
     

      
     
int main()
{
 cComparaPar <double> Par;         //Objeto
 Par.Capturar();
     cout<<"El mayor es: " <<Par.Comparar()<<endl;
    
    system("pause");
    return 0;
}


