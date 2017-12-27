#include <iostream>
#include <string>
#include "Alumno.h"
using namespace std;

struct Fecha{
    int dia;
    int mes;
    int anio;
};

struct Estudiante{
    int Cals[3];
    float Prom;
    string Boleta;
    string Nombre;
    Fecha FecIng;
};

void CapturaReg(Estudiante *apAlumno);

void ImprimeReg(Estudiante *apAlumno);

float CapturaNum(string Msg);

int main()
{
    int nA,i;
    Estudiante *apAL;
    nA=int(CapturaNum("Indica el No de Alumnos"));
        if(nA>0)
        {

            apAL=new Estudiante[nA];
            for(i=0;i<nA;i++)
                CapturaReg(&apAL[i]);
        system("CLS");
            for(i=0;i<nA;i++)
                ImprimeReg(&apAL[i]);
        delete []apAL;
        }
        else{cout<<"Error al Reservar Memoria"<<endl;}
    system("PAUSE");
    return 0;    
}

void CapturaReg(Estudiante *apAlumno)
{
    apAlumno->Boleta=CapturaCad("Captura la Boleta: ");
    apAlumno->Nombre=CapturaCad("Captura el Nombre: ");
        cout<<"Captura la fecha en forma separada "<<endl;
    apAlumno->FecIng.dia=int(CapturaNum("Captura el dia Ing: "));
    apAlumno->FecIng.mes=int(CapturaNum("Captura el Mes Ing. "));
    apAlumno->FecIng.anio=int(CapturaNum("Captura el Anio Ing. "));
}

void ImprimeReg(Estudiante *apAlumno)
{
    cout<<"Boleta: "<<apAlumno->Boleta<<endl;
    cout<<"Nombre: "<<apAlumno->Nombre<<endl;
    cout<<"Fecha de Ingreso: "<<apAlumno->FecIng.dia<<"/"<<apAlumno->FecIng.mes<<"/"<<apAlumno->FecIng.anio<<endl;
}
    
