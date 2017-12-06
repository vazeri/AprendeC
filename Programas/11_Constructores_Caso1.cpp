#include <iostream>
#include <string>

using namespace std;

class cprisma{ //crea Clase
private:
        double NumLado,Apotema,Lado,Altura;
              
public:
       cprisma();
       cprisma(double NL,double A,double L,double Altura);     
             
       void FijarValor(double NL,double A,double L,double Alt);
             double Perimetro();
             double Area();
             double Volumen();
             double Capturar(string msg);
             void Imprimir();
};

//------------------------------------------------------------------------------main
int main ()
{   cout<<" "<<endl;
    cout<<"Constructores Caso 1"<<endl;
    cprisma prisma;
    prisma.Imprimir();
    system("pause");
    return 0;    
}    
//------------------------------------------------------------------------------main

cprisma::cprisma(){
        FijarValor(1,1,1,1); //Fija los Valores
}

cprisma::cprisma(double NL,double A,double L,double Alt){
        FijarValor(NL,A,L,Alt);
}

void cprisma::FijarValor(double NL,double A,double L,double Alt){
     NumLado=NL;
     Apotema=A;
     Lado=L;
     Altura=Alt;
}

double cprisma::Perimetro(){
       return NumLado*Lado;
}

double cprisma::Area(){
       return (Perimetro()*Apotema)/2;
}

double cprisma::Volumen(){
       return Area()*Altura;
}

double cprisma::Capturar(string msg){
       double V;
       cout<<msg<<endl;
       cin>>V;
       return V;
}

void cprisma::Imprimir(){
     cout<<" "<<endl;
     cout<<"Numero de Lados: "<<NumLado<<endl;
     cout<<"Tamaño de Lado: "<<Lado<<endl;
     cout<<"Apotema: "<<Apotema<<endl;
     cout<<"Altura: "<<Altura<<endl;
     cout<<"Perimetro: "<<Perimetro()<<endl;  
     cout<<"Area: "<<Area()<<endl;    
     cout<<"Volumen: "<<Volumen()<<endl;  
     cout<<" "<<endl;

}
