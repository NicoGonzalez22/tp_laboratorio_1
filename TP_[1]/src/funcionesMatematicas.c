#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "funcionesMatematicas.h"
#include "funcionesIngresoDeDatos.h"

float SumarNumeros(float numUno,float numDos)
{
	float total;
	total= numUno+numDos;
	return total;
}
float RestarNumeros(float numUno,float numDos)
{
	float total;
	total=numUno-numDos;
	return total;
}
float DividirNumeros(float* resultado,float numUno,float numDos)
{
	float retorno;
	retorno=-1;
	if(resultado!=NULL&&numDos!=0)
	{
		*resultado=numUno/numDos;
		retorno=0;
	}
	return retorno;
}
float MultiplicarNumeros(float numUno,float numDos)
{
	float total;
	total= numUno*numDos;

	return total;
}
int FactoriarNumeroA(int* pResultado,float numUno)
{
	int numUnoEntero;
	int i;
	int fact;
	int retorno;
	numUnoEntero=numUno;
	fact=1;
	retorno=-1;
	if(numUno==0)
	{
		*pResultado=1;
		retorno=0;
	}else
	{
		if(numUno<0)
		{
		retorno=1;
		}else
		{
			if(numUnoEntero-numUno==0)
			{
				for(i=numUnoEntero;i>0;i--)
				{
					fact=fact*i;
					retorno=0;
				}
				*pResultado=fact;
			}
		}
	}
	return retorno;
}

int FactoriarNumeroB(int* pResultado,float numDos)
{
	int numDosEntero;
	int retorno;
	int i;
	int fact;
	retorno=-1;
	numDosEntero=numDos;
	fact=1;
	if(numDos==0)
	{
		*pResultado=1;
		retorno=0;

	}else
	{
		if(numDos<0)
		{
		retorno=1;

		}else
		{
			if(numDosEntero-numDos==0)
			{
				for(i=numDosEntero;i>0;i--)
				{
					fact=fact*i;
					retorno=0;
				}
				*pResultado=fact;
			}
		}
	}
	return retorno;
}
