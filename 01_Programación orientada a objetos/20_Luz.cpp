#include <stdio.h>
#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h>
#include <ctype.h>
#include <sstream> 
using namespace std;

class cCasa{      
protected:
          int Tarifa;         //----------------------------------Clase1
public:
string CapturaCad(string msg) //Captura Textos
      {
	 // fflush(stdin);
      string texto;
      cout<< (msg);
      getline(cin,texto);
      return texto;
      }
/*
double CapturaNum(string msg) //Captura Numeros
      {double x;
      cout<<msg;
      cin>>x;
      return x;}
      

*/

double CapturaNum(string Msg)
{
     
  cout << Msg;

      string texto="";
      getline(cin,texto);
      std::istringstream inpStream(texto);
      double inpValue = 0.0;
      if (inpStream >> inpValue)
      {
         return atoi(texto.c_str());
      }
      else
      {
        cout << "Favor de introducir un numero valido" << endl;
        cout << Msg;
      }
   
   ;
     
} 
      
      
      
int CalTarifa(double Consumo)   
    {
    if(Consumo>=1 && Consumo<75)
     {Tarifa=1;}

    else if(Consumo>=75 && Consumo<125)
     {Tarifa=2;}

    else if(Consumo>=125)
     {Tarifa=3;}

    else{cout<<"Error el Consumo Es Negativo"<<endl;}
        
return Tarifa;}
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
     LecturaAnt=CapturaNum("\nLectura Anterior: ");
     LecturaAct=CapturaNum("Lectura Actual: ");
     Consumo=LecturaAct-LecturaAnt;//Diferencia de Lecturas
     Tarifa=CalTarifa(Consumo);
                                  }
virtual void imprimir()
     {
     cout<<" "<<endl;   
     cout<<"Lectura Anterior: "<<LecturaAnt<<endl;
     cout<<"Lectura Actual: "<<LecturaAct<<endl;
     cout<<"Consumo: "<<Consumo<<endl; 
                             }
      };//ok
      
      
      
class cAparatos:public cLuz{ //----------------------------------Clase3
protected:
    int i;
    string NombreAparato;
    double ConsumoAparato,AparatoWatts,CostoAparato;
    
public:
void capturar(){
     cLuz::capturar();
     NombreAparato=CapturaCad("Nombre del Aparato2: ");
     ConsumoAparato=CapturaNum("Consumo en Watts ");
     CostoAparato=CalConsumoAparato();
            }
double CalConsumoAparato(){
	double X;
	X=ConsumoAparato/1000;        
	if (Tarifa==1){
			return X*0.733;
	}else if (Tarifa==2){
			 return X*1.229;
	}else if(Tarifa==3){
			return X*2.593;
	}else{
		cout<<"Error el Consumo Es Negativo"<<endl;
	}
	return CostoAparato;
 }

    
void imprimir()
               {
                 cLuz::imprimir();
                 

                 cout<<"Electrodomestico: "<<NombreAparato<<endl;
                 cout<<"Consumo en Watts: "<<ConsumoAparato<<""<<endl;
                 //cout<<"Tarifa Actual "<<Tarifa<<endl;
                   if (Tarifa==1)
                         {
                        cout<<"Se encuentra en Tarifa 1 - 0.733 por Kw/h "<<endl;
                         }
                     else if(Tarifa==2)
                         {
                        cout<<"Se encuentra en Tarifa 2 - 1.299 por Kw/h "<<endl;
                         }
                     else if(Tarifa==3)
                         {
                        cout<<"Se encuentra en Tarifa 3 - 2.593 por Kw/h "<<endl;
                        }
        
                 cout<<"Por hora: "<<CostoAparato<<endl;
                 cout<<" "<<endl; 
            }

cAparatos(){      //Constructor
           
           ConsumoAparato=0;
           AparatoWatts=0;
           CostoAparato=0;
           }
~cAparatos() //Destructor
{
}
            };
                
int main()//---------------------------------------------------------------main
{         
int nA, i;
cAparatos *apEC;
      do{
      cout<<"Indique el Numero de Aparatos a Calcular:  ";
      cin>>nA;
        }while(nA<=0||nA>=50);

               apEC=new cAparatos[nA];
         
         for(i=0;i<nA;i++)
               apEC[i].cAparatos::capturar(); //capturar de cAparatos y no el de cLuz
//                   system("cls");
              cout<<"\t Resultados "<<endl;
         
         for(i=0;i<nA;i++)
               apEC[i].imprimir ();
delete[]apEC;
         
system("pause");
return 0;
}
