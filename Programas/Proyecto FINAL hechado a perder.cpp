#include<iostream>
#include<string>
#include "datos.h"
using namespace std;

class cCasa{       //----------------------------------Clase1
protected:
          int Tarifa;        
          double Cuota;         
public:      
string CapturaCad(string msg) //Captura Textos
      {
      string texto;
      fflush(stdin);
      cout<< msg;
      getline(cin,texto);
      return texto;
      }

double CapturaNum(string msg) //Captura Numeros
      {double x;
      cout<<msg;
      cin>>x;
      return x;}
      
int CalTarifa(double Consumo)   
    {
    if(Consumo>=1 && Consumo<125)
     {Tarifa=1;}
    else if(Consumo>=125 && Consumo<250)
     {Tarifa=2;}
    else if(Consumo>=250)
     {Tarifa=3;}
    else{cout<<"Error el Consumo Es Negativo"<<endl;}
return Tarifa;
    }
    
double CalCuota(double Consumo)   
    {
    
    if(Tarifa==1)
      {return Consumo*(0.733);}
    else if(Tarifa==2)
      {return (((Consumo-125)*(1.229))+91.625);}// 91.625 son los primeros 125 Kwh en Tarifa 1
    else if(Tarifa==3)
      {return (((Consumo-250)*(2.593))+245.25);}// 245.25 son los segundos 125 Kwh en Tarifa 2
    else{cout<<"Error el Consumo Es Negativo"<<endl;}

    }
};
      
class cLuz:public cCasa{ //----------------------------------Clase2
protected:
          double LecturaAnt;
          double LecturaAct;
          double Consumo;         
public:
       cLuz(){} //Constructor
       ~cLuz(){} //Destructor

void virtual capturar()   
{
         Consumo=LecturaAct-LecturaAnt;//Diferencia de Lecturas
         Tarifa=CalTarifa(Consumo);
         Cuota=CalCuota(Consumo);
                                  }
virtual void imprimir()
     {
     cout<<"----------------------------------------------------"<<endl;   
     cout<<"Lectura Anterior: "<<LecturaAnt<<"  Lectura Actual: "<<LecturaAct<<endl;
     cout<<"La Cuota por los " <<Consumo<<" Kw/h Consumidos es de: "<<Cuota<<endl;
     cout<<" "<<endl;  
                             }
      };//ok
      
            
class cAparatos:public cLuz{ //----------------------------------Clase3
protected:
    int i;
    string NombreAparato;
    double ConsumoAparato,AparatoWatts,CostoAparato;
    
public:

void virtual CapturarLectura()      
     {    
     do{ 
         LecturaAnt=CapturaNum("\nLectura Anterior: ");
         LecturaAct=CapturaNum("Lectura Actual: ");
       
              if(LecturaAnt>LecturaAct){cout<<"\n - La lectura Anterior no puede ser Mayor a la Actual -"<<endl; }
       }while(LecturaAnt>LecturaAct);
                                  }       

   void capturar(){
        
             
     for(i=0;i<1;i++)
     {
    cLuz::capturar(); // Hacer que solo la pida 1 vez
     NombreAparato=CapturaCad("Nombre del Aparato: ");
     ConsumoAparato=CapturaNum("Consumo en Watts ");
     }
     CostoAparato=CalConsumoAparato();
               }
               
     double CalConsumoAparato() //Establece el Costo de Mantener el Aparato Encendido
                {
            double X;
            X=ConsumoAparato/1000;        
               if(Tarifa==1)
                 {return X*0.733;}
               else if(Tarifa==2)
                 {return X*1.229;}
               else if(Tarifa==3)
                 {return X*2.593;}
               else{cout<<"Error el Consumo Es Negativo"<<endl;}
            return CostoAparato;
                }
    
void imprimir()
{
cLuz::imprimir();
      cout<<NombreAparato<<" Consume "<<ConsumoAparato/1000<<" Kw/h Por Hora"<<endl;
           if(Tarifa==1)     //Define que tarifa Se Imprime
               {cout<<"Actualmente esta usted en Tarifa 1 - 0.733 por Kw/h "<<endl;}
           else if(Tarifa==2)
               {cout<<"Actualmente esta usted en Tarifa 2 - 1.299 por Kw/h "<<endl;}
           else if(Tarifa==3)
               {cout<<"Actualmente esta usted en Tarifa 3 - 2.593 por Kw/h "<<endl;}
      
      cout<<"\nMantenerlo Prendido Durante: "<<endl;
      cout<<"\t01 hora: \t"<<CostoAparato<<" pesos"<<endl;
      cout<<"\t24 horas: \t"<<CostoAparato*24<<" pesos"<<endl;
      cout<<"\t01 Mes: \t"<<CostoAparato*720<<" pesos"<<endl;
      cout<<"\t01 Anio: \t"<<CostoAparato*4320<<" pesos"<<endl;
      cout<<" "<<endl; 
}
cAparatos(){      //Constructor
           ConsumoAparato=0;
           AparatoWatts=0;
           CostoAparato=0;
           }
~cAparatos(){} //Destructor
};
                
                
int main()//---------------------------------------------------------------main
{         
int nA, i, nL=1;
cAparatos *apEC;
cAparatos *apLUZ;
Fecha(); //Libreria Propia, Agrega Dia Mes y Anio
Datos("Programa que calcula el consumo electrico",20,5); //Libreria datos Titulo, No de Practica y Programa
      for(i=0;i<nL;i++){
        apLUZ=new cAparatos[1]; 
        apLUZ[1].CapturarLectura(); 
            }
      cout<<"Indique el Numero de Aparatos a Calcular:  ";
      cin>>nA;
      apEC=new cAparatos[nA];        
       
for(i=0;i<nA;i++){
      apEC[i].capturar(); //capturar de cAparatos y no el de cLuz
      system("cls");
      cout<<"\t Resultados "<<endl;
for(i=0;i<nA;i++)
      apEC[i].imprimir ();
delete[]apEC;
system("pause");
return 0;
}}
