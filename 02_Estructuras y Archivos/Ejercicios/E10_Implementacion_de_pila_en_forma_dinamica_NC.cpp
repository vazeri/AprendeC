#include <string>
#include <iostream>
#include <exception>
using namespace std;

class Nodo{
      private:
              int num;
              Nodo *siguiente;
      public:
             Nodo(){
                    num=0;
                    siguiente=NULL;
                    }
      friend class Pila;
      };
      
class Pila{
      private: 
             Nodo *inicio;
      public:
             Nodo();
             void push(int);
             int pop();
             void listapila();
      
      };
      
Nodo::Nodo()
{
            inicio=NULL;
            }

void Pila::push (int x)
{
     Nodo *p=new Nodo;
     if (p==NULL){
                  cout<<"Stack overflow";
                  exit(1);
                  }
                  else{
                       p->num=x;
                       p->siguiente=inicio;
                       inicio=p;
     }
}

int Pila::pop(){
    if(inicio==NULL){
                     cout<<"stack underflow";
                     exit(1);}
    else{
         X1=inicio->num;
         p=inicio;
         inicio=inicio->siguiente;
         delete p;
         }
    return x;
}    

void Pila::listaPila()
{
 Nodo *p=inicio;
 if(p==NULL){
             cout<<"Pila Vacioa";
             exit();
             }
             else{
                  while(p!=NULL){
                                 cout<<" "<<p->Num;
                                 p=p->siguiente;
     }
}
