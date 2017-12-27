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
          void insertaEnlista(int); //OK
          void insertaAlfinal(int); 
          Nodo *buscarElemento(int x); //OK
          void insertaEnmedio(Nodo *, int); 
          void eliminaAlinicio();     
          void eliminaAlfinal();      
          void eliminaElemento(Nodo *);  //OK
          void imprimeLista(void);            
      };
                    
//Modulos del programa 
Lista::Lista(){
               inicio=NULL;
               Final=NULL;
              }

void Lista::insertaEnlista(int x) //K1
{
     Nodo *p=new Nodo;
     p->Num=x;
     p->siguiente=inicio;
     //inicio->anterior=p;
     p->anterior=NULL;
     inicio=p;     
     }
     
void Lista::insertaAlfinal(int x) //K4
{
     Nodo *p=new Nodo;
     p->Num=x;
     Final->siguiente=p;
     p->anterior=Final;
     p->siguiente=NULL;
     Final=p;
}
     
Nodo *Lista::buscarElemento(int ref)
{
    Nodo *p=inicio;
    while(p!=NULL && p->Num!=ref)
    {
    q=p;
    p=p->siguiente;
    }
return p;
}

void Lista::insertaEnmedio(Nodo *p, int x) //K2
{
    Nodo *q=new Nodo;
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
{
Nodo *p=inicio;
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

void Lista::eliminaAlfinal() //ERROR
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

//////////////////////////////////////////////////
int main()
{
    Nodo *r,*s,*t,*u,*x,*y;
    int i,N,k,k1,k2,k3,k4,k5,k6;
    Lista X1;
       cout<<"\n - Programa de Inversion de elementos en lista doble - \n\n";
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
     cout<<"\t";X1.imprimeLista();cout<<"\n\n";
     system("pause");

 cout<<"\n ELIMINE el primer ELEMENTO (hago lo que quiero) \n ";
     cout<<" ";
     X1.eliminaAlinicio();
     cout<<"\t";X1.imprimeLista();cout<<"\n\n";
     system("pause");


/* cout<<"\n INSERTAR al ENMEDIO \n ";
     cout<<" Cual Numero? \n";
             cin>>k5;
     //r=X1.buscarElemento(k5);
     X1.insertaAlfinal(k5);
     cout<<"\t";X1.imprimeLista();cout<<"\n";
*/


cout<<"\n ELIMINE el ultimo ELEMENTO (Deal with it) \n ";
     cout<<" ";
     X1.eliminaAlfinal();
     cout<<"\t";X1.imprimeLista();cout<<"\n";
     system("pause");
/* cout<<"\n INSERTAR al FINAL \n ";
     cout<<" Cual Numero? \n";
             cin>>k6;
     //r=X1.buscarElemento(k6);
     X1.insertaAlfinal(k6);
     cout<<"\t";X1.imprimeLista();cout<<"\n";
*/


cout<<"\n INSERTA en LISTA \n ";
     cout<<" Cual Numero? \n";
             cin>>k3;
     t=X1.buscarElemento(k4);
     X1.insertaEnlista(k4);     
     cout<<"\t";X1.imprimeLista();cout<<"\n";
system("PAUSE");
}
