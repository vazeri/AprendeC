//Creaion de un archivo binario en forma secuencial 
#include <fstream>
#include <stdlib.h>
#include <ctype.h>
#include <string>
#include <iostream>
#include<exception>
using namespace std;

struct alumno{
  char Nombre[30];
  int Boleta;
  float calif;
};

int main()
{
    int n,i=0;
    ofstream X1;
    ifstream X2;
    alumno X3;
    X1.open("Alumno.bin",ios::out|ios::binary);
    X2.open("Alumno.bin",ios::in|ios::binary);
    cout<<"Creacion de archivo: "<<endl;
    cout<<"cuantos registros?";cin>>n;
    
    while(i<n){
     fflush(stdin);
    cout<<"Dame el nombre del alumno:";
    gets(X3.Nombre);
    cout<<"Su boleta: ";
      cin>>X3.Boleta;
    cout<<"Calificacion ";
      cin>>X3.calif;
    X1.write((char*)&X3, sizeof(alumno));
    i++;
    }
    
    X1.close();
    cout<<"\n Lectura de Informacion de alumno: "<<endl;
    while(!X2.eof()){
      cout<<"Nombre: "<<X3.Nombre<<endl;
      cout<<"Boleta: "<<X3.Boleta<<endl;
      cout<<"Calificacion: "<<X3.calif<<endl;
      
    
        }
}
 //-----------------
 /*
void Lista::grabaFile(ofstream &salida)
{
     Nodo *p=inicio;
     while(p!=NULL){
     salida <<p->Nombre<<endl;
     .
     .
     .
     p=p->siguiente;
     }
}

void Lista::cargaFile(ifstream &X1)
{
     Nodo *p=inicio;
     while(!X1.eof() && p!=NULL){
     cout<<"Nombre: "<<p->Nombr<<endl;
                     .
                     .
                     .
     p=p->siguiente;
     }
     getch();
}*/
