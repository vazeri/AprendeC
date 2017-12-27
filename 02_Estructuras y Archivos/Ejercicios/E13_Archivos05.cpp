//Hacer un programa que cuente el numero de palabras que contiene un archivo de texto 
#include <fstream>
#include <ctype.h>
#include <string>
#include <iostream>
#include<exception>
using namespace std;

int main()
{
    ifstream X1;
    ifstream X2;
    char b,c,ban;
    X1.open("A.txt");
    X2.open("B.txt");
    if (!X1 || !X2)
    {
    cout<<"No hay archivo";
    exit(1);
    }
    if(X1.get(c)==X2.get(c))
      X1.get(b);
      X2.get(c);
      while(X1.get(b) && X2.get(c))
      {
         if(b==c)
         ban=1;
         else
         ban=0;
      }
      if (ban==1)
        cout<<"Los archivos son iguales";
      else
         cout<<"Los archivos NO son iguales";
                      
                      }
    /*  cout<<"Los archivos son iguales";
      else
      cout<<"No son iguales los archivos";
    X1.close();
    X2.close(); */
}}    
