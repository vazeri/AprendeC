#include <iostream>
#include <cstdlib>
using namespace std;

#ifndef BINARY_TREE_H
#define BINARY_TREE_H

template<class treeElement>
class binaryTree
{
    public:
        binaryTree()
        {
            root = NULL;
        }
        
        bool insert (treeElement& el)
        {
            return insert (root, el);
        }
     
        bool dele (treeElement& el)
        {
            return dele (root, el);
        }

        void display () const
        {
            if (root == NULL)
                cout << "--------------No hay elementos para mostrar" << endl;
            else
                display (root);
        }

///////////////////////////////////////////////////////////////////////////////////
    private:
        struct treeNode
        {
            treeElement data;
            treeNode *left;
            treeNode *right;
        };
        treeNode *root;
        
        //Funciones privadas
        bool insert (treeNode*& aRoot, treeElement& el)
        {
            if (aRoot == NULL) {
                aRoot = new treeNode;
                aRoot->left = NULL;
                aRoot->right = NULL;
                aRoot->data = el;
                //cout << aRoot->data << endl;
                return true;
            }
            else if (el == aRoot->data) {
                cout << "Entrada DUPLICADA, no insertada" << endl;
                return false;
            }
            else if (el < aRoot->data)
                return insert (aRoot->left, el);
            else
                return insert (aRoot->right, el);
        }
        
         bool dele (treeNode*& aRoot, treeElement& el)
        {
            treeNode *goner, *gonerL, *gonerR, *replacement, *oldRoot, *replacementL;
            oldRoot = aRoot;
            replacementL = NULL;
            
            //condicion para detenerse 1
            if (aRoot == NULL) {
                cerr << "------------No hay elementos a borrar" << endl;
                return false;
            }
            //condicion para detenerse 2
            else if (aRoot->data == el) { //data found - replace
                //Nodo Hoja
                if (aRoot->left == NULL && aRoot->right == NULL) { 
                    cout << "Nodo HOJA borrado " << endl;
                    goner = aRoot;
                    aRoot = NULL;
                    delete goner;
                    return true;
                }
                //Nodo solo tiene rama Derecha
                else if (aRoot->left == NULL) { 
                    cout << "Nodo con rama DERECHA borrado" << endl;
                    goner = aRoot;
                    aRoot = aRoot->right;
                    delete goner;
                    return true;
                }
                //Nodo solo tiene rama izquierda
                else if (aRoot->right == NULL) { 
                    cout << "Nodo con rama IZQUIERDA borrado" << endl;
                    goner = aRoot;
                    aRoot = aRoot->left;
                    delete goner;
                    return true;
                }
                //Nodo tiene 2 ramas
                else {                          
                    cout << "Nodo con 2 ramas encontrado" << endl;
                    //ERROR
                    goner = aRoot;              //salmacenar nodo para borrarlo
                    gonerL = aRoot->left;       //almacenar subarbol izquierdo raiz
                    gonerR = aRoot->right;      //almacenar subarbol derecho raiz
                    
                    //Busca el valor mas grande en el subarbol izq y almacena le puntero de remplazo = gonerL;
                    while (replacement->right != NULL)
                        replacement = replacement->right;
                        
                    //Si el nodo con el reemplazo tiene un subarbol izquierdo almacena la direccion de ese subarbo
                    if (replacement->left != NULL)
                        replacementL = replacement->left;
                                            
                    //Empieza a reacomodar el arbol
                    //Si la variable es el primer nodo, ese sera el reemplazo
                    if (aRoot == oldRoot)
                        aRoot = replacement;
                    else {
                        aRoot = oldRoot;
                    
                        if (replacement->data < aRoot->data)
                            aRoot->left = replacement;
                        else
                            aRoot->right = replacement;
                    }    
//Para asegurar que no se ciclan los nodos
                    replacement->left = gonerL;
                    if (gonerL->right == gonerL)
                        gonerL->right = NULL;
                    if (gonerL->left == gonerL)
                        gonerL->left = NULL;
                         if (replacementL != NULL) {
                        if (replacementL->data < replacement->data)
                            replacement->left = replacementL;
                        else
                            replacement->right = replacementL;
                    }
                    replacement->right = gonerR;
                    
                    delete goner;
                    return true;
                }
            }
            else if (el < aRoot->data) {
                oldRoot = aRoot;
                return dele (aRoot->left, el);
            }
            else {
                oldRoot = aRoot;
                return dele (aRoot->right, el);
            }
        }

        
        void display (treeNode* aRoot) const
        {
            if (aRoot != NULL) {
                      //cout<<"Arbol: ";
                display (aRoot->left);
                cout << aRoot->data << endl;
                display (aRoot->right);
            }
        }
/*
binaryTree::~binaryTree()
{
  if (root != NULL) delete root;
}

treeNode::~treeNode()
{
  if (left != NULL) delete left;
  if (right != NULL) delete right; 
}
*/
};
#endif
