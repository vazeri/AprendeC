#ifndef libreria
#define libreria
#include <conio.h>
#include<stdio.h>
#include<time.h>
#include<iostream>
#include<string>
#define pi 3.1416
#include <math.h>
#include <winbgim.h>
#include<stdlib.h>
#include <iomanip>
#define L 10
#define H L
using namespace std;

void waitForLeftMouseClick();
void Secuencia();
void Secuencia3D();
int portada(); 
void ElipseH();
void Casita();
void LineaA();
void LineaB(); 
void Monociclo(int maxx, int maxy);
void EjemploRueda(void);
void Bicicleta(int maxx, int maxy);
void casita(int x,int y);
void hojas(int x,int y);
void tronco(int x,int y);
void lomita();
void lomitaS();
void sol(int x,int y);
void luna(int x,int y);
 void luna1(int x,int y);
void nubes(int x,int y);
void estrellas(int x,int y);
void sombra(int x,int y);
static int sx=150,sy=250;  //Luna
static int lx=160,ly=240; //Sombra de la luna
static int xx=140,xy=240; //Sombra de la luna2 (detras de la luna)
static int px=150,py=250;  //Luna
double ErrorAleatorio (int n);
int Ord,maxx,maxy,gdriver,gmode;
double a,b,Limites,Xr,A,B,F,Ep;
double Func[1000], Derivada[1000];
//Varables universales
void Bisseccion(void);
void Obtener_Funcion(void);
double EvaluarF(double &X);
void Iterar(double &NA,double &NB);
void Iteraciones(void);
void Identificar(double &A, double &Xr);
void Xr_Inicial(void);
void ErrorPorcentual(double &Xr, double &Xtem);


/////////////////////////////////////////////////// GASOLINA

int portada(){

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
    
    outtextxy(30,670,"Profesor: Jorge Anzaldo");
    outtextxy(400,20,"Grupo: 4CV4");
    outtextxy(40,440,"Fecha: 14 Nov 2012 ");

    setfillstyle(1,WHITE);
    setcolor(WHITE);
    
    while(!kbhit());     // wait for user to press a key
  //  waitForLeftMouseClick();   
    closegraph();
    }
//////////////////////////////////////////////////////////////////////////
/*
int interpolacion(){
    //Se recomienda usar un maximo de 4 diferencias debido al tamaño de la ventana
    float H,x[10],y[15][15]; //Reserva espacio en memoria
    int n,i,j;  cout<<"Entre el Numero de PARES (X,Y) de Datos : ";
    cin>>n;
    
    for(i = 0;i<n;i++){
            cout<<" X"<<i<<" Y"<<i<<endl;; 
            scanf("%f %f",&x[i],&y[i][0]); //ordena los valores en X y Y
    }
    
    //Tabla de diferencias hacia adelante
    for(j=1;j<n;j++)
        for(i=0;i<(n-j);i++)
            y[i][j] = y[i+1][j-1] - y[i][j-1];
    
    cout<<"\n***********Tabla de diferencias hacia adelante ***********\n"<<endl;
    //printf ("%c",127);
    printf ("i\tXi\t%cYi1\t%cYi2\t%cYi3\t%cYi4\t%cYi5\t%cYi6\t%cYi7",127,127,127,127,127,127,127);
    
    cout<<"\n------------------------------------------------------------------------------"<<endl;
    for(i=0;i<n;i++)
    {
        printf("%d\t%.3f",i,x[i]);        //%d = No entero %f, flotante 
        for(j=0;j<(n-i);j++)
            printf("\t%.4f",y[i][j]);
        cout<<"\n";
    }
    
//Tabla dferencias hacia atras
    for(j=1;j<n;j++)
    //para j = 0 se toma como inicial asi que tomamos j=1
        for(i=n-1;i>(j-1);i--)
        y[i][j] = y[i][j-1] - y[i-1][j-1];
    
    cout<<"\n***********Tabla de diferencias hacia atras ***********\n\n";
    printf ("i\tXi\t%cYi1\t%cYi2\t%cYi3\t%cYi4\t%cYi5\t%cYi6\t%cYi7",127,127,127,127,127,127,127);
    cout<<"\n------------------------------------------------------------------------------"<<endl;
    
    for(i=0;i<n;i++) //Invierte e Imprime los Resultados
    {//AQUI ESTA EL ERROR
        cout<<i;
        for(j=0;j<=i;j++)
        //printf("%d\t%.3f",i,y[i][j]);
printf("\t%.3f",y[i][j]);
        cout<<"\n";
    }
    
    H=x[1]-x[0];
    cout<<"\nEl valor de H es de: "<<H<<endl; //
 	system("pause");  
     return 0;

}

//////////////////////////////////////////////////////////////////////////

int minimos(){
    
int i,N;  
float x[50],fx[50],xy[50],x2[50],Newy[50]; //Reserva espacio en memoria
float sx,sy=0,sxy=0,sx2, M, B,xm,ym;
  
cout<<"\nIntrodusca el No de Eventos Pares (X,Y): ";cin>>N;
cout<<"\nIntrodusca los datos que se piden"<<endl;

for (i=0;i<N;i++) //Guarda los puntos iniciales
    {
    cout<<"\n";
    cout<<"   X"<<i+1<<":";
    cin>>x[i];
    cout<<"   Y"<<i+1<<":";
    cin>>fx[i];
    }

for (i=0;i<N;i++)
    {
    xy[i]=x[i]*fx[i];
    x2[i]=x[i]*x[i];
    sx+=x[i];       //Suma de X
    sy+=fx[i];      //Suma de Y
        
        sxy+=xy[i]; //Suma de X*Y 
        sx2+=x2[i]; //Suma de X^2
    }
    xm=sx/N;
    ym=sy/N;
  
    cout<<"N\tX\t\tY\t\tXY\t\tX^2"<<endl;
    cout<<"------------------------------------------------------------------"<<endl;
    for (i=0;i<N;i++)
    cout<<i<<"\t"<<x[i]<<"\t\t"<<fx[i]<<"\t\t"<<xy[i]<<"\t\t"<<x2[i]<<"\t\t"<<endl;
    cout<<"-------------------------------------------------------------------"<<endl;
    
    cout<<"\t"<<sx<<"\t\t"<<sy<<"\t\t"<<sxy<<"\t\t"<<sx2<<endl;
    
    M=((N*sxy)-(sx*sy))/((N*sx2)-(sx*sx));

    B=((sy)-(M*sx))/(N);
    cout<<"\n\n";     
    
    cout<<" El valor de la pendiente es : "<<M<<endl;
    cout<<" El valor de B es : "<<B<<endl<<endl;    
    
    cout<<"El Nuevo valor de Y es: "<<"y = "<<M<<"x + ( "<<B<<" )"<<endl;
    
    cout<<"\n Evaluando y en los valores de X \n " <<endl;
    
    
    cout<<"X \t Y(x) \n "<<endl;
   
    for (i=0;i<N;i++)
    {
    Newy[i]=B+(M*x[i]);
    cout<<x[i]<<"\t"<<Newy[i]<<endl;
    }
     cout<<"\n\n";
    
initwindow(500,500);       
//Marco   
setfillstyle(1,WHITE);
  setcolor(DARKGRAY); //Gris EJES X Y
line(0,getmaxy()/2,getmaxx(),getmaxy()/2);

line(getmaxx()/2,0,getmaxx()/2,getmaxy());

  setcolor(WHITE); 
//Graficando con circulos
 for (i=0;i<N;i++)
    {
   circle((getmaxx()/2)+x[i]*10,(getmaxy()/2)-Newy[i]*10,3); //Circulo X Y y Radio
   delay(200);
   if(i==N-1)
   {
  line((getmaxx()/2),(getmaxy()/2),(getmaxx()/2)+x[i]*10,(getmaxy()/2)-Newy[i]*10);    
   }
}
  //while(!kbhit());     // wait for user to press a key
    waitForLeftMouseClick(); // use one or the other of these--not both
    closegraph();        //close graphics window
	//return 0;
   }
*/
//////////////////////////////////////////////////////////////////////////

int sneidel(){
float A[L][H],X[L],CX[L],C[L];
	float e,f;
	int i,n,x,y;

		cout<<"       \t  GAUSS SEIDEL  "<<endl;
        cout<<"\n\nDe cuantas incognitas es el sistema?: ";
		
        cin>>n;
		for(x=0;x<n;x++)
		{
		      	CX[x]=0;
		    	X[x]=0;
		}
		for(y=0;y<n;y++)
		{
            cout<<"\nEcuacion "<<y+1<<":"<<endl;            
			for(x=0;x<n;x++)
			{
				cout<<"E["<<y+1<<"]["<<x+1<<"]= ";
                cin>>e;
				A[y][x]=e;
			}
			cout<<"C["<<y+1<<"]= ";
			cin>>f;
			C[y]=f;
			}
			
    for(i=0;i<20;i++)
	{
     	for(y=0;y<n;y++)
        {
		   for(x=0;x<n;x++)
		   {
              if(x!=y)
		      CX[y]-=(A[y][x]*X[x]);
           }
		   CX[y]+=C[y];
		   CX[y]=CX[y]/A[y][y];
		   X[y]=CX[y];
		   CX[y]=0;
	     }	
	  cout<<"\n\nIteracion "<<i+1<<":";
      for(x=0;x<n;x++)
      {
          cout<<"\n\nX["<<x+1<<"]= "<<X[x]<<endl;
      }
      cout<<endl;
      system("pause");
   
	}    
}

//////////////////////////////////////////////////////////////////////////

float m[10][10];
float inv[10][10];
void imprime(float M[10][10], int ly, int lx);
void ceros(int X, int Y, int lx, int ly);
void pivote(int X, int Y, int lx);
bool validar(float val); //Verifica que se introdusca un numero decente
void uno(int X, int Y, int lx);


int matriz(){

    int x,y,i,j;
    float R;
    bool continuar=false;    
    do{
    	cout<<"\n\n Este programa Resuelve sistemas de ecuaciones utilizando el metodo de matrices ";
	
    cout<<"El sistema sera de XnX, introdusca X: ";cin>>y;//No puede ser menor a 1
    continuar=validar(y);
      }while (!continuar);
    
    x=y+1;
    continuar=false;
    for (i=0;i<y;i++) //Ingresa las Variables
    {cout<<"\t ECUACION "<<i+1<<endl;
    
        for (j=0;j<x-1;j++)
        {
            do{
            cout<<"a["<<i+1<<"]["<<j+1<<"] :";
            cin>>m[i][j];
            continuar=validar(m[i][j]); //Valida la funcion
            }
            while (!continuar);
        }
        do{
        cout<<"Variable independiente ["<<i+1<<"] :";
        cin>>m[i][j];
        
        continuar=validar(m[i][j]);
        }while (!continuar);
    }
   
    for (i=0;i<y;i++) //Genera la funcion inversa
    {
        for (j=0;j<x-1;j++)
        {
            if(i==j)
            inv[i][j]=1;
            else
            inv[i][j]=0;
        }
    }
            
    imprime(m,y,x-1);
    i=0;j=0;
    
    
    do
    {        
        if (m[i][j]==0)
        pivote(j,i,x);
        else
        {i++;j++;}  
    }while(i!=y);
    
    imprime(m,y,x-1);
    i=0;j=0;

    for (i=0;i<y;i++) //Genera las operacione paso por paso 
    {
        uno(j,i,x);
        imprime(m,y,x-1);
        ceros(j,i,x,y);
        imprime(m,y,x-1);
        j++;
    }
    cout<<"\n Las Variables Incognitas son :";
    for (i=0;i<y;i++)
    {   
        R=0;
        for(j=0;j<x;j++)
        {
           R+=inv[i][j]*m[j][x-1];
        }
        cout<<"\nX["<<i+1<<"]="<<R;
        j++;
    }
    cout<<"\n\n";
    system("pause");
}


bool validar(float val)
{
    if(val>1000||val<-1000)
    {
    fflush( stdin );
    cin.clear();
    cout <<val<< "ERROR Introdusca un numero entre -1000 y 1000" << endl;
      return(false);
    }
    else
    {   
    return(true);
    }
}

void imprime(float M[10][10],int ly, int lx)
{
     int i,j;
     system("cls");

    for (i=0;i<ly;i++)
    {
        for (j=0;j<lx;j++)
        {
            cout<<"        "<<m[i][j];
        }
//        cout<<"            |";
          cout<<"\t|";
        for (j=0;j<lx;j++)
        {
            cout<<"        "<<inv[i][j];
        }
        cout<<"\n";
    }
    system("pause");
}
    
void uno(int X, int Y, int lx)
{
     int i;
     float t;
     t=m[X][Y];
     for (i=0;i<lx-1;i++)
     {
         m[X][i]=m[X][i]/t;
         inv[X][i]=inv[X][i]/t;
     }
}

void ceros(int X, int Y, int lx, int ly)
{
     int i,j;
     float t;
     for (i=0;i<ly;i++)
     {
         t=-1*m[i][X];
         if (i!=Y)
         {
            for(j=0;j<lx-1;j++)
            {
            inv[i][j]=t*inv[Y][j]+inv[i][j];
            m[i][j]=t*m[Y][j]+m[i][j];
            }
         }
     }
}

void pivote(int X, int Y, int lx)
{
     int j;
     float t[2][10];
     for (j=0;j<lx;j++)
     {
         t[0][j]=m[Y][j];
         if((Y+1)>9)
         t[1][j]=m[0][j];
         else
         t[1][j]=m[Y+1][j];
     }
     for (j=0;j<lx;j++)
     {
         m[Y][j]=t[1][j];
         if((Y+1)>9)
         m[0][j]=t[0][j];
         else
         m[Y+1][j]=t[0][j];
     }             
     system("pause");
}


//////////////////////////////////////////////////////////////////////////

int newton1(){
    
    }

//////////////////////////////////////////////////////////////////////////
int newton2(){
    
    }

//////////////////////////////////////////////////////////////////////////
int newton3(){
    
    }

//////////////////////////////////////////////////////////////////////////
/*    
int biseccion(){
    Bisseccion();
    system("pause");
    
    }
    
void Bisseccion()
{
     Obtener_Funcion();
     Xr_Inicial();
     Iteraciones();
     //PuntoMedio();
}

void Obtener_Funcion(void)
{
                  cout<<"              Bisseccion"<<endl; 
                  cout<<"\nEscriba el orden de la funcion: "; 
                  cin>>Ord;
                  
                  cout<<"\nEscriba el Intervalo [a,b] donde se encuentra la raiz de la funcion."<<endl;
                  cout<<"a= "; cin>>a; cout<<"b= "; cin>>b;
                 
                  Limites=abs(a)+abs(b);
                  cout<<"\nEl periodo de la funcion es: "<<Limites<<endl;
                  
                  if(Ord>0)
                  {
                          for(int i=Ord; i>=0; i--)
                          {
                                cout<<"\nEscriba el coeficiente de (x^"<<i<<"): ";
                                cin>>Func[i];
                          }
                  
                          ////////////////////////////////
                          cout<<"\nLa Funcion es: "<<endl;
                          for(int j=Ord; j>=0; j--)
                          {
                                 if(Func[j]!=0)
                                 {
                                        if(Func[j]<0)
                                        {
                                             cout<<Func[j]<<"(x^"<<j<<") ";
                                        }
                                        else
                                        {
                                              cout<<"+"<<Func[j]<<"(x^"<<j<<") ";
                                        }
                                 }        
                          }
                          cout<<endl;
                  }
                  else
                  {
                          for(int i=Ord; i<=0; i++)
                          {
                                cout<<"\nEscriba el coeficiente de (x^"<<i<<"): ";
                                cin>>Func[i];
                          }
                  
                          ////////////////////////////////
                          cout<<"\nLa Funcion es: "<<endl;
                          for(int j=Ord; j<=0; j++)
                          {
                                 if(Func[j]!=0)
                                 {
                                        if(Func[j]<0)
                                        {
                                             cout<<Func[j]<<"(x^"<<j<<") ";
                                        }
                                        else
                                        {
                                              cout<<"+"<<Func[j]<<"(x^"<<j<<") ";
                                        }
                                 }        
                          }
                          cout<<endl<<endl;
                  }
}

double EvaluarF(double &X)
{
       double Ev,Sum=0;
       
       if(Ord>0)
       {
                for(int i=Ord; i>=0; i--)
                {
                     Ev=pow(X,i);
                     Ev=Ev*Func[i];
                     Sum=Sum+Ev;
                     Ev=0;
                }
       }
       else
       {
                for(int i=Ord; i<=0; i++)
                {
                     Ev=pow(X,i);
                     Ev=Ev*Func[i];
                     Sum=Sum+Ev;
                     Ev=0;
                }
       }
       return Sum;
}

void Iterar(double &NA,double &NB)
{
     A=NA;
     B=NB;
     Xr=(A+B)/2;
     F=EvaluarF(Xr);

}
void Xr_Inicial(void)
{
     Iterar(a,b);
     cout<<"Valor de (a)= "<<a<<endl;
     cout<<"Valor de (b)= "<<b<<endl;
     cout<<"Valor de (Xr)= "<<Xr<<endl<<endl;
     cout<<"Valor de f(x)= "<<F<<endl<<endl;     
}
void Iteraciones(void)
{
     int It;
     double Xtemp;
     A=a;
     B=b;
     Xr=0;
     F=0;
     
     cout<<"Cuantas iteraciones quiere realizar: ";
     cin>>It;
     
     cout<<"\n     Iteracion"<<"     a"<<"     b"<<"        Xr"<<"       f(x)"<<"        Ep(%)"<<endl;     
     
     for(int i=0; i<It; i++)
     {
             Xr=(A+B)/2;
             Xtemp=Xr;
             Identificar(A,Xr);
             Iterar(A,B);
             ErrorPorcentual(Xr,Xtemp);
             cout<<"         "<<i+1<<"     /"<<A<<"  /"<<B<<"  /"<<Xr<<"    /"<<F<<"    /"<<Ep<<"%"<<endl;
     
     }
}
void Identificar(double &A, double &Xr)
{
    int Ident=0;
    if((EvaluarF(A)*EvaluarF(Xr))<0)
    {
              B=Xr;                      
              Ident=1;                      
    }
    
    if((EvaluarF(A)*EvaluarF(Xr))>0)
    {
              A=Xr;                      
              Ident=2;
    }
}
void ErrorPorcentual(double &Xr, double &Xtemp)
{
     Ep=Xr-Xtemp;
     Ep=(Ep/Xr)*100;
     Ep=abs(Ep);
}

//////////////////////////////////////////////////////////////////////////

int errores()
{
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
  //  while(!kbhit());     // wait for user to press a key
  waitForLeftMouseClick(); // use one or the other of these--not both
    closegraph();        //close graphics window
//	return 0;
    }

/////////////////////////////////////////////////////////////////////////////
int gasolina()
{
    //Erick Vazquez Gonzalez 
    int n,i;
    double x;
    cout<<"\n Cuantos Litros desea Surtir ?  "<<endl;
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
   
   
   initwindow(500,400); //open a 400x300 graphics window
//bar3d(getmaxx()/3, getmaxy()-(getmaxy()/8), getmaxx()/2.5, getmaxy()/2.5, 25, 1);

  setfillstyle(1,BLACK); //FONDO

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
                    
    //while(!kbhit());     // wait for user to press a key
    waitForLeftMouseClick(); // use one or the other of these--not both
    closegraph();        //close graphics window
}

/////////////////////////////////////////////////// PAISAJE

*/
int paisaje()
{
  int gm,gd=DETECT,i,j;
  initgraph(&gd,&gm,"");
  
    setcolor(0);
  //Erick Vazquez Gonzalez
  //Carlos Muñoz Rubio

for(i=0;i<300;i++)
{ 
  setfillstyle(1,BLACK); //FONDO
  setcolor(0);
  sombra(xx++,xy--);   //Reduce el Parpadeo a comparacion del    cleardevice 
  luna(sx++,sy--);
  
  setfillstyle(1,BLACK); //FONDO

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

//closegraph();
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


///////////////////////////////////////////////////bicicleta
/*
int bicicleta(void)
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
                
    while(!kbhit());     // wait for user to press a key
  //  waitForLeftMouseClick(); // use one or the other of these--not both
    closegraph();        //close graphics window
	return 0;
   }

void Bicicleta(int maxx, int maxy)
{

     for(int i=0; i<245; i++)
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

*/

///////////////////////////////////////////////////monociclo
/*int monociclo(void)
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
                
    while(!kbhit());     // wait for user to press a key
  //  waitForLeftMouseClick(); // use one or the other of these--not both
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

//////////////////////////////////////////////////////////////////////////// GRAFICOS 2D
int Graficos2D(void)
{

initwindow(500,500);   
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
     delay(500);
     line(200,30,35,220);
     
     //Linea Izquierda
     delay(500);
     line(245,30,420,220);
     
     //Elipse izquierda
     delay(500);
     ellipse(560,130,0,360,60,80);
     floodfill(560,130, 0);
     
     //Elipse drecha
     delay(500);
     ellipse(775, 130, 0, 360, 80, 60);
     floodfill(775,130, 0);
     
     //Secuencia Inferior
     setfillstyle(1,0);
     //Barra
     delay(500);
     bar3d(getmaxx()/14,getmaxy()-(getmaxy()/2.5),getmaxx()/5,getmaxy()-(getmaxy()/10),0,1);
     
     //Casita
     delay(500);
     int points2[]={260,440,260,340,335,290,410,340,410,440}; //triangulo
     drawpoly(5, points2);
     fillpoly(5,points2);
     
     //Triangulo
     delay(500);
     int points[]={560,290,630,440,480,440};
     drawpoly(3, points);
     fillpoly(3,points);
     
     //Barras 3D
     delay(500);
     bar3d(getmaxx()-(getmaxx()/5), getmaxy()-(getmaxy()/2.5), getmaxx()-(getmaxx()/8), getmaxy()-(getmaxy()/10), 30, 1);

     waitForLeftMouseClick(); // use one or the other of these--not both
     closegraph();
}
void Secuencia3D()
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
     setfillstyle(3,2);
     bar3d(getmaxx()/14,getmaxy()/16,getmaxx()/5,getmaxy()/2.5,0,1);
     
     //Barra 3D
     delay(1000);
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
     setfillstyle(3,2);
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
     
    while(!kbhit());     // wait for user to press a key
  //  waitForLeftMouseClick(); // use one or the other of these--not both
    closegraph();        //close graphics window
	
   }

*/
void LogoEsime()
{
   cout<<"                         ____ _____ _____  _    _ ____   "<<endl;
cout<<"                        / __// ___|\\_    \\| \\  / || __\\  "<<endl;
cout<<"                       / /_  | \\__   | |\\/|  \\/  || |__  "<<endl;
cout<<"                      / __/  \\___ \\  | |  |      || ___\\  "<<endl;
cout<<"                     / /___  ___/ | _| |__| |\\/| || |___   "<<endl;
cout<<"                    /_____/ |____/ /_____/|_/  \\_||_____\\  "<<endl;

}

void Datos(string nombre, int Practica, int Programa)
{
     cout<<"         Vazquez Gonzalez Erick    "<<"   Pract: "<<Programa<<"   Prog: "<<Practica<<"\n"<<endl;
     cout<<"\t\t"<<nombre<<"\n"<<endl;
     }
     
string capturacad(string msg)
{
       string texto;
       fflush(stdin);
       cout<< msg;
       getline(cin,texto);
       return texto;
}
float capturanum(string msg)
{
      float numero;
      cout<<msg;
      cin>>numero;
      return numero;
}            



enum mes{Enero=1, Febrero, Marzo, Abril, Mayo, Junio, Julio, Agosto, Septiembre, Octubre, Noviembre, Diciembre};

string ConvierteMes(int M)
{
string st;
switch(M){
          case 1: 
               st=" Ene ";
               break;
          case 2:
               st=" Feb ";
               break;
          case 3: 
               st=" Mar ";
               break;
          case 4:
               st=" Abr ";
               break;
          case 5: 
               st=" May ";
               break;
          case 6:
               st=" Jun ";
               break;
          case 7: 
               st=" Jul ";
               break;
          case 8:
               st=" Agosto ";
               break;
          case 9: 
               st=" Sep ";
               break;
          case 10:
               st=" Oct ";
               break;
          case 11: 
               st=" Nov ";
               break;
          case 12:
               st=" Dic ";
          break;
          }
return st;
}

void Fecha()
{
	struct tm *tiempo;
	int D, M, A;
	string X;

	time_t fecha_sistema;
	time(&fecha_sistema);
	tiempo=localtime(&fecha_sistema);
	
	A=tiempo->tm_year + 1900;
	M=tiempo->tm_mon +1;
    D=tiempo->tm_mday;
	X=ConvierteMes(M); 
cout<<" Fecha: "<<D<<X<<A;         
}

template <class T>
T Captura(string Msg)
{
   T Valor;
   cout<<Msg<<":";
   cin>>Valor;
   return Valor;
}




     #endif 
     
