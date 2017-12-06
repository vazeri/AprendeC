#include <iostream>
#include <string>
#define n 3
using namespace std;

struct Fecha{
    int dia;
    int mes;
    int anio;
};

struct Estudiante{
string Boleta;
string Nombre;
Fecha FecIng;
float Cals[n];
float Prom;
};

float CapturaNum(string Msg);
string CapturaCad(string Msg);
float CalcularProm(float Calif[n]);
void CapturaAlumno(Estudiante *apAlumno);
void Imprimir(Estudiante *apAlumno);
void CapturaReg(Estudiante *apAlumno);
void ImprimeReg(Estudiante *apAlumno);

int main()
{
    int i, o, nA; Estudiante *apAlumno, *apAL;
cout<<"                     ____ _____ _____  _    _ ____   "<<endl;
cout<<"                    / __// ___|\\_    \\| \\  / || __\\  "<<endl;
cout<<"                   / /_  | \\__   | |\\/|  \\/  || |__  "<<endl;
cout<<"                  / __/  \\___ \\  | |  |      || ___\\  "<<endl;
cout<<"                 / /___  ___/ | _| |__| |\\/  || |___   "<<endl;
cout<<"                /_____/ |____/ /_____/|_/  \\_||_____\\  "<<endl;
cout<<"                    Pagina de Descontrol Escolar"<<endl;
cout<<"    "<<endl;
    nA=int(CapturaNum("Indique Numero de Alumnos: "));
        if(nA<1) {cout<<" Error al crear memoria Dinamica"<<endl;}
            else {apAlumno=new Estudiante[nA];
                for(i=0;i<nA;i++)
                {
                    CapturaAlumno(&apAlumno[i]);
                    //CapturaReg(&apAL[i]);
                    }
        system("CLS");
                for(i=0;i<nA;i++)
                {
                    Imprimir(&apAlumno[i]);
                    //ImprimeReg(&apAL[i]);
                    }
        system("pause");
        return 0;
            }
}

float CapturaNum(string Msg) //Pide Datos
{
    float Numero;
    cout<<Msg;
    cin>>Numero;
    return Numero;
}

string CapturaCad(string Msg)
{
    string texto;
    fflush(stdin);
    cout<<Msg;
    getline(cin,texto); //Cadenas de texto
    return texto;
}

float CalcularProm(float Calif[n])
{
    float P=0;
    int i;
    for(i=0;i<n;i++) //inicio;fin;incremento
    P+=Calif[i];
    P=P/n;
    return P;
}

void CapturaAlumno(Estudiante *apAlumno)
{
    int j, Estudiante;
    cout<<"            "<<endl;
    (*apAlumno).Boleta=CapturaCad("No de Boleta: ");
    (*apAlumno).Nombre=CapturaCad("Nombre del Alumno: ");
        for(j=0;j<n;j++)
    (*apAlumno).Cals[j]=CapturaNum("Calificacion: ");
    (*apAlumno).Prom=CalcularProm((*apAlumno).Cals);
    apAlumno->FecIng.dia=int(CapturaNum("Dia de Ingreso: "));
    apAlumno->FecIng.mes=int(CapturaNum("Mes Ingreso: "));
    apAlumno->FecIng.anio=int(CapturaNum("Anio Ingreso: "));

}

void CapturaReg(Estudiante *apAlumno)
{
    cout<<"            "<<endl;
    cout<<"- Captura la fecha en forma separada -"<<endl;
    cout<<"            "<<endl;
    apAlumno->FecIng.dia=int(CapturaNum("Dia de Ingreso: "));
    apAlumno->FecIng.mes=int(CapturaNum("Mes Ingreso: "));
    apAlumno->FecIng.anio=int(CapturaNum("Anio Ingreso: "));
}

void ImprimeReg(Estudiante *apAlumno)
{    
     cout<<"            "<<endl;
    cout<<"Fecha de Ingreso: "<<apAlumno->FecIng.dia<<"/"<<apAlumno->FecIng.mes<<"/"<<apAlumno->FecIng.anio<<endl;
    cout<<"            "<<endl;
}

void Imprimir(Estudiante *apAlumno)
{
    int k;
    cout<<"            "<<endl;
    cout<<"Boleta: "<<apAlumno->Boleta<<endl;
    cout<<"Nombre: "<<apAlumno->Nombre<<endl;
        for(k=0;k<n;k++)
    cout<<"Calificacion "<<k+1<<" : "<<apAlumno->Cals[k]<<endl;
    cout<<"Promedio: "<<apAlumno->Prom<<endl;
   cout<<"            "<<endl;
    cout<<"Fecha de Ingreso: "<<apAlumno->FecIng.dia<<"/"<<apAlumno->FecIng.mes<<"/"<<apAlumno->FecIng.anio<<endl;
    cout<<"            "<<endl;
    }
