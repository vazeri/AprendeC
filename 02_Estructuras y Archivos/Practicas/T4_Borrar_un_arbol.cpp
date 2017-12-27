//50 40 60 30 45 20 35 41 48 63  47 49
#include "binaryTree.h"
#include <iostream>
using namespace std;

int main () {
    int n=0;
    int next;         
    binaryTree<int> bTree;
    cout << "Intrudusca numero a insertar, introdusca 0 para terminar:" << endl;
    
    bool success;
    cin >> next;
    while (next != 0) {
        success = bTree.insert(next);
        cin >> next;
    }
    cout<<"--Arbol: "<<endl;
    bTree.display();
    
    do{
                    
    cout << "Que numero desea borrar?: ";
    cin >> next;
    success = bTree.dele(next);
    bTree.display();
    n++;
 
}while(n!=10);
    cout << " \n\n YA BORRASTE TODO EL ARBOL \n\n";
    cout << " \n\n YA BORRASTE TODO EL ARBOL \n\n";
//50 40 60 30 45 20 35 41 46 63 

  system("pause");
 
    return 0;
}
