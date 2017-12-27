//Programa que elimine los duplicados 
#include <string>
#include <iostream>
using namespace std;

struct x{
       int dato;
       struct x *siguiente;
       }Nodo;
       
int main()		//Inicia Main
{
  x *inicio,*aux, *aux2, *tempPtr, *ant;
  int i,N;
   inicio=new x;
   
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
  cout<<"\n  Elementos en la lista .: "; 
  aux=inicio;						//Manda aux al inicio
     
while(aux!=NULL)					//Imprime datos 1x1
{
 cout<<" ->"<<aux->dato;
 aux=aux->siguiente;                
}
cout<<" \n"<<endl;
system("pause");

     aux=inicio;
     aux2=inicio; //NODO  
      aux=aux->siguiente;
     while(aux2 != NULL)
     {
     while ( aux != NULL ){  // elimina los nodos restantes
         if(aux != aux2){
             if(aux2->dato == aux->dato)
             {  
             tempPtr = aux;
              if(aux2 == inicio){
                    aux = aux2;
                    aux->siguiente = aux2->siguiente->siguiente;
             }else{
             aux = ant;
             aux->siguiente = aux->siguiente->siguiente;
             }
             delete tempPtr;
             }else{
               ant = aux;
              aux=aux->siguiente;
                    }
         }else{
               ant = aux;
               aux=aux->siguiente; 
               }
                
      } // fin de while           
           aux=inicio;
            aux2=aux2->siguiente;
      }
    
aux=inicio;
cout << "\n---------Eliminando Duplicados \n"<< endl; 
while(aux!=NULL)					//Imprime datos 1x1
{
 cout<<" ->"<<aux->dato;
 aux=aux->siguiente;                
}
cout << endl;
cout << endl;
system("pause");
}
