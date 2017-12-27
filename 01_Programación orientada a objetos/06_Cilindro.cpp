#include <iostream>
#include <string>
#include <math.h>
using namespace std;

struct Circulo{
	double r;
};

struct Punto{
	double x;
    double y;
};

struct Cilindro{ 
    double Altura; 
    Punto PuntoIng;
    Circulo CirculoIng;  
};

void CapturaDatos(Cilindro *pCil);
double CapturaCad(string Msg);
double CalPerimetro(double r);
double CalVolumen(double Altura, double r);
double CalArea(double Altura, double r);
void Imprimir(double Perimetro, double Area,double Volumen);    

int main(void){		 
    cout<<"                     ____ _____ _____  _    _ ____   "<<endl;
cout<<"                    / __// ___|\\_    \\| \\  / || __\\  "<<endl;
cout<<"                   / /_  | \\__   | |\\/|  \\/  || |__  "<<endl;
cout<<"                  / __/  \\___ \\  | |  |      || ___\\  "<<endl;
cout<<"                 / /___  ___/ | _| |__| |\\/  || |___   "<<endl;
cout<<"                /_____/ |____/ /_____/|_/  \\_||_____\\  "<<endl;
cout<<"   Programa que calcula el Volumen, Perimetro y Area de un Cilindro"<<endl;
cout<<"    "<<endl; 
     double Perimetro, Area, Volumen;
     Cilindro *pCil;
     pCil=new Cilindro;
     CapturaDatos(pCil);
     Perimetro=CalPerimetro((*pCil).CirculoIng.r);
     Volumen=CalVolumen((*pCil).Altura, (*pCil).CirculoIng.r);
     Area=CalArea((*pCil).CirculoIng.r, (*pCil).Altura);
     Imprimir(Perimetro, Area, Volumen);
     system("cls");
     system("pause");
     return 0;
}
                      
void CapturaDatos(Cilindro *pCil){
    pCil->Altura=double(CapturaCad("Ingrese la Altura: "));
    pCil->PuntoIng.x=double(CapturaCad("Ingrese el punto X: "));
    pCil->PuntoIng.y=double(CapturaCad("Ingrese el punto Y: "));
    pCil->CirculoIng.r=double(CapturaCad("Ingrese el Radio: "));
}

double CapturaCad(string Msg){
    double texto;
    fflush(stdin);
    cout<<Msg;
    cin>>texto; //Cadenas de texto
    return texto;
}    
    
double CalPerimetro(double r){
    double P;
    P=2*3.14*r;
    return P;
}                      
                  
double CalVolumen(double Altura, double r){
    double V;
    V=3.14*(pow(r,2))*Altura;    
    return V;
}   
                          
double CalArea(double Altura, double r){
    double A;
    A=2*3.14*r*(Altura+r);   
    return A;
}           

void Imprimir(double Perimetro, double Area,double Volumen){
    cout<<"  "<<endl;
    cout<<"Perimetro: "<<Perimetro<<endl;
    cout<<"Area: "<<Area<<endl;
    cout<<"Cilindro: "<<Volumen<<endl;
    cout<<"  "<<endl;
    system("pause");
}
