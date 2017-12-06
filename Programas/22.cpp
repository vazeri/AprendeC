//plantillas de funciones
//funciones genericas y definen el tipo de dato con el cual la funcion va a ser usada 
#include <string>
#include <iostream>
using namespace std;

//estructuras de tipo de dato generico 
//template <class Identificador> //la clase no es clase, el tipo de dato no es tipo de dato //son genericas 
//Declaracion de la Funcion;
//Para usar en main 
//NombreDeLaFuncion <TipoDeDato>(Argumentos);

template <class T>
T Captura(string Msg)
{
   T Valor;
   cout<<Msg<<":";
   cin>>Valor;
   return Valor;
}


int main()
{
   int a;
   char Letra;
   double X;

a=Captura<int>("Captura un Numero");
Letra=Captura<char>("Captura una Letra Numero");
X=Captura<double>("Captura un Numero con decimales");

cout<<"Valor de A"<<endl;
cout<<"Valor de Letra"<<endl;
cout<<"Valor de No Decimal"<<endl;

system("pause");
return 0;
   

}
