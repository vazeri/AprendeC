//Programa que lee un archivo en forma Aleatoria
#include <fstream>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <stdio.h>
#include <exception>
#include <ctype.h>

using namespace std;

struct persona{
       char Nombre[30];
       int Edad;
       float Sueldo;
       };
       
int main(){
       persona emp;
       ofstream X1;
       char buf[30];
       ifstream X2;
       int i=0, N;
       cout<<"Captura de informacion de empleado"<<endl;
       cout<<"Cuantos Registros="<<endl;
       cin>>N;
         X1.open("Persona.bin",ios::out|ios::binary);
         X2.open("Personal.bin",ios::in|ios::binary);
         if(!X1||!X2){
                      cout<<"No hay archivo";
                      exit(1);
                      }
       while(i<N){
                  cout<<"Ingresa Nombre "; gets(emp.Nombre);
                  cout<<"Edad "; emp.Edad=atoi(gets(buf));
                  cout<<"Sueldo "; emp.Sueldo=atof(gets(buf));
          X1.seekp(sizeof(persona), ios::beg);
          X1.write((char *)&emp, sizeof(persona));
          X1<<emp.Nombre<<endl;
          X1<<emp.Edad<<endl;
          X1<<emp.Sueldo<<endl<<endl;
          i++;
                  } 
       
       X1.close();
       cout<<"Informacion de empleado";
       while(!X2.eof()){
          X2.seekg(sizeof(persona),ios::beg);
          X2.read((char *)&emp,sizeof(persona));
          cout<<"Nombre "<<emp.Nombre<<endl;
          cout<<"Edad "<<emp.Edad<<endl;
          cout<<"Sueldo "<<emp.Sueldo<<endl;
          }
          X2.close();
          }


/*
void escribeRecord(ofstream&sale, int N)
{
int i=0; perosna emp;
while (i<N){
      sale.seekp(1, ios::beg);
      sale.write(char *)$emp, sizeof(persona);
      .
      .
      .
      i++;
      
      }
     }
     
void leeRecord(ifstream &ent){
     while(!ent.eof()){
                       enf.seeekg(1, ios::cur);
                       enf.read((char *)&emp, sizeof(persona));
                       
                       }
     gtetch;
     }
*/
