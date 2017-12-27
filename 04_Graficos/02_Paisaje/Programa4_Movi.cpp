#include <winbgim.h>
void casita(int x,int y);
void hojas(int x,int y);
void tronco(int x,int y);
void lomita();
void lomitaS();
void sol(int x,int y);
void luna(int x,int y);
//void pajaros(int x,int y);
void luna1(int x,int y);
void nubes(int x,int y);
void estrellas(int x,int y);
void sombra(int x,int y);
static int sx=150,sy=250;  //Luna
static int lx=160,ly=240; //Sombra de la luna
static int xx=140,xy=240; //Sombra de la luna2 (detras de la luna)
static int px=150,py=250;  //Luna


int main()
{
  int gm,gd=DETECT,i,j;
  initgraph(&gd,&gm,"");
  //Erick Vazquez Gonzalez
  //Carlos Muñoz Rubio

for(i=0;i<300;i++)
{ 

  sombra(xx++,xy--);   //Reduce el Parpadeo a comparacion del    cleardevice 
  luna(sx++,sy--);
  luna1(lx++,ly--);
  lomita();
  //Arboles de izquierda a derecha
  tronco(80,300);//1
  hojas(80,300); 
  tronco(250,250);//2
  hojas(250,250);
  tronco(610,180);//3
  hojas(610,180);
  tronco(585,390);//4
  hojas(585,390);

  //setcolor(6); //Casa Cafe
  //casita(120,300);
  setcolor(3); // Casa Azul
  casita(290,220);
  //setcolor(5);  //Casa morada
  //casita(450,380);

  nubes(20,30); //Varias elipeses hacen una nube
  nubes(80,70);
  nubes(340,150);
  nubes(450,180);
  nubes(480,120);

  setcolor(15);
  estrellas(20,20);
  delay(50);
  //cleardevice();         //Causa el parpadeo 
}

cleardevice();

for(i=0;i<300;i++) //SOL
{ 
                   
  setfillstyle(1,BLUE); //FONDO
bar(getmaxx(), getmaxy(), getmaxx(), getmaxy());

  sol(px++,py--);
  lomitaS();
  //Arboles de izquierda a derecha
  tronco(80,300);//1
  hojas(80,300); 
  tronco(250,250);//2
  hojas(250,250);
  tronco(610,180);//3
  hojas(610,180);
  tronco(585,390);//4
  hojas(585,390);

  //setcolor(6); //Casa Cafe
  //casita(120,300);
  setcolor(0); // Casa Azul
  casita(290,220);
  //setcolor(5);  //Casa morada
  //casita(450,380);

  nubes(20,30); //Varias elipeses hacen una nube
  nubes(80,70);
  nubes(340,150);
  nubes(450,180);
  nubes(480,120);

  setcolor(15);
  delay(100);
  
  //cleardevice();         //Causa el parpadeo 
}



  
closegraph();
return 0;
}

void casita(int x,int y) //Forma la casita con lineas 
{
    line(x,y,x+100,y);
    line(x+20,y+50,x+120,y+50);
    line(x,y,x+20,y+50);
    line(x+100,y,x+120,y+50);
    line(x,y,x-20,y+50);
    line(x-15,y+40,x-15,y+80);
    line(x+15,y+40,x+15,y+90);
    line(x+115,y+50,x+115,y+90);
    line(x+15,y+90,x+115,y+90);
    line(x-15,y+80,x+15,y+90);
    line(x-5,y+45,x-5,y+83);
    line(x+5,y+47,x+5,y+87);
    line(x-5,y+45,x+5,y+47);
    line(x+45,y+60,x+85,y+60);
    line(x+45,y+80,x+85,y+80);
    line(x+45,y+60,x+45,y+80);
    line(x+85,y+60,x+85,y+80);
}

void hojas(int x,int y)
{
    setcolor(2);
    setfillstyle(6,2);
    fillellipse(x+5,y-80,40,90);
}

void tronco(int x,int y)
{
    setcolor(6);
    setfillstyle(1,8);
    bar3d(x,y,x+10,y+120,2,1);
}

void luna(int x,int y) //el sol es lo blanco 
{
    setcolor(15);
    setfillstyle(1,15);
    fillellipse(x,y,40,40);
}

void luna1(int x,int y)
{
    setcolor(0);
    setfillstyle(1,0);
    fillellipse(x,y,40,40);
}

void sombra(int x,int y)
{
    setcolor(0);
    setfillstyle(1,0);
    fillellipse(x,y,60,60);
}

void lomita()
{
    setcolor(8);
    line(0,300,100,250);
    line(110,250,250,300);
    line(260,300,285,302);
    line(405,300,getmaxx(),250);

}

void lomitaS()
{
    setcolor(8);
    setfillstyle(11,2);
    bar(0,310,getmaxx(),getmaxy());

/*
void pajaros(int x, int y)
{
    setcolor(15);
    line(x,y,x+10,y);
    line(x+15,y,x+25,y);
    line(x+9,y+5,x+16,y+5);
    line(x+7,y,x+11,y+5);
    line(x+18,y,x+14,y+5);
}
*/
}
void nubes(int x,int y)
{
    setcolor(8);
    setfillstyle(1,8);
    fillellipse(x+60,y-5,90,40);
}


void estrellas(int x,int y)
{
    outtextxy(70,100,"*");
    outtextxy(10,80,"*");
    outtextxy(220,20,"*");
    outtextxy(320,80,"*");
    outtextxy(420,15,"*");
    outtextxy(10,280,"*");
    outtextxy(30,150,"*");
    outtextxy(130,180,"*");
    outtextxy(180,100,"*");
    outtextxy(200,230,"*");
    outtextxy(330,180,"*");
    outtextxy(380,70,"*");
    outtextxy(420,190,"*");
    outtextxy(510,230,"*");
    outtextxy(410,250,"*");
    outtextxy(530,40,"*");

}

void sol(int x,int y) //el sol es lo blanco 
{
    setcolor(3);
    setfillstyle(1,3);
    fillellipse(x,y,990,990);
    
    setcolor(14);
    setfillstyle(1,14);
    fillellipse(x,y,70,70);
}
