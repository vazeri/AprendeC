#include <iostream.h>
#include <conio.h>
using namespace std;

int intercambia();
typedef struct x{
       int dato;
       struct x *siguiente;
       }Nodo;
Nodo *inicio,*aux;

int main()
{ int i;
inicio=new Nodo;
cout <<"Primer dato: ";
cin>>inicio->dato;
aux=inicio;
aux->siguiente=NULL;
for(i=1;i<8;i++)
{
                aux->siguiente=new Nodo;
                aux=aux->siguiente;
                cout<<"siguiente dato: ";
                cin>>aux->dato;
                cout << "Dato "<<i<<" : "<<aux->dato<<endl;
                aux->siguiente=NULL;
                }
                
                cout << "Elementos en la lista: "<<endl;
                aux=inicio;
                for(;aux!=NULL;)
                {
                               cout <<" "<<aux->dato;
                               aux=aux->siguiente;
                               }
                               cout<<endl;
                                intercambia();
                               getch();
                               }

int intercambia()
{ Nodo *kam;
    Nodo *p=inicio; int cam,ref,x;
    cout << "imtercmbio de Nodos interiores "<<endl;
    cout <<"indica que numeros "<<endl;
    cout << "primer dato: ";
    cin>>ref;
    cout <<"segundo dato: ";
    cin>>cam;
    int ban=1;
           
while(p->dato!=ref && ban==1)
{
                        if(p->siguiente!=NULL)
                         aux=p;
                        p=p->siguiente;
                        
     //  else ban=0;
       }
       if(ban==1)
       p->dato=cam;
       aux->dato=ref;
       p=inicio;
       for(;p!=NULL;)
                {
                               cout <<" "<<p->dato;
                               p=p->siguiente;
                               }
                               getch();
       }
       
    
