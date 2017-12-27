//Dada la cadena de caracteres "Escuela superior de ingenieria mecanica y Electrica
//Ingenieria en Comunicaciones y Electronica 
//Formar un arbol binario y efectuar el recorrido en orden posterior
#include <exception>
#include <string>
#include <iostream.h>
#include "datos.h" //Libreria Personalizada

using namespace std;

class Nodo{
      private:
              int dato;
              Nodo *Left, *Right;
      public:
             Nodo(){
                    dato=0;
                    Left=Right=NULL;
                    }
             friend class arbol;
      };

class arbol{
      private:
              Nodo *root;
      public:
              arbol();
              void creaArbol(int);
              .
              .
              .
      };


int main(){
cout<<"";    
    
    }
