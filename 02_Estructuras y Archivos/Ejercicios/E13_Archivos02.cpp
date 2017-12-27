#include <fstream>
#include <ctype.h>
#include <iostream>
using namespace std;

int main()
{
 char c;
 ifstream X1; //Escribe
 ofstream X2; //Lee
 
 X1.open("E13_Archivos_Ejemplo.txt");   
 X2.open("Resultado.txt");
    if(!X1||!X2){
		  cout<<"No hay archivo \n\n";
		  system("pause");
          exit(1);
                }
    X1.get(c);	
 while(!X1.eof())
    if (isdigit(c))
       X2<<c;
    X1.get(c);
 
 X1.close();      //cierra los archivos
 X2.close();      
}
