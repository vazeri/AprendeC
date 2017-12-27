//Dada una cadena de maxima longitud (& cdevolvera la cantidad de caracteres de la cadena
#include <iostream.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <conio.h>
#include <ctype.h>
char Cuenta(char *s);

int main()
{
   int b;
	char *s="Dada una cadena de maxima longitud (81 caracteres) hacer un estadistico de: No de todo:";
   b=Cuenta(s);
   cout<<"Caracteres totales"<<b<<endl;
   getch();
}

char Cuenta(char *s )
{
   int Espacio=0;
   int Palabra=0;
   int Letra=0;
   int Mayuscula=0;
   int Minuscula=0;
   int Numero=0;
   int Otros=0;

	for(int i=0;i<81;i++)
	{
       if(isdigit(*s))
      	Numero++;
       if(isalpha(*s))
         Letra++;
       if(islower(*s))
         Minuscula++;
       if(isupper(*s))
         Mayuscula++;
       if(isspace(*s))
         Espacio++;
       if(*s==' '||*s=='\t')
      	Palabra++;
       else
      	Otros++;

      s++;
	}
   	cout<<"Espacios "<<Espacio<<endl;
	   cout<<"Palabras "<<Palabra<<endl;
 		cout<<"Mayusculas "<<Mayuscula<<endl;
		cout<<"Minusculas "<<Minuscula<<endl;
		cout<<"Numeros "<<Numero<<endl;
      cout<<"Otros "<<Otros<<endl;


}
