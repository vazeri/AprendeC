#include <winbgim.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#define pi 3.1416
#include <math.h>

void waitForLeftMouseClick();
void Bicicleta(int maxx, int maxy);

int main(void)
{   
    int maxx, maxy, gdriver=DETECT, gmode=0;
    //Declaracion de variables
    initgraph(&gdriver, &gmode, "");
    setwindowtitle("Bicicleta");
    setbkcolor(12);
    maxx=getmaxx()/2;
    maxy=getmaxy()/2;
    //Abrir Ventana
        
    
    Bicicleta(maxx,maxy);
                
    waitForLeftMouseClick();
    closegraph();        //close graphics window
	return 0;
}

void Bicicleta(int maxx, int maxy)
{

     for(int i=0; i<150; i++)
    {      
            setfillstyle(1,0);
            setcolor(0);
            cleardevice();  
            
            //Silla
            ellipse(maxx-180+i,maxy-50,0,360,40,15);
            floodfill(maxx-170+i,maxy-50,0);
            ellipse(maxx-150+i,maxy-47,0,360,30,10);
            floodfill(maxx-130+i,maxy-50,0);
            bar(maxx-200+i,maxy-50,maxx-140+i,maxy-20);
            
            //Tuberia
            //setlinestyle(0,0,2);
            circle(maxx+i,maxy-60,10);
            floodfill(maxx+i,maxy-60,0);
            line(maxx-165+i,maxy+10,maxx+i,maxy+10);
            line(maxx-165+i,maxy-20,maxx-165+i,maxy+80);
            line(maxx-100+i,maxy+40,maxx-200+i,maxy+100);
            line(maxx-100+i,maxy+40,maxx+i,maxy+100);
            line(maxx+i,maxy-60,maxx+i,maxy+100);//TuboDel
            
            //RuedaTrasera
            circle(maxx-200+i,maxy+100,10);//CirculoInterior
            floodfill(maxx-200+i,maxy+100,0);
            circle(maxx-200+i,maxy+100,65);//RuedaInterior
            circle(maxx-200+i,maxy+100,70);//RuedaExterior
            
            //RuedaDelantera
            circle(maxx+i,maxy+100,10);//CirculoInterior
            floodfill(maxx+i,maxy+100,0);
            circle(maxx+i,maxy+100,65);//RuedaInterior
            circle(maxx+i,maxy+100,70);//RuedaExterior
            
            setfillstyle(11,0);
            bar(0,maxy+169,maxx+maxx,maxy+maxy);//Piso
            
            delay(0.1);
    }
    
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
