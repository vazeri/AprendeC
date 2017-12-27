#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <winbgim.h>
#include <iostream>
#include "datos.h" //libreria personalizada
using namespace std;
//VAZQUEZ GONZALEZ ERICK 

void Menu();


void Encabezado();
void waitForLeftMouseClick();

int main(){
    //  portada();
      Encabezado();
      Menu();
      return 0;
    }
    
void Menu(){ //
     
     
     int opcion;
           cout<<"\n                                  MENU PRINCIPAL \n"<<endl; 
           cout<<"\t 1.- Newton Rapson "<<endl;
           cout<<"\t 2.- Matriz Inversa "<<endl;        
           cout<<"\t 3.- Gauss Seidel "<<endl;
           cout<<"\t 4.- Salir \n"<<endl;
           cout<<"\t Que Parcial deseas revisar?: ";
           cin>>opcion;
           if( opcion == 1 )    
              {   system("cls");
                  Encabezado();
                 system("newton.exe");
             }
           if( opcion == 2 )    
              {  system("cls");
                  Encabezado();
                  matriz(); }
           if( opcion == 3 )    
              {  system("cls");
                  Encabezado();
                  sneidel(); }
           if( opcion == 4 )    
              {  system("exit"); }
           if( opcion <= 0 || opcion >= 5)    
           {
           cout<<"Opcion no valida teclee una de las opciones"<<endl;
              std::cin.clear();
           cin>>opcion;   
           }}
           
/*           
void Parcial1(){
           int y;
           cout<<"\n\t\t\t      PARCIAL 1 - PRACTICAS \n"<<endl;
           cout<<"\t 1.- Graficos 2D "<<endl;
           cout<<"\t 2.- Graficos 3D "<<endl;
           cout<<"\t 3.- Monociclo "<<endl;
           cout<<"\t 4.- Bicicleta "<<endl;
           cout<<"\t 5.- Paisaje "<<endl;
           cout<<"\t 6.- Gasolina (Errores) "<<endl;
           
           cout<<"\n\t 0.- Menu Anterior "<<endl;
           
           cout<<"\n Que No. de practica deseas abrir? : ";cin>>y;    
           if( y == 1 )
                { 
              //  Graficos2D();
                cout<<"\n Que No. de practica deseas abrir? : ";
                cin>>y;}  
                  
           if( y == 2 )
                { 
                    system("Graficos3D.exe");
                  cout<<"\n ¿Que No. de practica deseas abrir? : ";
                  cin>>y;}
                    
           if( y == 3 )
                { monociclo();
                  cout<<"\n ¿Que No. de practica deseas abrir? : ";
                  cin>>y;}
           
           if( y == 4 )
                { bicicleta();
                  cout<<"\n ¿Que No. de practica deseas abrir? : ";
                  cin>>y;}
           
           if( y == 5 )
                { 
                  paisaje();  
                  cout<<"\n ¿Que No. de practica deseas abrir? : ";    
                  cin>>y;}
           
           if( y == 6 )
                { 
                  gasolina();  
                  cout<<"\n ¿Que No. de practica deseas abrir? : ";    
                  cin>>y;}
           
                    
           if( y == 0 )
                {    system("cls");
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
           
           cout<<"\t 1.- Errores (Grafica) "<<endl;
           cout<<"\t 2.- Biseccion "<<endl;
           cout<<"\t 3.- Newton Rapson "<<endl;
           cout<<"\t 4.- Matriz Inversa "<<endl;
           cout<<"\t 5.- Gauss Sneidel (NO disponible) "<<endl;
           cout<<"\t 6.- Minimos Cuadrados (Grafica)"<<endl;
           cout<<"\t 7.- Interpolacion de Newton "<<endl;

           cout<<"\n\t 0.- Menu Anterior \n"<<endl;

           cout<<"Que No. de practica deseas abrir? : ";cin>>y;                                 

           
           if( y == 1 )
                { 
                errores();
                Encabezado();
                Parcial2();
                }  
                  
           if( y == 2 )
                { 
                biseccion();
                Encabezado();
                Parcial2();
                }
                    
           if( y == 3 )
                {
                system("cls");
                Encabezado(); 
                MenuNewton();
                }
           
           if( y == 4 )
                { 
                  matriz();
                Encabezado();  
                Parcial2();
                }
           
           if( y == 5 )
                { 
                  sneidel();  
                  Encabezado();
                  Parcial2();
                }
           
           if( y == 6 )
                { 
                  minimos();
                  system("pause");  
                Encabezado();
                Parcial2();
                }
           
           if( y == 7 )
                { 
                interpolacion();  
                Encabezado();
                Parcial2();
                }
           
                    
           if( y == 0 )
                {    system("cls");
                     Encabezado();
                     Menu();}
                       
           else{cout<<"Opcion no valida intente de nuevo "<<endl;
                std::cin.clear();
                cin>>y;
                system("cls");
                Menu();
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


void MenuNewton(){
int y;
      cout<<"\n\t\t\t      NEWTON RAPSON "<<endl;      
           
           cout<<"\t 1.- X^2+2x^2+7x-20 "<<endl;
           cout<<"\t 2.- cos(x)-x^3"<<endl;
           cout<<"\t 3.- 3x+sen(x)-e^x"<<endl;
         
           cout<<"\n\t 0.- Menu Anterior \n"<<endl;

           cout<<"\n Que No. de practica deseas abrir? : ";cin>>y;                                 

           
           if( y == 1 )
                { 
                newton1();
                cout<<"\n Que No. de practica deseas abrir? : ";
                cin>>y;}  
                  
           if( y == 2 )
                { 
                newton2();
                  cout<<"\n ¿Que No. de practica deseas abrir? : ";
                  cin>>y;}
                    
           if( y == 3 )
                { 
                
                newton3();
                  cout<<"\n ¿Que No. de practica deseas abrir? : ";
                  cin>>y;} 
                    
           if( y == 0 )
                {    system("cls");
                     Encabezado();
                     Parcial2();}
                       
           else{cout<<"Opcion no valida intente de nuevo "<<endl;
                std::cin.clear();
                cin>>y;
                system("cls");
                Menu();
          
     }}

*/

void Encabezado()
{ LogoEsime(); //Invoca Logo en ASCII
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


