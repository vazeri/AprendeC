//Programa  que cuenta el numero d ehojas de un arbol binario 

#include "iostream"
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct nodo
{
    int data;
    struct nodo* left;
    struct nodo* right;
};
 
// Funcion que cuenta el numero de nodos hojas
 int conteoHojas(struct nodo* nodo)
{
  if(nodo == NULL)
    return 0;
  if(nodo->left == NULL && nodo->right==NULL)
    return 1;
  else
    return conteoHojas(nodo->left)+
           conteoHojas(nodo->right);
}
 
//Funcion de ayuda localiza el nuevo nodo con 
// la info dada y los punteros NULL izquierda y derecha 
struct nodo* newNodo(int data)
{
  struct nodo* nodo = (struct nodo*)
                       malloc(sizeof(struct nodo));
  nodo->data = data;
  nodo->left = NULL;
  nodo->right = NULL;
 
  return(nodo);
}
 

int main()
{
  //crea un arbol
  struct nodo *root        = newNodo(1);        //Raiz
    root->left               = newNodo(2);     //Hoja 1
  root->right              = newNodo(3);     //Hoja 2
  root->left->left         = newNodo(4);     //Hoja 3
    root->left->right        = newNodo(5);    

 
  //obtiene el conteo de hojas del arbol creado arribita
  cout<<"Numero de hojas en el arbol: "<< conteoHojas(root)<<endl;
 
  getchar();
  return 0;
}
