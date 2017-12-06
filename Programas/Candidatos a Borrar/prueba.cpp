#include<stdio.h>
#include<time.h>
#include<iostream>
#include<string>


main()
{
	struct tm *tiempo;
	int dia;
	int mes;
	int anio;

	time_t fecha_sistema;
	time(&fecha_sistema);
	tiempo=localtime(&fecha_sistema);
	
	anio=tiempo->tm_year + 1900;
	mes=tiempo->tm_mon + 1;
	dia=tiempo->tm_mday;
	printf("Fecha: %d %d %d",dia,mes,anio);
	system("pause");
}
