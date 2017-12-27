#include <string>
#include <iostream>
#include <exception>
using namespace std;

class Nodo{
      public:
             int Num;
             Nodo *siguiente, *anterior;
      private:
             Nodo(){
                    Num=0;
                    siguiente=NULL;
                    anterior=NULL;
                    } 
             friend class Lista; 
      };

class Lista{
      private:
          Nodo *q;
          Nodo *inicio, *Final;
      public:
             Lista();
             void insertaEnlista(int);
             void insertaAlfinal(int);
             Nodo *buscarElemento(int x);
             void insertaEnmedio(Nodo *, int);
             void eliminaAlinicio();
             void eliminaAlfinal();
             void eliminaElemento(Nodo *);  
             void imprimeLista(void);            
      };
                    
Lista::Lista(){
                 inicio=NULL;
                 Final=NULL;
                 }

void Lista::insertaEnlista(int x)
{
 Nodo *p=new Nodo;
 p->Num=x;
 p->siguiente=inicio;
 //inicio->anterior=p;
 p->anterior=NULL;
 inicio=p;     
     }
     
void Lista::insertaAlfinal(int x)
{ Nodo *p=new Nodo;
 p->Num=x;
 Final->siguiente=p;
 p->anterior=Final;
 p->siguiente=NULL;
 Final=p;
     }
     
Nodo *Lista::buscarElemento(int ref)
{   Nodo *p=inicio;
    while(p!=NULL && p->Num!=ref)
    {
    q=p;
    p=p->siguiente;
    }
return p;
}

void Lista::insertaEnmedio(Nodo *p, int x)
{    Nodo *q=new Nodo;
    if(q==NULL){
        cout<< "No hay espacio \n"<<endl;
        //void exit(int);
        }
    else{
        q->siguiente=p->siguiente;
        p->siguiente=q;
        q->anterior=p;
        q->siguiente->anterior=q;
        }
}

void Lista::eliminaAlinicio()
{Nodo *p=inicio;
    if(p->siguiente!=NULL)
    {
        inicio=p->siguiente;
        inicio->anterior=NULL;
    }
    else{
        inicio=NULL;
        Final=NULL;
        }
delete p;
}

void Lista::eliminaAlfinal()
{
Nodo *p=Final;
    if(p->anterior!=NULL)
    {
        Final=p->anterior;
        Final->siguiente=NULL;
    }
    else{
        Final=NULL;
        inicio=NULL;
}
delete p;
}

void Lista::eliminaElemento(Nodo *p)
     {
      q->siguiente=p->siguiente;
      delete p;
     }

void Lista::imprimeLista(void)
     {
     Nodo *p;
     p=inicio;
     while(p!=NULL)
     {
      cout<<p->Num;
      p=p->siguiente;
     }
}

int main()
{
    Nodo *r,*s;
    int i,N,k,k1,k2,k3,k4;
    cout<<"";
    Lista X1;
     cout<<" Programa de Inversion de elementos en lista doble \n\n";
     cout<<" Cuantos elementos desea en lista? ";cin>>N;
    for(i=0;i<N;i++)
            {
                cout<<" Elemento "<<i<<" de "<<N<<" : ";
                cin>>k;
                X1.insertaEnlista(k);
            }
     cout<<"\n Tu lista de "<<N<<" Elementos INVERTIDA es \n\n";
     cout<<"\t";X1.imprimeLista();
     cout<<"\n\n INSERTAR Elemento \n ";
     cout<<" Despues de que numero? \n ";
             cin>>k2;
     r=X1.buscarElemento(k2);
     X1.insertaEnmedio(r,6);
     cout<<"\t";X1.imprimeLista();
     cout<<"\n BORRAR Elemento \n ";
     cout<<" Cual Numero? \n";
             cin>>k3;
     s=X1.buscarElemento(k3);
     X1.eliminaElemento(r);
cout<<"\t";X1.imprimeLista();cout<<"\n";
system("PAUSE");
}
