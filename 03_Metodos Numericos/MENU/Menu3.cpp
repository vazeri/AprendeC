#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <winbgim.h>
#include <iostream>
#include "datos.h"

using namespace std;

void Menu();
void Parcial1();
void Parcial2();
void Parcial3();
void Encabezado();
void waitForLeftMouseClick();

int main(){
    //Vazquez Gonzalez Erick
    //Muñoz Rubio Carlos
    
    initwindow(550,700);   
    int midx, midy;
    midx = getmaxx();
    midy = getmaxy();

    setfillstyle(1,WHITE); //FONDO
    bar(0, 0, midx, midy);

    setfillstyle(1, BLUE); //IZQUIERDA
    bar(midx-midx, 0, (midx/22), midy);

    setfillstyle(1,BLACK); //FOOTER
    bar(0, midy-(midy/23), midx, midy);

    setfillstyle(1,BLACK); //SUB HEADER
    bar(0, 0, midx, midy/7);

    setfillstyle(1,BLUE); //HEADER
    bar(0, 0, midx, midy/14);

    setfillstyle(1,RED); //DIVISOR abajo
    bar(midx, midy, midx, midy);

    setfillstyle(2,RED); //CUADRITO
    bar(0, 0, midx/7, midy/7); 
    setcolor(RED);
    
    /*
    outtextxy(130,160,"     ____ _____ _____  _    _ ____   ");
    outtextxy(130,180,"      __// ___|\\_    \\| \\  / || __\\  ");
    outtextxy(130,200,"   / /_  | \\__   | |\\/|  \\/  || |__  ");
    outtextxy(130,220,"  / __/  \\___ \\  | |  |      || ___\\  ");
    outtextxy(130,240," / /___  ___/ | _| |__| |\\/| || |___   ");
    outtextxy(130,260,"/_____/ |____/ /_____/|_/  \\_||_____\\  ");
    */
    settextstyle(10,0,8);//Estilo de texto segunda opción de ESIME
    outtextxy(135,180,"ESIME");
    settextstyle(10,0,1);//Estilo de texto
    outtextxy(20,40,"IPN");
    setcolor(WHITE);
    outtextxy(85,20,"Unidad Zacatenco");
    outtextxy(78,70,"Ingenieria en Comunicaciones y Electronica");
    outtextxy(330,670,"Analisis Numerico");
    outtextxy(40,300,"Practica: 01");
    outtextxy(40,360,"Nombre: Erick Vazquez Gonzalez 2011301075");
    outtextxy(40,400,"Nombre: Carlos Muñoz Rubio     2011301504");
    outtextxy(30,670,"Profesor: Jorge Anzaldo");
    outtextxy(400,20,"Grupo: 4CV4");
    outtextxy(40,440,"Fecha: 20/08/12 ");

    waitForLeftMouseClick();   
    setfillstyle(1,WHITE);
    setcolor(WHITE);
  
    closegraph();

      Encabezado();
      Menu();
      return 0;
    }
    
void Menu(){
     
     
     int opcion;
           cout<<"\n                                  MENU PRINCIPAL \n"<<endl; 
           cout<<"\t 1.- Primer Parcial "<<endl;
           cout<<"\t 2.- Segundo Parcial "<<endl;        
           cout<<"\t 3.- Tercer Parcial "<<endl;
           cout<<"\t 4.- Salir \n"<<endl;
           cout<<"\t Que Parcial deseas revisar?: ";
           cin>>opcion;
           if( opcion == 1 )    
              {   system("cls");
                  Encabezado();
                  Parcial1();
             }
           if( opcion == 2 )    
              {  system("cls");
                  Encabezado();
                  Parcial2(); }
           if( opcion == 3 )    
              {  system("cls");
                  Encabezado();
                  Parcial3(); }
           if( opcion == 4 )    
              {  system("exit"); }
           if( opcion <= 0 || opcion >= 5)    
           {
           cout<<"Opcion no valida teclee una de las opciones"<<endl;
              std::cin.clear();
           cin>>opcion;   
           }}
           
           
void Parcial1(){
           int y;
           cout<<"\n\t\t\t      PARCIAL 1 - PRACTICAS \n"<<endl;
           cout<<"\t 1.- Graficos 2D "<<endl;
           cout<<"\t 2.- Graficos 3D "<<endl;
           cout<<"\t 3.- Menu Anterior "<<endl;
           
           cout<<"\n Que No. de practica deseas abrir? : ";cin>>y;    
           if( y == 1 )
                { system("02_Graficos.exe");
                cout<<"\n Que No. de practica deseas abrir? : ";
                std::cin.clear();
                  cin>>y;}  
                  
           if( y == 2 )
                { system("Graficos3D.exe");
                  cout<<"\n ¿Que No. de practica deseas abrir? : ";cin>>y;    
                  std::cin.clear();
                  cin>>y;}
                    
           if( y == 3 )
                {    system("cls");
                     std::cin.clear();
                     Encabezado();
                     Menu();}
                       
           else{cout<<"Opcion no valida intente de nuevo "<<endl;
                std::cin.clear();
                cin>>y;
                system("cls");
                Menu();
               }      
                }

void Parcial2(){
     int y;
           cout<<"\n\t\t\t      PARCIAL 2 - PRACTICAS "<<endl;      
           cout<<"\n\t Todavia no hay practicas del 2ndo Parcial \n"<<endl;      
           cout<<"\t0.- Menu Anterior "<<endl;
            cout<<"\n Que No. de practica deseas abrir? : ";cin>>y;    
                  
            if( y == 0 )
                {    std::cin.clear();
                     system("cls");
                     Encabezado();
                     Menu();}  
           else{cout<<"Opcion no valida intente de nuevo "<<endl;
                cin>>y;
                  }
}


void Parcial3(){
     
     int y;
           cout<<"\n\t\t\t      PARCIAL 3 - PRACTICAS "<<endl;
               cout<<"\n\t Todavia no hay practicas del 3er Parcial \n"<<endl;      
           cout<<"\t 0.- Menu Anterior "<<endl;
            cout<<"\n Que No. de practica deseas abrir? : ";cin>>y;    
                  
            if( y == 0 )
                {    std::cin.clear();
                     system("cls");
                     Encabezado();
                     Menu();}  
           else{cout<<"Opcion no valida intente de nuevo "<<endl;
                cin>>y;
                  }
                  }

void Encabezado()
{ LogoEsime();
     cout<<""<<endl;
     Fecha(); //Libreria Propia, Agrega Dia Mes y Anio
     Datos("                ANALISIS NUMERICO",1,1); //Libreria datos Titulo, No de Practica y Programa
   }


void waitForLeftMouseClick()
{
    clearmouseclick(WM_LBUTTONDOWN);
    const int DELAY = 50; // Milliseconds of delay between checks
    int x, y;
    while (!ismouseclick(WM_LBUTTONDOWN))
        delay(DELAY);
    getmouseclick(WM_LBUTTONDOWN, x, y);
}


