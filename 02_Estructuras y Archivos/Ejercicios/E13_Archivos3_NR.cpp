//Hacer un programa que cuente el numero de palabras que contiene un archivo de texto 
#include <fstream>
#include <ctype.h>
#include <iostream>
using namespace std;

int main()
{
	 ifstream X1;
	 char c;
	 int palabra=0;
	 int letra=0;
	 int numero=0;
	 int simbolo=0;
	 
	 X1.open("Ejemplo.txt"); // A.txt
	 if(!X1){
             cout<<"No se puede abrir archivo \n";
	 		 system("pause");
	         exit(1);
				 }
	 X1.get(c); //????????????
	 while(!X1.eof()) //End of File 
	  {
	   if(c==' ' || c=='\t') 
		  palabra++;
	   if(isdigit(c))
		  numero++;
	   if(isalnum(c)) //AlphaNumerico
		  letra++;
	   if(ispunct(c)) //punuacion
		  simbolo++;
		  X1.get(c);
          }
          
  cout<<"Conteo de Caracteres en archivo Ejemplo.txt"<<endl;
  
  cout<<"\n Palabras: "<<palabra;
  cout<<"\n Digitos: "<<numero;
  cout<<"\n Letras: "<<letra;
  cout<<"\n Simbolos: "<<simbolo<<endl;  
  
  X1.close();
  system("pause");
}
