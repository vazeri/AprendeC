#include <iostream>
#include <string>
#define n 3
using namespace std;

struct Estudiante{
string Boleta;
string Nombre;
float Cals[n];
float Prom;
};

float CapturaNum(string Msg);
string CapturaCad(string Msg);
float CalcularProm(float Calif[n]);
void CapturaAlumno(Estudiante *apAlumno);
void Imprimir(Estudiante *apAlumno);

int main()
{
    int i, nA;
    Estudiante *apAlumno;
    nA=int(CapturaNum("Indique Numero de Alumnos: "));
        if(nA<1) {cout<<" Error al crear memoria Dinamica"<<endl;}
            else {apAlumno=new Estudiante[nA];
                for(i=0;i<nA;i++)
                    CapturaAlumno(&apAlumno[i]);
        system("CLS");
                for(i=0;i<nA;i++)
                    Imprimir(&apAlumno[i]);
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
    (*apAlumno).Boleta=CapturaCad("Introdusca No de Boleta: ");
    (*apAlumno).Nombre=CapturaCad("Introdusca el Nombre del Alumno: ");
        for(j=0;j<n;j++)
    (*apAlumno).Cals[j]=CapturaNum("Introdusca Calificacion: ");
    (*apAlumno).Prom=CalcularProm((*apAlumno).Cals);
}

void Imprimir(Estudiante*apAlumno)
{
    int k;
    cout<<"Boleta: "<<apAlumno->Boleta<<endl;
    cout<<"Nombre: "<<apAlumno->Nombre<<endl;
        for(k=0;k<n;k++)
    cout<<"Calificacion "<<k+1<<" : "<<apAlumno->Cals[k]<<endl;
    cout<<"Promedio: "<<apAlumno->Prom<<endl;

    }
