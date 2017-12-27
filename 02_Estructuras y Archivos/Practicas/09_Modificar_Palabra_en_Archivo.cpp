#include <iostream>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include <string.h>
using namespace std;

void count_data();

int main()
{
    count_data();
    getch();
}

void count_data() // funcion para c ontar palabras lineas y cracteres
{
   FILE *fp,*fp_rep;
   char ch,ch1,temp_str[50],rep_str[10],new_str[10];
   int count=0; // contador
//   clrscr(); limpia pantalla

   cout<<"Abriendo Archivo reemplazo.txt \n"<<endl;
      fp=fopen("reemplazo.txt","r");
   cout<<"Creando archivo temporal reemplazo_editando.txt \n"<<endl;
      fp_rep=fopen("reemplazo_editando.txt","w");
   cout<<"Palabra a Editar: "<<endl;
      cin>>rep_str;
   cout<<"\nPalabra Reemplazo: "<<endl;
      cin>>new_str;

   while((ch=getc(fp))!=EOF)
   {
     if(ch==' ')
      {
    temp_str[count]='\0';
    if(strcmp(temp_str,rep_str)==0)
     {
      cout<<"Deseas reemplazar? (s/n): ";
      ch1=getche();
      if(ch1=='s')
      {
       fprintf(fp_rep," %s",new_str);
       count=0;
      }
      else
       { fprintf(fp_rep," %s",temp_str);count=0;}
     }
    else
     {
       fprintf(fp_rep," %s",temp_str);
       count=0;
      }
      }else
      {
    temp_str[count++]=ch;
      }
    }
      if(strcmp(temp_str,rep_str)==0)
     {

      cout<<"Deseas reemplazar? (s/n):";
      ch1=getche();
      if(ch1=='s')
      {
       fprintf(fp_rep,"%s ",new_str);
       count=0;
      }
      else
       {
        fprintf(fp_rep,"%s ",temp_str);
        count=0;
       }
     }else
      {
       fprintf(fp_rep,"%s ",temp_str);
      }

    fclose(fp);
    fclose(fp_rep);
    remove("reemplazo.txt");
    rename("reemplazo_editando.txt","reemplazo.txt");
    fflush(stdin);

}
