//Mezcla de dos archivos de texto on numeros enteros en un 3er archivo 
#include <iostream>

using stdio


void mezclaFile(fstream &X1, ifstream &X2, ofstream &X3)
{
 char a, b;
 X1.get(a);
 X2.get(b);
 while(!X1.eof && !X2.eof())
 {
   if(a<b)
     X3<<a;
    else if(a==b){
     X3<<a;
     X3<<b;
}
}  X3<<b;   
}

if(X1.get(a)){
              X3<<a;
              }copia(X1,X3);
else{
     X3<<b;
     copia(X1,X3);
     }
     
void copia(ifstream &X1, ofstream &X3)
{
     int elem;
     while(X1.get(elem))
     {
       X3<<elem;
       X1.get(elem);
       }
}


