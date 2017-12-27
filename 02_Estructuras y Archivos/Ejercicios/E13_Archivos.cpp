#include <fstream>
#include <ctype.h>
#include <iostream>
using namespace std;

int main()
{
 cout<<" - Escriba un Texto y termine con * para guardar - \n"<<endl;
 char a;
 ofstream X1; //clase para escribir Archivos
 X1.open("E13_Archivos_Ejemplo.txt"); //Abre archivo
	if(!X1){  
            cout<<"No hay archivo";
            exit(1);
            }
  do{
  	  cin.get(a);
        if(isalnum(a))
  	        X1<<a;
        if(ispunct(a))
  	        X1<<a;
        if(isspace(a))
  	        X1<<a;			 
    }while(a!='*');		  
}
