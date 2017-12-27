//Dada una cadena de caracteres X1 Programacion C++ 
//empleando una pila invierta la cadena

#include <iostream>
#include <string.h>
using namespace std;

int InviertePila(char *str);

int main()
{
    char X1[256];
    cout <<"Introdusca la Cadena a Invertir: "<< "\n";
    cin.getline(X1, 256);
    InviertePila(X1);
    cout << X1 << "\n";
    system("pause");
    return 0;
}
 
 //Last In, First Out  , LIFO
int InviertePila(char *str)
{
    int x = strlen(str);
    for(int y=x; y>=(x/2)+1; y--)
    {
    swap(str[x-y],str[y-1]);
    }
    return 0;
}
