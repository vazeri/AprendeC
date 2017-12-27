#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>


int main()
   {
   char pal[40],pal2[40];
   int n,x,a=0,p=0,e=0;
   char b=' ';
     printf("\n Ingrese la Palabra: ");
       gets(pal);
       n=strlen(pal);
     for (int u=0;u<=n;u++)
	 {
	    if (pal[u]==b)
		u++;  
        pal2[e]=pal[u];
	    e++;
     }  printf("\n Caracteres invertidos: \n");
  for (x=n-1;x>=0;x--)
 	printf("\t   %c \n",pal[x]);
    x=0;
    n=strlen(pal2);    
  
  for (x=n-1;x>=0;x--)
	{
	 if (pal2[x]==pal2[a])
	p++;
	a++;
	}
 if (p==n){
	printf("\n SI ES palindromo \n");
    }
 else{
    printf ("\n NO es palindromo \n"); 
    }
    getch();
    }
