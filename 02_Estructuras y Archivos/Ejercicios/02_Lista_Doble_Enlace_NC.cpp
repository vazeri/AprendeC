#include <string>
#include <iostream>
using namespace std;

class Nodo{
      private:
              int Num;
              Nodo *siguiente;
      public:
             Nodo();
             friend class Lista;
      };
      
class Lista{
      private:
              Nodo *inicio;
      public:
             Lista();
             void insertaAlinicio(int);
             void insertaAlfinal(int);
             void insertaEnmedio(int,int)
             Nodo *buscaElemento(int);
             void insertaDespues(Nodo *, int);
             };
             
Nodo *Lista::buscaElemento(int x)
{
     Nodo *p=inicio;
     while(p->Num!=x && p!=NULL)
     p=p->siguiente;
return p;
     }
     
void Lista::insertaDespues(Nodo *p, int x)
{
     Nodo *q=new Nodo;
     q->Num=X;
     q->siguiente=p->siguiente;
     //////////////////////////////////
     {
     while(p->Num!=ref && p!=NULL)
         p=p->siguiente;
     q=new Nodo;
     q->Num=x;
     q->siguiente=p->siguiente;
     }
     //////////////////////////////////
}

void insertaEnmedio(int ref, int x)
{
     Nodo *p=inicio, *q;
     int Ban=1;
     while(p->Num!=ref && Ban==1)
     {
           if(p->siguiente!=NULL)
              p=p->siguiente;
           else
               Ban=0;
     }
     if(Ban==1)
     {
               q=new Nodo;
               q->Num=x;
               q->siguiente=p->siguiente;
     }
     else
     {
     cout<<"No hay espacio";
     }
     
