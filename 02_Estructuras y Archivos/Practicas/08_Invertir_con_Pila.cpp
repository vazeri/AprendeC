#include <stdio.h> 
#include <iostream>
#include <string.h>
#define X1 "Programacion C++" 

using namespace std;

int main() 
{ 
    char *p, *r; 
       cout <<"  Programa que invierte la cadena - Programacion C++ -" << "\n\n";
       cout << "  Cadena Invertida: \n\n";
    for(p=X1; *p!='\0'; p++) 
          
    if( p[1] == ' '|| p[1] == '\0' ) 
    {    
        for(r = p; r >= X1 && *r != ' '; --r) 
        putchar( *r ); 
        putchar(' '); 
    }    
       cout << "\n\n";
    
    system("pause");
    return 0; 
}
