//Imprime 2 listaS de N numeros ingresados por el usuario, 1,2,3,4,5,6,7,8
#include <string>
#include <iostream>
using namespace std;

struct x{
       int dato;
       struct x *siguiente;
       }Nodo;
       
int main()
{
  x *inicio,*aux;
  
  int i,N;
  inicio=new x;
  
  cout<<" Cuantos Datos por lista? ";cin>>N;
   cout<<" Capturando Lista "<<endl;
  cout<<"Primer Dato: ";cin>>inicio->dato;
  aux=inicio;
  aux->siguiente=NULL;

for(i=1;i<N;i++)    
{
  aux->siguiente=new x;
  aux=aux->siguiente;
  cout<<"Siguiente Dato: ";
  cin>>aux->dato;aux->siguiente=NULL;                    
}
  cout<<"\n Elementos en lista : ";
  aux=inicio;

for(;aux!=NULL;)
{
   cout<<aux->dato<<" ";
   aux=aux->siguiente;                
   }
system("PAUSE");
}
