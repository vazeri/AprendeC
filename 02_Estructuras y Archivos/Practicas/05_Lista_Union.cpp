#include <string>
#include <iostream>
using namespace std;

struct x{
       int dato;
       struct x *siguiente;
       }Nodo;
       
int main()		//Inicia Main
{
  x *inicio,*aux;
  x *primero, *aux2;
  x *s,*aux3;
  
  int i,N;
   inicio=new x;
   cout<<" Programa que une 2 listas";
   cout<<" Cuantos Datos por lista?: ";cin>>N;
  
   cout<<"\n------------------ Lista UNO"<<endl;						//Inicia Lista uno
   cout<<"Primer Dato: ";cin>>inicio->dato;
	  aux=inicio;
     aux->siguiente=NULL;

for(i=1;i<N;i++)    // Pide N Datos
{
  aux->siguiente=new x;
  aux=aux->siguiente;
     cout<<"Siguiente Dato: ";
     cin>>aux->dato;
  aux->siguiente=NULL;                    
}

  cout<<"\n  Elementos en la lista UNO.: "; 
  aux=inicio;						//Manda aux al inicio
     
for(;aux!=NULL;)					//Imprime datos 1x1
{
 cout<<" "<<aux->dato;
 aux=aux->siguiente;                
}

//------------------------------------------

   primero=new x;
  
   cout<<"\n\n------------------ Lista DOS"<<endl;//Inicia Lista uno
   cout<<"Primer Dato: ";cin>>primero->dato;
	  aux2=primero;
     aux2->siguiente=NULL;
     
for(i=1;i<N;i++)    // Pide N Datos
{
  aux2->siguiente=new x;
  aux2=aux2->siguiente;
     cout<<"Siguiente Dato: ";
     cin>>aux2->dato;
  aux2->siguiente=NULL;                    
}

  cout<<"\n  Elementos en la lista DOS.: "; 
  aux2=primero;						//Manda aux al inicio
   
for(;aux2!=NULL;)					//Imprime datos 1x1
{
 cout<<" "<<aux2->dato;
 aux2=aux2->siguiente;               
}
  cout<<"\n\n";

//--------------------------------

aux=inicio;
aux2=primero;
  cout<<"\n ----------------- Lista TRES.: "; 

while(aux!=NULL && aux2!=NULL)
{
   cout<<" "<<aux->dato;
   aux=aux->siguiente;
   cout<<" "<<aux2->dato; 
   aux2=aux2->siguiente;
   }
   
cout<<" "<<endl;
system("PAUSE");
}
