#include <iostream>
#include <string>

using namespace std;

enum Color{Negro=1, Rojo, Azul, Amarillo, Blanco};
string menucolor[5]={"Blanco", "Negro", "Azul", "Rosa", "Beige" };

struct Coche{
string Marca;
string Modelo;
int Anio;
Color AutoIng;
};

float CapturaAuto(Coche *apAuto);
string CapturaCad(string Msg);
int CapturaDatos(string Msg); //Pide Datos
void Imprimir(Coche *apAuto);


int main(){
int i, nA; 
Coche *apAuto;
    nA=int(CapturaDatos("Indique Numero de Autos: "));
        if(nA<1) {cout<<" Error al crear memoria Dinamica"<<endl;}
            else {apAuto=new Coche[nA];
                for(i=0;i<nA;i++)
                {
                    CapturaAuto(&apAuto[i]);
                                        }
        system("CLS");
                for(i=0;i<nA;i++)
                {
                    Imprimir(&apAuto[i]);
                                        }
        system("pause");return 0;
            }
           }
//exactamente cuando uso los strings
//

int CapturaDatos(string Msg){
    int Numero;
    cout<<Msg;
    cin>>Numero;
    return Numero;
}

string CapturaCad(string Msg){
    string texto;
    fflush(stdin);
    cout<<Msg;
    getline(cin,texto); //Cadenas de texto
    return texto;
}




float CapturaAuto(Coche *apAuto){
    apAuto->Marca=CapturaCad("Ingrese la Marca: ");
    apAuto->Modelo=CapturaCad("Ingrese el Modelo: ");
    apAuto->Anio=CapturaDatos("Ingrese el Anio: ");
    for(int k=1;k<=5;k++) 
                    cout<<k<<".-"<<menucolor[k-1]<<endl; //Impruime Numeros en Lugar de los colores 
    do{
                    apAuto->AutoIng=(Color)CapturaDatos("Selecciona el No de Color");
    }
    while(apAuto->AutoIng<1);//apAuto->ColorCoche>1)
         }
         
void Imprimir(Coche *apAuto){
    cout<<"            "<<endl;
    cout<<"Marca:  "    <<apAuto->Marca<<endl;
    cout<<"Modelo:  "   <<apAuto->Modelo<<endl;
    cout<<"Anio:  "     <<apAuto->Anio<<endl;
    cout<<"Color:  "    <<Color(apAuto->AutoIng)<<endl;
    cout<<"            "<<endl;
    }
