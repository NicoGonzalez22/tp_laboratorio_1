#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "funcionesMatematicas.h"
#include "funcionesIngresoDeDatos.h"

float IngresarNumero(char mensaje[],char mensajeError[])
{
	float numUno;
	if(mensaje!=NULL&&mensajeError!=NULL)
	{
		printf("%s",mensaje);
		scanf("%f",&numUno);
	}else
	{
		printf("%s",mensajeError);
		scanf("%f",&numUno);
	}
	return numUno;
}
int IngresarOpciones(char mensaje[],char mensajeError[],int minimo,int maximo)
{
	int opcion;
	if(mensaje!=NULL&&minimo<maximo)
	{

		printf("%s",mensaje);
		scanf("%d",&opcion);

		while(opcion<minimo||opcion>maximo)
		{
			printf("%s",mensajeError);
			scanf("%d",&opcion);
		}
	}

	return opcion;
}


