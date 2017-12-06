#include <iostream>
#include <string>

using namespace std;

class cFecha{
protected:
       int d,m,a;
    
public:
       int Valida(int inicio, int fin, string Cad){
           int V;
           do{
               cout<<"Captura el "<<Cad<<":"<<endl;
               cin>>V;
               }while(V<inicio or V>fin);
               return V;
               }

       virtual void leer(){
               d=Valida(1,31,"dia");
               m=Valida(1,12,"mes");
               a=Valida(2009,2020,"anio");
               }
               
       virtual void imprimir(){
               cout<<d<<"/"<<m<<"/"<<a<<endl;
               }
          };
          

class cArticulo{
protected:
       int clave;
       float precio;

public:
       virtual void leer(){
               cout<<"Captura clave"<<endl;
               cin>>clave;
               cout<<"Captura Precio"<<endl;
               cin>>precio;
               }
       virtual void imprimir(){
               cout<<"Clave:"<<clave<<endl;
               cout<<"Precio:"<<precio<<endl;
               }
          };          


class cPerecedero: public cFecha, public cArticulo{    
      void leer(){
           cArticulo::leer();
           cFecha::leer();
           }
           
      void imprimir(){
           cArticulo::imprimir();
           cFecha::imprimir();
           }
           };


int main()
{
    {char c;
    cArticulo *V[100];
    int n,i;
    cout<<"Captura No de Articulos"<<endl;
    cin>>n;
           for(i=0;i<n;i++)
           {
                           cout<<"Es Perecedero"<<endl;
            cin>>c;
            if(c=='s' or c=='S')
            {
                      V[i]=new cPerecedero;
                      V[i]->leer(); 
                      }
            else{
                 V[i]=new cArticulo;
                V[i]->leer();
                }  
            }   
            for(i=0;i<n;i++)
            {  
                V[i]->imprimir();
                }              
           
           }
    system("pause");
    return 0;
    }
