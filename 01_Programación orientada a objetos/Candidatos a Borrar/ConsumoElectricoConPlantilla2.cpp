#include<string>
#include "datos.h"
using namespace std;

class cCasa{       //----------------------------------Clase1
protected:
          int Tarifa;        
          double Cuota;         
public:      
             
template <class Dato>
Dato Captura(string Msg)
{
   Dato Variable;
   cout<<Msg<<"";
   cin>>Variable;
   return Variable;
}

      
int CalTarifa(double Consumo)   //Establece la Tarifa 1 2 o 3 
    {
    if(Consumo>=1 && Consumo<125)
     {Tarifa=1;}
    else if(Consumo>=125 && Consumo<250)
     {Tarifa=2;}
    else if(Consumo>=250)
     {Tarifa=3;}
    else{std::cout<<"Error el Consumo Es Negativo"<<std::endl;}
return Tarifa;
    }
    
    
double CalCuota(double Consumo)   //Calcula los pesos respecto a la Tarifa Establecida
    {
    
    if(Tarifa==1)
      {return Consumo*(0.733);}
    else if(Tarifa==2)
      {return (((Consumo-125)*(1.229))+91.625);}
    else if(Tarifa==3)
      {return (((Consumo-250)*(2.593))+245.25);}
    else{std::cout<<"Error el Consumo Es Negativo"<<std::endl;}

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
     do{ 
         LecturaAnt=Captura<double>("\nLectura Anterior: ");
         LecturaAct=Captura<double>("Lectura Actual: ");
         if(LecturaAnt>LecturaAct){std::cout<<"El Consumo No puede ser Negativo"<<std::endl;}
       }while(LecturaAnt>LecturaAct);
         Consumo=LecturaAct-LecturaAnt;//Diferencia de Lecturas
         Tarifa=CalTarifa(Consumo);
         Cuota=CalCuota(Consumo);
}

virtual void imprimir()
     {
     std::cout<<"----------------------------------------------------"<<std::endl;   
     std::cout<<"Lectura Anterior: "<<LecturaAnt<<"  Lectura Actual: "<<LecturaAct<<std::endl;
     std::cout<<"La Cuota por " <<Consumo<<" Kw/h Consumidos es de $"<<Cuota<<" pesos"<<std::endl;
     std::cout<<" "<<std::endl;  
     }
     
};
      
            
class cAparatos:public cLuz{ //----------------------------------Clase3
protected:
    int i;
    string NombreAparato;
    double ConsumoAparato,AparatoWatts,CostoAparato;
    cAparatos *apEC;
    
public:
       
void capturar(int nA)
{
     cLuz::capturar(); 
     
apEC=new cAparatos[nA];         
   for(i=0;i<nA;i++)
   {
     NombreAparato=Captura<string>("\nNombre del Aparato: ");
     ConsumoAparato=Captura<double>("Consumo en Watts ");
     CostoAparato=CalConsumoAparato(); //Tranforma los Watts en Kw/h
    }
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
               else{std::cout<<"Error el Consumo Es Negativo"<<std::endl;}
       return CostoAparato;
}
                
    
void imprimir(int nA)
{
cLuz::imprimir(); //Invoca al otro imprimir

           if(Tarifa==1)     //Define que tarifa Se Imprime
               {std::cout<<"Actualmente esta usted en Tarifa 1 - 0.733 por Kw/h "<<std::endl;}
           else if(Tarifa==2)
               {std::cout<<"Actualmente esta usted en Tarifa 2 - 1.299 por Kw/h "<<std::endl;}
           else if(Tarifa==3)
               {std::cout<<"Actualmente esta usted en Tarifa 3 - 2.593 por Kw/h "<<std::endl;}   
             
for(i=0;i<nA;i++) //error anda por aqui
{  
      std::cout<<"\nSu "<<NombreAparato[i]<<" Consume "<<ConsumoAparato/1000<<" Kw/h Por Hora"<<std::endl;
      std::cout<<"\nMantenerlo Conectado te Cuesta: "<<std::endl;
      std::cout<<"\t01 hora: \t$"<<CostoAparato<<" pesos"<<std::endl;
      std::cout<<"\t12 horas: \t$"<<CostoAparato*12<<" pesos"<<std::endl;
      std::cout<<"\t24 Horas: \t$"<<CostoAparato*24<<" pesos"<<std::endl;
      std::cout<<"\t01 Semana: \t$"<<CostoAparato*720<<" pesos"<<std::endl;
      std::cout<<"\t01 Anio: \t$"<<CostoAparato*4320<<" pesos\n"<<std::endl;

  }
    delete[]apEC;
}

cAparatos(){   //Constructor
           ConsumoAparato=0;
           AparatoWatts=0;
           CostoAparato=0;
           }
~cAparatos(){} //Destructor

};
                

int main()//---------------------------------------------------------------main
{         
int nA, i;
cAparatos apEC;

Fecha(); //Libreria Propia, Agrega Dia Mes y Anio
Datos("Programa que calcula el consumo electrico",20,05); //Libreria datos Titulo, No de Practica y Programa
      std::cout<<"Indique el Numero de Aparatos a Calcular:  ";
      std::cin>>nA;
apEC.capturar(nA); //capturar de cAparatos y no el de cLuz      
system("cls");
      std::cout<<"\t Consumo Energetico de su Hogar "<<std::endl;
//for(i=0;i<nA;i++)
      apEC.imprimir(nA);
//delete[]apEC;        
system("pause");
return 0;
}
