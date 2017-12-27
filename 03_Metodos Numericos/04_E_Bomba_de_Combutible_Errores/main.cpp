#include <winbgim.h>
#include<stdlib.h>
#include <iostream>
#include <iomanip>
using namespace std;
double ErrorAleatorio (int n);
void waitForLeftMouseClick();

int main()
{
    //Erick Vazquez Gonzalez 
    int n,i;
    double x;
    cout<<"Cuantos Litros desea Surtir ?  "<<endl;
    cin>>n;
    
 double a;
 int g=0,t=0,p=0; //Contadores para las graficas 
         
    for(i=0;i<n;i++){
      
      double suma;
      
      double f = (double)rand() / RAND_MAX;  //Genera Error "Aleatorio"
      //a= 0.85 + f * (1.10 - 0.85); //Ganar ganar
      //a= 0.95 + f * (1.20 - 0.95); //Perder Perder
      a= 0.95 + f * (1.05 - 0.95); //Tablas
      
       cout << setprecision (3) << a<<endl; //Limita los Decimales a 2

      if( a < 0.99 )
       {g++;} //ganancia
      if( a > 0.99 && a < 1.01)
       {t++;} //tablas
      if( a > 1.01 )
       {p++;} //perdida
      
      x=(a/1); //Error Relativo Fraccionario
      suma+=x; //Suma de todos los litros  
      
cout<<"Litros Reales "<< suma <<endl;

cout<<"Ganancias: "<< g <<endl; 
cout<<"Perdidas: "<< p <<endl;
cout<<"Tablas: "<< t <<endl<<endl;
   } 
   
   system("pause");
   initwindow(500,400); //open a 400x300 graphics window
//bar3d(getmaxx()/3, getmaxy()-(getmaxy()/8), getmaxx()/2.5, getmaxy()/2.5, 25, 1);
bar3d(getmaxx()/3, getmaxy()-(getmaxy()/8)-(p), getmaxx()/2.5, getmaxy()-(getmaxy()/8), 25, 1);

bar3d(getmaxx()/10, getmaxy()-(getmaxy()/8)-(g), getmaxx()/6,  getmaxy()-(getmaxy()/8), 25, 1);

bar3d(getmaxx()-(getmaxy()/1.8), getmaxy()-(getmaxy()/8)-(t), getmaxx()-(getmaxy()/2.1),  getmaxy()-(getmaxy()/8), 25, 1);

bar3d(getmaxx()-(getmaxy()/4), getmaxy()-(getmaxy()/8)-(n), getmaxx()-(getmaxy()/6),  getmaxy()-(getmaxy()/8), 25, 1);

    // delete these lines and replace them with your own code:
    settextstyle(0,0,2);
    setcolor(RED);
    outtextxy(120,370,"PERDIDAS");
    setcolor(GREEN);
    outtextxy(0,350,"GANANCIAS");
    setcolor(BLUE);
    outtextxy(250,350,"TABLAS");
    setcolor(WHITE);
    outtextxy(380,370,"TOTAL");
                    
    while(!kbhit());     // wait for user to press a key
    waitForLeftMouseClick(); // use one or the other of these--not both

    closegraph();        //close graphics window
	return 0;
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
