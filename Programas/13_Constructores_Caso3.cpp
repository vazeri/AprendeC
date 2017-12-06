#include <iostream>
#include <string>

using namespace std;

class cprisma{
private:
       double NumLado,Apotema,Lado,Altura;           
public: //Funcion Publica
       cprisma();
       cprisma(double NL,double A,double L,double Altura);           
       void FijarValor(double NL,double A,double L,double Alt); 
       double Perimetro();
       double Area();
       double Volumen();
       double Capturar(string msg); //Captura Datos 
       void Imprimir();
};

//------------------------------------------------------------------------------main
int main (){
    
    cprisma pris; //Llamado a clase 
    cout<<" "<<endl;
    cout<<"Constructores Caso 3"<<endl;;
    cout<<" "<<endl;;
    double X,Y,Z,W;
    X=pris.Capturar("Ingrese el Numero de Lados: ");
    Y=pris.Capturar("Ingrese el Apotema: ");
    Z=pris.Capturar("Ingrese el Tamaño de los Lados: ");
    W=pris.Capturar("Ingrese el Altura: ");
    pris.FijarValor(X,Y,Z,W);
    pris.Imprimir();  
system("pause");
return 0; 
}
//------------------------------------------------------------------------------main

cprisma::cprisma(){
        FijarValor(1,1,1,1);
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
       return(Perimetro()*Apotema)/2;
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
     cout<<" "<<endl;;
     cout<<" "<<endl;
     cout<<"Numero de Lados: "<<NumLado<<endl;
     cout<<"Tamaño de Lados: "<<Lado<<endl;
     cout<<"Apotema: "<<Apotema<<endl;
     cout<<"Altura: "<<Altura<<endl;
     cout<<"Perimetro: "<<Perimetro()<<endl;  
     cout<<"Area: "<<Area()<<endl;    
     cout<<"Volumen: "<<Volumen()<<endl;  
     cout<<" "<<endl;
}
