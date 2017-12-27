#include <winbgim.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#define pi 3.1416
#include <math.h>

void waitForLeftMouseClick();
void Monociclo(int maxx, int maxy);
void EjemploRueda(void);
int main(void)
{   
    int maxx, maxy, gdriver=DETECT, gmode=0;
    //Declaracion de variables
    initgraph(&gdriver, &gmode, "");
    setwindowtitle("Monociclo");
    setbkcolor(14);
    maxx=getmaxx()/2;
    maxy=getmaxy()/2;
    //Abrir Ventana
        
    
    Monociclo(maxx,maxy);
    //EjemploRueda();
                
    waitForLeftMouseClick();
    closegraph();        //close graphics window
	return 0;
}

void Monociclo(int maxx, int maxy)
{

     for(int i=0; i<430; i++)
    {      
            setfillstyle(1,0);
            setcolor(0);
            cleardevice();  
            
            //Silla
            ellipse(maxx-210+i,maxy-40,0,360,40,15);
            floodfill(maxx-200+i,maxy-40,0);
            ellipse(maxx-180+i,maxy-37,0,360,30,10);
            floodfill(maxx-160+i,maxy-40,0);
            bar(maxx-230+i,maxy-40,maxx-170+i,maxy-20);
            
            //Tubo
            //setlinestyle(0,0,2);
            line(maxx-200+i,maxy-20,maxx-200+i,maxy+100);
            
            //RuedaCompleta
            circle(maxx-200+i,maxy+100,10);//CirculoInterior
            floodfill(maxx-200+i,maxy+100,0);
            circle(maxx-200+i,maxy+100,75);//RuedaInterior
            circle(maxx-200+i,maxy+100,80);//RuedaExterior
            
            setfillstyle(11,0);
            bar(0,maxy+180,maxx+maxx,maxy+maxy);//Piso
            
            delay(0.1);
    }
    
}

void EjemploRueda(void)
{
    float angulo, desplazamientoX; 
    const float conv = pi/180;
    //Variables
     
    for( float angulo = 0, desplazamientoX = 0 ; angulo <= 360*3 ; angulo++ , desplazamientoX+=0.5)
        {
           int x = 40 + desplazamientoX; //coordenada X del circulo 
           int y = 300;  //Coordenada Y del circulo
          
          setcolor(0);
          
          circle(int(x),int(y),100);//Hacemos que el circulo se mueva
          line(int(x),int(y), int(x) + int(100*cos(angulo*conv)),int(y)+ int(100*sin(angulo*conv)));
          //linea qoe va del centro del circulo(40+int(velocidad),300) a un punto de la circunferencia con el desplazamiento
          //correspondiente que tendra el centro del circulo y las componentes polares correspondientes a cada coordenada (x,y)
          //haciendo variar el angulo para que de el efecto deseado.
          delay(1);
          
          setcolor(14);
          circle(int(x),int(y),100);
          line(int(x),int(y), int(x) + int(100*cos(angulo*conv)),int(y)+ int(100*sin(angulo*conv)));
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
