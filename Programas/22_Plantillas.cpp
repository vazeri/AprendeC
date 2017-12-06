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

//TYPEDEF cambia oculta y cambia el nombre del tipo de dato , los estandares no lo recomiendan
int main()
{
    
typedef int i;
typedef double d;
typedef char c;

   i a;
   c Letra;
   d X;

a=Captura<int>("Captura un Numero");
Letra=Captura<char>("Captura una Letra Numero");
X=Captura<double>("Captura un Numero con decimales");

cout<<" "<<endl;
cout<<"Valor de A "<<a<<endl;
cout<<"Valor de Letra "<<Letra<<endl;
cout<<"Valor de No Decimal "<<X<<endl;

system("pause");
return 0;
}

