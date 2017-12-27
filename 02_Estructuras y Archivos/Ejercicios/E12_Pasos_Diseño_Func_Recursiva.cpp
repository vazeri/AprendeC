//Diseñar proceso recursivo para encontrar numeros de la serie de fibonacci
//0,1,1,2,3,5,8,13,21,34,55....

#include <string>
#include <iostream>
#include <exception>
using namespace std;
long Fubonaci(int N);

int main()
{   
    int N,X;
    cout<<"Introdusca el valor de N "<<endl;
    cin>>N;
    X=Fubonaci(N);
    cout<<"Serie de fubonaci: "<<X<<" "<<endl;
    system("Pause");
    }

long Fubonaci(int N)
{
 long R;
     if(N==0)
      R=0;
     else if(N==1)
      R=1;
     else
      R=(N-1)+(N-2);
 return R;
     }
     
     
