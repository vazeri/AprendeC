#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <winbgim.h>
#include <iostream>

void waitForLeftMouseClick();

void Graficos2D(){      

initwindow(900,500);       
//Marco   
line(0,getmaxy()/2,getmaxx(),getmaxy()/2);
delay(500);
line(getmaxx()/2,0,getmaxx()/2,getmaxy());
delay(500);
line(getmaxx()/4,0,getmaxx()/4,getmaxy());
delay(500);
line(getmaxx()-(getmaxx()/4),0,getmaxx()-(getmaxx()/4),getmaxy());
delay(500);
//1
delay(500);
setfillstyle(3, getmaxcolor());
delay(500);
bar3d(getmaxx()/14,getmaxy()/16,getmaxx()/5,getmaxy()/2.5,0,1);
//2
delay(500);
setfillstyle(3, getmaxcolor());
delay(500);
bar3d(getmaxx()/3, getmaxy()/12, getmaxx()/2.5, getmaxy()/2.5, 30, 1);
//3
delay(500);
int points[]={560,50,630,200,480,200}; //triangulo
delay(500);
drawpoly(3, points);
delay(500);
fillpoly(3,points);
//4

delay(500);
int points2[]={280,440,280,340,350,290,410,340,410,440}; //triangulo
delay(500);
drawpoly(5, points2);
delay(500);
fillpoly(5,points2);  //casita
//5
   setcolor(WHITE); //cIRCULO SUP DERECHA
delay(500);
   circle(780,120,85);
delay(500);
   floodfill(780,120,WHITE);
//7
delay(500);
bar3d(getmaxx()-(getmaxx()/3), getmaxy()-(getmaxy()/3), getmaxx()-(getmaxx()/4), getmaxy()-(getmaxy()/10), 0, 1);
delay(500);
bar3d(getmaxx()-(getmaxx()/3), getmaxy()-(getmaxy()/4), getmaxx()-(getmaxx()/2.5), getmaxy()-(getmaxy()/10), 0, 1);
delay(500);
bar3d(getmaxx()-(getmaxx()/2), getmaxy()-(getmaxy()/2.5), getmaxx()-(getmaxx()/2.5), getmaxy()-(getmaxy()/10), 0, 1);
//8
delay(500);
bar3d(getmaxx()-(getmaxx()/5), getmaxy()-(getmaxy()/2.5), getmaxx()-(getmaxx()/8), getmaxy()-(getmaxy()/10), 30, 1);
delay(500);
bar3d(getmaxx()-(getmaxx()/18), getmaxy()-(getmaxy()/4), getmaxx()-(getmaxx()/8), getmaxy()-(getmaxy()/10), 30, 1);
//6
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

void waitForLeftMouseClick()
{
    clearmouseclick(WM_LBUTTONDOWN);
    const int DELAY = 50; // Milliseconds of delay between checks
    int x, y;
    while (!ismouseclick(WM_LBUTTONDOWN))
        delay(DELAY);
    getmouseclick(WM_LBUTTONDOWN, x, y);
}

