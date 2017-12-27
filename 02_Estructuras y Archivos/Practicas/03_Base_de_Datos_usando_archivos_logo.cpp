#include <fstream>
#include "3erSem.h"
#include "iostream"
#include "conio.h"
#include "string.h"
using namespace std;

class nodo
{
public:
		nodo *siguiente,*anterior;
	float preci,cantidad;

    char empresa[20],direc[20],producto[20],clave[20],color;

	int cont;
	nodo(){siguiente=NULL;anterior=NULL;}
	
	friend class lista;
};

class lista
{
	nodo *inicio,*final,*s;
public:
    void portada();
	void insertainicio(int);
	nodo* busqueda(int);
	void actualizar(nodo*);
	nodo* borrar(nodo *);
	void imprimir();
	void guardar();
	void leer();
    void consulta(int);
	int cont;
	lista(){inicio=NULL;final=NULL; s=NULL;cont=0;}
};
void lista::insertainicio(int numero)
{
	nodo *p= new(nodo);
	cout<<"Nombre de la empresa: "<<endl;
	cin>>p->empresa;
	cout<<"Direccion: "<<endl;
	cin>>p->direc;
	cout<<"Nombre del producto: "<<endl;
	cin>>p->producto;
	cout<<"Clave del producto: "<<endl;
	cin>>p->clave;
	cout<<"Cantidad: "<<endl;
	cin>>p->cantidad;
	cout<<"Precio: "<<endl;
	cin>>p->preci;
	p->cont=numero;
	p->siguiente=inicio;
	p->anterior=NULL;
	inicio=p;
}
void lista::consulta(int n)
{
	nodo *p=inicio;
	
	while(p->cont!=n && p->siguiente!=NULL)
	{
		s=p;
		p=p->siguiente;
	}
	cout<<p->empresa<<endl;
	cout<<p->direc<<endl;
	cout<<p->producto<<endl;
	cout<<p->clave<<endl;
	cout<<p->cantidad<<endl;
	cout<<p->color<<endl;
	cout<<p->preci<<endl;
}

nodo* lista::busqueda(int n)
{
	nodo *p=inicio;
	while(p->cont!= n && p->siguiente!=NULL)
	{
		s=p;
		p=p->siguiente;
	}
	return p;

}
nodo* lista::borrar(nodo *r)
{

	s->siguiente=r->siguiente;
	delete r;
	return s;
}

void lista::portada()
	{
   LogoEsime();
   cout<<""<<endl;
   Fecha(); //Libreria Propia, Agrega Dia Mes y Anio
   Datos("\t Base de datos que almacena en un archivo \n",03); //Libreria datos Titulo, No de Practica y Programa    
               }
               
void lista::actualizar(nodo* p)
{
	int op=0;
	cout<<p->empresa<<endl;
	cout<<p->direc<<endl;
	cout<<p->producto<<endl;
	cout<<p->clave<<endl;
	cout<<p->cantidad<<endl;
	cout<<p->preci<<endl<<endl;

	cout<<"Elija la opcion que desea actualizar: \n"<<endl;
	cout<<"1. Nombre de la empresa "<<endl;
	cout<<"2. Direccion "<<endl;
	cout<<"3. Nombre del producto "<<endl;
	cout<<"4. Clave del producto "<<endl;
	cout<<"5. Cantidad "<<endl;
	cout<<"6. Precio "<<endl;
	cout<<"7. REGRESAR A MENU PRINCIPAL"<<endl;
	cin>>op;
	if(op==1)
	{
		cout<<"Nuevo nombre de la empresa: "<<endl;
		cin>>p->empresa;
	}
	if(op==2)
	{
		cout<<"Nueva direccion: "<<endl;
		cin>>p->direc;

	}
	if(op==3)
	{
		cout<<"Nuevo nombre del producto: "<<endl;
		cin>>p->producto;
	}
	if(op==4)
	{
		cout<<"Nueva clave: "<<endl;
		cin>>p->clave;
	}
	if(op==5)
	{
		cout<<"Nueva cantidad: "<<endl;
		cin>>p->cantidad;
	}
	if(op==6)
	{
		cout<<"Nuevo precio: "<<endl;
		cin>>p->preci;
 }}

void lista::imprimir()
{
	nodo *p=inicio;
	
	while(p!=NULL)
	{
		cout<<"Numero de producto: "<<p->cont<<endl;
		cout<<"Empresa:     "<<p->empresa<<endl;
		cout<<"Direccion:   "<<p->direc<<endl;
		cout<<"Producto:    "<<p->producto<<endl;
		cout<<"Clave:       "<<p->clave<<endl;
		cout<<"Cantidad:    "<<p->cantidad<<endl;
		cout<<"Precio:      "<<p->preci<<endl;
		cout<<"----------------------------------"<<endl;
		p=p->siguiente;

	}
}


void lista::guardar()
{
     ofstream file;
     nodo *p=inicio;	
do{
      file.open("Base_de_Datos.txt",ios::out | ios::app | ios::binary); //Abre archivo
      if(!file){cout<<" Archivo Abierto para escritura"<<endl;}
            //ALGO PASO AQUI
		file<<"No de producto: "<<p->cont<<"\n"<<endl;
    	file<<"Empresa:     "<<p->empresa<<"\n"<<endl;
	    file<<"Direccion:   "<<p->direc<<"\n"<<endl;
		file<<"Producto:    "<<p->producto<<"\n"<<endl;
		file<<"Clave:       "<<p->clave<<"\n"<<endl;
		file<<"Cantidad:    "<<p->cantidad<<"\n"<<endl;
		file<<"Precio:      "<<p->preci<<"\n"<<endl;
		file<<"   ---------- \n"<<endl;
		p=p->siguiente;
            }while(p!=NULL);
            	
        file.close();
 cout<<"\n Informacion Guardada en archivo Base de Datos \n"<<endl;
        system("pause");
	}

void lista::leer()
{
  cout<<"Cargando archivo Base de Datos... \n"<<endl;
  string line;
  ifstream file ("Base_de_Datos.txt");
  if (file.is_open())
  {
    while ( file.good() )
    {
//    cout << "Leyendo Archivo"<<endl; 
      getline (file,line);
      cout << line << endl;          
  //    cout << "Archivo leido"<<endl;
    }
    file.close();
  system("pause");
  }
  else cout << "No se pudo abrir el archivo \n "<<endl; 

  system("pause");
	}

//////////////////////////////
int main()
{
	lista x1;
	int n=0,k=0,i=0,opc=0,contador=0;
	nodo *x;
	char con[20]="erick",usuario[20];
	do
	{
		cout<<"\t\t Introdusca su contrasenia: ";
		cin.getline(usuario,20);
	}while(strcmp(con,usuario)!=0);
	system("cls");


	do
	{   
   LogoEsime();
   cout<<""<<endl;
   Fecha(); //Libreria Propia, Agrega Dia Mes y Anio
   Datos("\t Base de datos que almacena en un archivo \n",03); //Libreria datos Titulo, No de Practica y Programa
      
       
		cout<<"                 MENU PRINCIPAL            "<<endl;
		cout<<"1. Altas"<<endl;
		cout<<"2. Bajas"<<endl;
		cout<<"3. Consulta"<<endl;
		cout<<"4. Actualizar"<<endl;
		cout<<"5. Listar"<<endl;
		cout<<"6. Guardar Archivo"<<endl;
		cout<<"7. Cargar Archivo"<<endl;
		cout<<"8. Salir"<<endl;
		
        cin>>opc;
		system("cls");
		switch(opc)
		{
		case 1:
			{
				if(opc==1)
				{
                    x1.portada();
                    x1.insertainicio(contador);
					
					system("cls");
					break;
				}
			}
		case 2:
			{
				if(opc==2)
				{   x1.portada();
					cout<<"Numero del producto que quiere borrar: "<<endl;
					cin>>n;

					x=x1.busqueda(n);
					x=x1.borrar(x);
					system("pause");
				}
				break;
			}
		case 3:
			{
				if(opc==3)
				{   x1.portada();
     				cout<<"Numero del producto que quiere consultar: "<<endl;
					cin>>n;
					x1.consulta(n);
					system("pause");
				}
			}
		case 4:
			{ 			if(opc==4)
				{   x1.portada();
					cout<<"No. del producto que quiere consultar: "<<endl;
					cin>>n;
					
					x=x1.busqueda(n);
					x1.actualizar(x);
					system("pause");
				}
			}
			
		case 5:
			{
                if(opc==5)
				{
                          x1.portada();
					x1.imprimir();
					break;
				}
			}
		
		case 6:
			{ // nodo *p=inicio; en un archivo \n",03); //Libreria datos Titulo, No de Practica y Programa
      			if(opc==6)
				{x1.portada();
            x1.guardar();
			         }break;
                    }
			
		case 7:
			{if(opc==7)
				{x1.portada();
                	x1.leer();
					break;
				}
			}
        } //fin del switch 
	}while(opc!=8); //fin del do 

	return 0;
} // main 
