#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <winbgim.h>
#include <iostream>
#include "datos.h"

void Secuencia();
void SecuenciaA();
void SecuenciaB();
void repetir();
void waitForLeftMouseClick();
void Cuadrito();
void Rectangulo();
void Triangulo();
void Circulo();
void Pacman();
void Casita();
void Edificios();
void Edificio3D();

int main(void)
{
    int x;
    LogoEsime();
    cout<<""<<endl;
    Fecha(); //Libreria Propia, Agrega Dia Mes y Anio
    Datos("          ¿ Deseas graficar una figura ?",1,1);

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

    printf("Pulse cualquier tecla para Iniciar la secuencia de graficos \n\n");
    system("pause"); 
    Secuencia();
    repetir();
    return 0;
    getch();
}


void Secuencia()
{
     int maxx, maxy;
     maxx=900;
     maxy=500;
     //Declaracion de variables
     
     initwindow(900,500);//Tamaño de ventana
     
     setfillstyle(1,2);       
     bar(0,0,maxx,maxy);//Fondo
     //Marco   
     setfillstyle(8,1);
     rectangle(10,10,maxx-20,maxy-20);
     line(10,getmaxy()/2,getmaxx()-10,getmaxy()/2);
     line(getmaxx()/2,10,getmaxx()/2,getmaxy()-10);
     line(getmaxx()/4,10,getmaxx()/4,getmaxy()-10);
     line(getmaxx()-(getmaxx()/4),10,getmaxx()-(getmaxx()/4),getmaxy()-10);
     
     //Secuencia Superior
     //Barra
     delay(1000);
     setfillstyle(9,4);
     bar3d(getmaxx()/14,getmaxy()/16,getmaxx()/5,getmaxy()/2.5,0,1);
     
     //Barra 3D
     delay(1000);
     setfillstyle(9,4);
     bar3d(getmaxx()/3, getmaxy()/12, getmaxx()/2.5, getmaxy()/2.5, 30, 1);
     
     //Triangulo
     delay(1000);
     int points[]={560,50,630,200,480,200};
     drawpoly(3, points);
     fillpoly(3,points);
     
     //Circulo
     delay(1000);
     circle(775,130,85);
     
     //Secuencia Inferior
     setfillstyle(9,2);
     //Pacman
     delay(1000);
     arc(110, 365, 53, 360, 85);
     int points3[]={160,298,110,365,195,365};
     drawpoly(3, points3);

     //Casita
     delay(1000);
     int points2[]={280,440,280,340,350,290,410,340,410,440}; //triangulo
     drawpoly(5, points2);
     fillpoly(5,points2);
     
     //Tres Barras
     delay(1000);
     bar3d(getmaxx()-(getmaxx()/2.1), getmaxy()-(getmaxy()/2.5), getmaxx()-(getmaxx()/2.5), getmaxy()-(getmaxy()/10), 0, 1);
     bar3d(getmaxx()-(getmaxx()/3), getmaxy()-(getmaxy()/4), getmaxx()-(getmaxx()/2.5), getmaxy()-(getmaxy()/10), 0, 1);
     bar3d(getmaxx()-(getmaxx()/3), getmaxy()-(getmaxy()/3), getmaxx()-(getmaxx()/3.8), getmaxy()-(getmaxy()/10), 0, 1);
    
     //Barras 3D
     delay(1000);
     bar3d(getmaxx()-(getmaxx()/5), getmaxy()-(getmaxy()/2.5), getmaxx()-(getmaxx()/8), getmaxy()-(getmaxy()/10), 30, 1);
     bar3d(getmaxx()-(getmaxx()/18), getmaxy()-(getmaxy()/4), getmaxx()-(getmaxx()/8), getmaxy()-(getmaxy()/10), 30, 1);
     
     waitForLeftMouseClick(); // use one or the other of these--not both
     closegraph();
}

void SecuenciaA()
{
     int maxx, maxy;
     maxx=900;
     maxy=500;
     //Declaracion de variables
     
     initwindow(900,500);//Tamaño de ventana
     
     setfillstyle(1,2);       
     bar(0,0,maxx,maxy);//Fondo
     //Marco   
     setfillstyle(8,1);
     rectangle(10,10,maxx-20,maxy-20);
     line(10,getmaxy()/2,getmaxx()-10,getmaxy()/2);
     line(getmaxx()/2,10,getmaxx()/2,getmaxy()-10);
     line(getmaxx()/4,10,getmaxx()/4,getmaxy()-10);
     line(getmaxx()-(getmaxx()/4),10,getmaxx()-(getmaxx()/4),getmaxy()-10);
     bar(10,getmaxy()/2,maxx-20,maxy-20);
     settextstyle(10,0,7);
     outtextxy(110,320,"Primer Secuencia");
     
     //Secuencia Superior
     //Barra
     delay(1000);
     setfillstyle(9,4);
     bar3d(getmaxx()/14,getmaxy()/16,getmaxx()/5,getmaxy()/2.5,0,1);
     
     //Barra 3D
     delay(1000);
     setfillstyle(9,4);
     bar3d(getmaxx()/3, getmaxy()/12, getmaxx()/2.5, getmaxy()/2.5, 30, 1);
     
     //Triangulo
     delay(1000);
     int points[]={560,50,630,200,480,200};
     drawpoly(3, points);
     fillpoly(3,points);
     
     //Circulo
     delay(1000);
     circle(775,130,85);
     
     waitForLeftMouseClick(); // use one or the other of these--not both
     closegraph();
}

void SecuenciaB()
{
     int maxx, maxy;
     maxx=900;
     maxy=500;
     //Declaracion de variables
     
     initwindow(900,500);//Tamaño de ventana
     
     setfillstyle(1,2);       
     bar(0,0,maxx,maxy);//Fondo
     //Marco   
     setfillstyle(8,1);
     rectangle(10,10,maxx-20,maxy-20);
     line(10,getmaxy()/2,getmaxx()-10,getmaxy()/2);
     line(getmaxx()/2,10,getmaxx()/2,getmaxy()-10);
     line(getmaxx()/4,10,getmaxx()/4,getmaxy()-10);
     line(getmaxx()-(getmaxx()/4),10,getmaxx()-(getmaxx()/4),getmaxy()-10);
     bar(10,10,maxx-20,maxy/2);
     settextstyle(6,0,7);
     outtextxy(90,90,"Segunda Secuencia");
     
     //Secuencia Inferior
     setfillstyle(9,2);
     //Pacman
     delay(1000);
     arc(110, 365, 53, 360, 85);
     int points3[]={160,298,110,365,195,365};
     drawpoly(3, points3);
     
     //Casita
     delay(1000);
     int points2[]={280,440,280,340,350,290,410,340,410,440}; //triangulo
     drawpoly(5, points2);
     fillpoly(5,points2);
     
     //Tres Barras
     delay(1000);
     bar3d(getmaxx()-(getmaxx()/2.1), getmaxy()-(getmaxy()/2.5), getmaxx()-(getmaxx()/2.5), getmaxy()-(getmaxy()/10), 0, 1);
     bar3d(getmaxx()-(getmaxx()/3), getmaxy()-(getmaxy()/4), getmaxx()-(getmaxx()/2.5), getmaxy()-(getmaxy()/10), 0, 1);
     bar3d(getmaxx()-(getmaxx()/3), getmaxy()-(getmaxy()/3), getmaxx()-(getmaxx()/3.8), getmaxy()-(getmaxy()/10), 0, 1);
    
     //Barras 3D
     delay(1000);
     bar3d(getmaxx()-(getmaxx()/5), getmaxy()-(getmaxy()/2.5), getmaxx()-(getmaxx()/8), getmaxy()-(getmaxy()/10), 30, 1);
     bar3d(getmaxx()-(getmaxx()/18), getmaxy()-(getmaxy()/4), getmaxx()-(getmaxx()/8), getmaxy()-(getmaxy()/10), 30, 1);
     
     waitForLeftMouseClick(); // use one or the other of these--not both
     closegraph();
}

void repetir()
{
     int Option;
     
     cout<<"¿Cual secuencia desea repetir?"<<endl;
     cout<<"1.- Primer Secuencia"<<endl;
     cout<<"2.- Segunda Secuencia"<<endl;
     cout<<"3.- Ambas Secuencias"<<endl;
     cout<<"4.- Ninguna"<<endl;
     cin>>Option;
     system("pause");
      
     if(Option==1)
     {
                  SecuenciaA();
                  repetir();
     }
     if(Option==2)
     {
                  SecuenciaB();
                  repetir();
     }
     if(Option==3)
     {
                  Secuencia();
                  repetir();
     }
     
     
 /*    
int x,y;
printf("Deseas Repetir la Secuencia con todos los Graficos? (S/N): ");cin>>x;
if(x=='S' || x=='s')
  {
  secuencia();       
  }
else
{
printf("Deseas ver una figura en especifico?, que Figura?: \n");
cout<<"1.- Cuadrito"<<endl;
cout<<"2.- Rectangulo 3D"<<endl;
cout<<"3.- Triangulo"<<endl;
cout<<"4.- Circulo"<<endl;
cout<<"5.- Pacman"<<endl;
cout<<"6.- Casita"<<endl;
cout<<"7.- Edificios"<<endl;
cout<<"8.- Edificio 3D"<<endl;


cout<<"Elija una opcion "<<endl;
cin>>y;

system("pause");

if(y==1){
 Cuadrito();
 repetir();
 }
if(y==2){
  Rectangulo();
  repetir();
 }
 
if(y==3){
       Triangulo();
       repetir();
 }
if(y==4){
      Circulo();
       repetir();
 }
if(y==5){
        Pacman();
       repetir();
 }
if(y==6){
       Casita();
       repetir();
 }
if(y==7){
       Edificios();
       repetir();
 }     
if(y==8){
       Edificio3D();
       repetir();
 }        
          
}*/
}


void Cuadrito()
{
initwindow(900,500);  
delay(500);
setfillstyle(3, getmaxcolor());
delay(500);
bar3d(getmaxx()/14,getmaxy()/16,getmaxx()/5,getmaxy()/2.5,0,1);
     waitForLeftMouseClick(); // use one or the other of these--not both
     closegraph();
     
     }
    
void Rectangulo(){
     initwindow(900,500);  
    delay(500);
setfillstyle(3, getmaxcolor());
delay(500);
bar3d(getmaxx()/3, getmaxy()/12, getmaxx()/2.5, getmaxy()/2.5, 30, 1);
     waitForLeftMouseClick(); // use one or the other of these--not both
     closegraph();
     }
     
void Triangulo(){
          initwindow(900,500);  
     delay(500);
int points[]={560,50,630,200,480,200}; //triangulo
delay(500);
drawpoly(3, points);
delay(500);
fillpoly(3,points);
     waitForLeftMouseClick(); // use one or the other of these--not both
     closegraph();
     }
     
void Circulo(){
          initwindow(900,500);  
     delay(500);
int points2[]={280,440,280,340,350,290,410,340,410,440}; //triangulo
delay(500);
drawpoly(5, points2);
delay(500);
fillpoly(5,points2);  //casita
     waitForLeftMouseClick(); // use one or the other of these--not both
     closegraph();
     }

     
void Pacman(){
          initwindow(900,500);  
        setcolor(WHITE);
delay(500);
   circle(110,365,85); //Circulo
delay(500);
   floodfill(110,365,WHITE); // ok 

setcolor(BLACK); //cIRCULO SUP DERECHA
delay(500);
setfillstyle(SOLID_FILL, BLACK);
delay(500);
   int points5[]={110,360,215,360,215,250};
delay(500);
     fillpoly(3, points5);
     waitForLeftMouseClick(); // use one or the other of these--not both
     closegraph();
     }

     
void Casita(){
          initwindow(900,500);  
     delay(500);
int points2[]={280,440,280,340,350,290,410,340,410,440}; //triangulo
delay(500);
drawpoly(5, points2);
delay(500);
fillpoly(5,points2);  //casita
     waitForLeftMouseClick(); // use one or the other of these--not both
     closegraph();
     }


void Edificios(){
          initwindow(900,500);  
delay(500);
bar3d(getmaxx()-(getmaxx()/3), getmaxy()-(getmaxy()/3), getmaxx()-(getmaxx()/4), getmaxy()-(getmaxy()/10), 0, 1);
delay(500);
bar3d(getmaxx()-(getmaxx()/3), getmaxy()-(getmaxy()/4), getmaxx()-(getmaxx()/2.5), getmaxy()-(getmaxy()/10), 0, 1);
delay(500);
bar3d(getmaxx()-(getmaxx()/2), getmaxy()-(getmaxy()/2.5), getmaxx()-(getmaxx()/2.5), getmaxy()-(getmaxy()/10), 0, 1);     
     waitForLeftMouseClick(); // use one or the other of these--not both
     closegraph();
     }

     
void Edificio3D(){
          initwindow(900,500);  
     delay(500);
bar3d(getmaxx()-(getmaxx()/5), getmaxy()-(getmaxy()/2.5), getmaxx()-(getmaxx()/8), getmaxy()-(getmaxy()/10), 30, 1);
delay(500);
bar3d(getmaxx()-(getmaxx()/18), getmaxy()-(getmaxy()/4), getmaxx()-(getmaxx()/8), getmaxy()-(getmaxy()/10), 30, 1);
     waitForLeftMouseClick(); // use one or the other of these--not both
     closegraph();
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


