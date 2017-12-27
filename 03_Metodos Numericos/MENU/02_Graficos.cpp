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
void ElipseV(); 
void ElipseH();
void Casita();
void LineaA();
void LineaB(); 

int main(void)
{

       initwindow(50,50);   
  int midx, midy;
    midx = getmaxx();
    midy = getmaxy();

    setfillstyle(1,WHITE); //FONDO
    setfillstyle(1, BLUE); //IZQUIERDA
    setfillstyle(1,BLACK); //FOOTER;

    setfillstyle(1,BLACK); //SUB HEADER
    setfillstyle(1,BLUE); //HEADER
    setfillstyle(1,RED); //DIVISOR

    setfillstyle(2,RED); //CUADRITO
    bar(0, 0, midx/7, midy/7); 
    setcolor(RED);
    
    setcolor(WHITE);
    setfillstyle(1,WHITE);
    setcolor(WHITE);

    closegraph();
    Secuencia();
    return 0;
}    


void Secuencia()
{
     int maxx, maxy;
     maxx=900;
     maxy=500;
     //Declaracion de variables
     
     initwindow(900,500);//Tamaño de ventana
     
     setfillstyle(1,7);       
     bar(0,0,maxx,maxy);//Fondo
     //Marco   
     setfillstyle(1,0);
     rectangle(10,10,maxx-20,maxy-20);
     line(10,getmaxy()/2,getmaxx()-10,getmaxy()/2);
     line(getmaxx()/2,10,getmaxx()/2,getmaxy()-10);
     line(getmaxx()/4,10,getmaxx()/4,getmaxy()-10);
     line(getmaxx()-(getmaxx()/4),10,getmaxx()-(getmaxx()/4),getmaxy()-10);
     
     //Secuencia Superior
     //Linea Izquierda
     delay(1000);
     line(200,30,35,220);
     
     //Linea Izquierda
     delay(1000);
     line(245,30,420,220);
     
     //Elipse izquierda
     delay(1000);
     ellipse(560,130,0,360,60,80);
     floodfill(560,130, 0);
     
     //Elipse drecha
     delay(1000);
     ellipse(775, 130, 0, 360, 80, 60);
     floodfill(775,130, 0);
     
     //Secuencia Inferior
     setfillstyle(1,0);
     //Barra
     delay(1000);
     bar3d(getmaxx()/14,getmaxy()-(getmaxy()/2.5),getmaxx()/5,getmaxy()-(getmaxy()/10),0,1);
     
     //Casita
     delay(1000);
     int points2[]={260,440,260,340,335,290,410,340,410,440}; //triangulo
     drawpoly(5, points2);
     fillpoly(5,points2);
     
     //Triangulo
     delay(1000);
     int points[]={560,290,630,440,480,440};
     drawpoly(3, points);
     fillpoly(3,points);
     
     //Barras 3D
     delay(1000);
     bar3d(getmaxx()-(getmaxx()/5), getmaxy()-(getmaxy()/2.5), getmaxx()-(getmaxx()/8), getmaxy()-(getmaxy()/10), 30, 1);

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

     setfillstyle(1,7);       
     bar(0,0,maxx,maxy);//Fondo
     //Marco   
     setfillstyle(1,0);
     rectangle(10,10,maxx-20,maxy-20);
     line(10,getmaxy()/2,getmaxx()-10,getmaxy()/2);
     line(getmaxx()/2,10,getmaxx()/2,getmaxy()-10);
     line(getmaxx()/4,10,getmaxx()/4,getmaxy()-10);
     line(getmaxx()-(getmaxx()/4),10,getmaxx()-(getmaxx()/4),getmaxy()-10);
     settextstyle(10,0,7);
     outtextxy(110,320,"Primer Secuencia");
     
     //Secuencia Superior
     //Linea Izquierda
     delay(1000);
     line(200,30,35,220);
     
     //Linea Izquierda
     delay(1000);
     line(245,30,420,220);
     
     //Elipse izquierda
     delay(1000);
     ellipse(560,130,0,360,60,80);
     floodfill(560,130, 0);
     
     //Elipse drecha
     delay(1000);
     ellipse(775, 130, 0, 360, 80, 60);
     floodfill(775,130, 0);
     
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
     
     setfillstyle(1,7);       
     bar(0,0,maxx,maxy);//Fondo
     //Marco   
     setfillstyle(1,0);
     rectangle(10,10,maxx-20,maxy-20);
     line(10,getmaxy()/2,getmaxx()-10,getmaxy()/2);
     line(getmaxx()/2,10,getmaxx()/2,getmaxy()-10);
     line(getmaxx()/4,10,getmaxx()/4,getmaxy()-10);
     line(getmaxx()-(getmaxx()/4),10,getmaxx()-(getmaxx()/4),getmaxy()-10);
     settextstyle(6,0,7);
     outtextxy(90,90,"Segunda Secuencia");
     
     //Secuencia Inferior
     setfillstyle(1,0);
     //Barra
     delay(1000);
     bar3d(getmaxx()/14,getmaxy()-(getmaxy()/2.5),getmaxx()/5,getmaxy()-(getmaxy()/10),0,1);
     
     //Casita
     delay(1000);
     int points2[]={260,440,260,340,335,290,410,340,410,440}; //triangulo
     drawpoly(5, points2);
     fillpoly(5,points2);
     
     //Triangulo
     delay(1000);
     int points[]={560,290,630,440,480,440};
     drawpoly(3, points);
     fillpoly(3,points);
     
     //Barras 3D
     delay(1000);
     bar3d(getmaxx()-(getmaxx()/5), getmaxy()-(getmaxy()/2.5), getmaxx()-(getmaxx()/8), getmaxy()-(getmaxy()/10), 30, 1);
     
     waitForLeftMouseClick(); // use one or the other of these--not both
     closegraph();
}

void repetir()
{
     int Option;
     
     cout<<"¿Cual secuencia desea repetir?"<<endl;
     cout<<"1.- Primer Secuencia"<<endl;
     cout<<"2.- Segunda Secuencia"<<endl;
     cout<<"3.- Ambas Secuencias"<<endl<<endl;
     cout<<"O desea repetir una secuencia en especifico?"<<endl;
     cout<<"4.- Rectangulo 2D"<<endl;
     cout<<"5.- Rectangulo 3D"<<endl;
     cout<<"6.- Triangulo"<<endl;
     cout<<"7.- Elipse Vertical"<<endl;
     cout<<"8.- Elipse Horizontal"<<endl;
     cout<<"9.- Casita"<<endl;
     cout<<"10.- Linea A"<<endl;
     cout<<"11.- Linea B"<<endl;
     cout<<"12.- Regresar al Parcial 1"<<endl;
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
     if(Option==4)
     {
                  Cuadrito();
                  repetir();
     }
     if(Option==5)
     {
                  Rectangulo();
                  repetir();
     }
     if(Option==6)
     {
                  Triangulo();
                  repetir();
     }
     if(Option==7)
     {
                  ElipseV();
                  repetir();
     }
     if(Option==8)
     {
                  ElipseH();
                  repetir();
     }
     if(Option==9)
     {
                  Casita();
                  repetir();
     }
     if(Option==10)
     {
                  LineaA();
                  repetir();
     }     
     if(Option==11)
     {
                  LineaB();
                  repetir();
     }
     if(Option==11)
     {
                  system("Menu.exe");
     }
}


void Cuadrito()
{
     initwindow(300,400);  
     setfillstyle(1,7);       
     bar(0,0,300,400);//Fondo
     rectangle(10,10,280,380);
     delay(1000);
     setfillstyle(1, 0);
     bar3d(30,30,260,360,0,1);
     waitForLeftMouseClick(); // use one or the other of these--not both
     closegraph();
}
    
void Rectangulo()
{
     initwindow(300,400);  
     setfillstyle(1,7);       
     bar(0,0,300,400);//Fondo
     rectangle(10,10,280,380);
     delay(1000);
     setfillstyle(1, 0);
     bar3d(30,60,200,360,50, 1);
     waitForLeftMouseClick(); // use one or the other of these--not both
     closegraph();
}
     
void Triangulo()
{ 
     initwindow(300,400);  
     setfillstyle(1,7);       
     bar(0,0,300,400);//Fondo
     rectangle(10,10,280,380);
     delay(1000);
     setfillstyle(1, 0);
     int points[]={140,50,40,320,250,320}; //triangulo
     drawpoly(3, points);
     fillpoly(3,points);
     waitForLeftMouseClick(); // use one or the other of these--not both
     closegraph();
}
     
void ElipseV()
{
     initwindow(300,400);  
     setfillstyle(1,7);       
     bar(0,0,300,400);//Fondo
     rectangle(10,10,280,380);
     delay(1000);
     setfillstyle(1, 0);
     ellipse(140,200,0,360,100,120);
     floodfill(140,200, 0);
     waitForLeftMouseClick(); // use one or the other of these--not both
     closegraph();
}

void ElipseH()
{
     initwindow(300,400);  
     setfillstyle(1,7);       
     bar(0,0,300,400);//Fondo
     rectangle(10,10,280,380);
     delay(1000);
     setfillstyle(1, 0);
     ellipse(140, 200, 0, 360, 120, 100);
     floodfill(140,200, 0);
     waitForLeftMouseClick(); // use one or the other of these--not both
     closegraph();
}
     
void Casita()
{
     initwindow(300,400);  
     setfillstyle(1,7);       
     bar(0,0,300,400);//Fondo
     rectangle(10,10,280,380);
     delay(1000);
     setfillstyle(1, 0);
     int points2[]={20,350,20,180,140,60,270,180,270,350};
     drawpoly(5, points2);
     fillpoly(5,points2);
     waitForLeftMouseClick(); // use one or the other of these--not both
     closegraph();
}


void LineaA()
{
     initwindow(300,400);  
     setfillstyle(1,7);       
     bar(0,0,300,400);//Fondo
     rectangle(10,10,280,380);
     delay(1000);
     line(40,360,250,40);
     waitForLeftMouseClick(); // use one or the other of these--not both
     closegraph();
}

void LineaB()
{
     initwindow(300,400);  
     setfillstyle(1,7);       
     bar(0,0,300,400);//Fondo
     rectangle(10,10,280,380);
     delay(1000);
     line(40,40,250,360);
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


