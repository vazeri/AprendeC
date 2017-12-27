#include<iostream>
#include<string>
using namespace std;

class cFecha //----------------------Clase cFecha
{
protected:
       string Rfc,Nss,Nt;
public:
       string ValidaPer(string RfcNssNt) //dma
       {
       string V;
       cout<<"Capture el "<<RfcNssNt<<": "; //dma
       cin>>V;
       return V;
       }

void virtual leer()
      {
      Rfc=ValidaPer("RFC"); //Rango
      Nss=ValidaPer("Numero de Seguro Social");
      Nt=ValidaPer("ID De la Empresa");
      }
      
virtual void imprimir()
      {
      cout<<"Numero de RFC: "<<Rfc<<endl;
      cout<<"Numero de Seguro Social: "<<Nss<<endl;
      cout<<"Numero de Empleado: "<<Nt<<endl;
      }
cFecha(){}
~cFecha(){}
      };//------------Ok

class cPersona:public cFecha //---------Clase cPersona
      {
protected:
      string Nombre, CURP;
public:
      cPersona(){}
     ~cPersona(){}

void virtual leer()
      {
      fflush(stdin);
      cout<<"Capture el Nombre: ";
      getline(cin,Nombre);
      cout<<"Capture el CURP: ";
      getline(cin,CURP);
      cFecha::leer();
                 }
virtual void imprimir()
{
      cout<<"Nombre:"<<Nombre<<endl;
      cout<<"CURP:"<<CURP<<endl;
      cout<<"Fecha Numeros de Gobierno: ";
      cFecha::imprimir();
                 }//---OK
};

class cTrabajador:public cPersona//------------------Clase Alumno
      {
protected:
       double Salario;
       int nc, i;
       float Prom, *apCal;

public:
       void leer()
            {
        cPersona::leer();
        cout<<"Capture el Salario: ";
        cin>>Salario;
        
                  }
  
    void imprimir()
            {
    cPersona::imprimir();
    cout<<"Salario: "<<Salario<<endl;
    cout<<"IVA: "<<(Salario*.30)<<endl;
    cout<<"Salario Neto: "<<(Salario-(Salario*.30))<<endl;
           }
  cTrabajador(){}
  ~cTrabajador(){}
           };
           
int main()
{
    int nT, i;
    cTrabajador *apTrabajador;
    do{
            cout<<"\t Indique el numero de Trabajadores: ";
            cin>>nT;
            }while(nT<=0||nT>=40);
            apTrabajador=new cTrabajador[nT];
    for(i=0;i<nT;i++)
            apTrabajador[i].leer();//(*apAlumno+i).leer//(apAlumno+i)->leer//
            system("cls");
            cout<<"\t Lista de  Trabajadores"<<endl;
    for(i=0;i<nT;i++)
            apTrabajador[i].imprimir ();
            delete[]apTrabajador;
            system("pause");
            return 0;
}




