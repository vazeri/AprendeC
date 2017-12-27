Estudiante::Estudiante()
{
Cals[0]=0;
Cals[1]=0;
Cals[2]=0;
double Prom=0;                        
}
Estudiante::~Estudiante(){}
void Estudiante::Capturaest()
{
int j;
Boleta=Capturacad("CAPTURA EL NUMERO DE BOLETA: ");
Nombre=Capturacad("CAPTURA EL NOMBRE DEL ALUMNO: ");
Cals[0]=Capturacals();
Cals[1]=Capturacals();
Cals[2]=Capturacals();
}

double Estudiante::Calprom(){
    Prom=(Cals[0]+Cals[1]+Cals[2])/3;
    return Prom;
}

double Estudiante::Capturacals()
{ 
float cal;
do{                                                      
cal = Capturanum("INTRODUSCA LA CALIFICACION: ");
if(cal>=0 && cal<=10)
{
return cal;
                        }
else{
cout<<"INTRODUSCA UNA CALIFICACION VALIDA(0-10)"<<endl;      
}
}while(cal<0 or cal>10);
return cal;
}
       
double Estudiante::Capturanum(string Msg)
{
double Numero;
cout<<Msg;
cin>>Numero;
return Numero;  
}
   
string Estudiante::Capturacad(string Msg)
{                              
string texto;
fflush(stdin);
cout<<Msg;
getline(cin,texto); 
return texto;      
}

void Estudiante::Imprimirest()
{
cout<<"NUMERO DE BOLETA: "<<Boleta<<endl;
cout<<"NOMBRE DEL ALUMNO: "<<Nombre<<endl;
cout<<"PROMEDIO DE: "<<Prom<<endl;
}
