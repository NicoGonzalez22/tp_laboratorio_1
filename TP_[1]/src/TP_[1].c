
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "funcionesMatematicas.h"
#include "funcionesIngresoDeDatos.h"

int main(void) {
	setbuf(stdout, NULL);
	int opciones;
	int contadorOpcionUno;
	int contadorOpcionDos;
	int contadorOpcionCalcularOperaciones;
	float numA;
	float numB;
	float totalSuma;
	float totalResta;
	float totalDivision;
	float siNumBEsCero;
	float totalMultiplicacion;
	int totalFactorialA;
	int totalFactorialB;
	int devolucionFuncionFactoriarA;
	int devolucionFuncionFactoriarB;
	contadorOpcionCalcularOperaciones=0;
	contadorOpcionUno=0;
	contadorOpcionDos=0;
	do
	{
		if(contadorOpcionUno==0&&contadorOpcionDos==0)
		{
				printf( "--------------------------------- \n"
						"1. Ingresar 1er operando (A=X) \n"
						"2. Ingresar 2do operando (B=Y) \n"
						"3. Calcular todas las operaciones \n"
						"4. Informar resultados \n"
						"5. Salir \n"
						"--------------------------------- \n");
		}else
		{
			if(contadorOpcionUno>=1&&contadorOpcionDos>=1)
			{
				printf( "--------------------------------- \n"
						"1. Ingresar 1er operando (A=%.2f) \n"
						"2. Ingresar 2do operando (B=%.2f) \n"
						"3. Calcular todas las operaciones \n"
						"4. Informar resultados \n"
						"5. Salir \n"
						"--------------------------------- \n",numA,numB);
			}else
			{
				if(contadorOpcionUno>=1)
			{
				printf( "--------------------------------- \n"
						"1. Ingresar 1er operando (A=%.2f) \n"
						"2. Ingresar 2do operando (B=Y) \n"
						"3. Calcular todas las operaciones \n"
						"4. Informar resultados \n"
						"5. Salir \n"
						"--------------------------------- \n",numA);
			}else
			{
				if(contadorOpcionDos>=1)
				{
					printf(	"--------------------------------- \n"
							"1. Ingresar 1er operando (A=X) \n"
							"2. Ingresar 2do operando (B=%.2f) \n"
							"3. Calcular todas las operaciones \n"
							"4. Informar resultados \n"
							"5. Salir \n"
							"--------------------------------- \n",numB);
				}
			}
			}

		}

		opciones=IngresarOpciones("Ingrese la opcion deseada: ","¡Error! Ingrese una opcion valida (1-2-3-4-5)",1,5);

		switch(opciones)
		{
		case 1:
			contadorOpcionUno++;
			numA=IngresarNumero("\nIngrese el 1er operando (A)","¡Error!");
			printf("\nSe ha ingresado correctamente el operando 'A'->(%.2f)!\n\n",numA);


		break;
		case 2:
			contadorOpcionDos++;
			numB=IngresarNumero("\nIngrese el 2er operando (B)","¡Error!");
			printf("\nSe ha ingresado correctamente el operando 'B'->(%.2f)!\n\n",numB);
		break;
		case 3:
			if(contadorOpcionUno>=1&&contadorOpcionDos>=1)
			{
				totalSuma=SumarNumeros(numA,numB);
				totalResta=RestarNumeros(numA,numB);
				siNumBEsCero=DividirNumeros(&totalDivision,numA,numB);
				totalMultiplicacion=MultiplicarNumeros(numA,numB);
				devolucionFuncionFactoriarA=FactoriarNumeroA(&totalFactorialA,numA);
				devolucionFuncionFactoriarB=FactoriarNumeroB(&totalFactorialB,numB);
				contadorOpcionCalcularOperaciones++;

				printf("\nSe han realizado todas las operaciones! \n\n");
			}else
			{
				printf("\nPor favor primero ingrese los operadores para realizar las operaciones \n\n");
			}

		break;
		case 4:
			if(contadorOpcionCalcularOperaciones>=1)
			{
				printf("\nEl resultado de %.2f+%.2f es: %.2f\n",numA,numB,totalSuma);
				printf("El resultado de %.2f-%.2f es: %.2f\n",numA,numB,totalResta);

				if(siNumBEsCero==0)
				{
					printf("El resultado de %.2f/%.2f es: %.3f\n",numA,numB,totalDivision);
				}else
				{
					printf("No es posible dividir por cero\n");
				}

				printf("El resultado de %.2f*%.2f es: %.2f\n",numA,numB,totalMultiplicacion);

				if(devolucionFuncionFactoriarA==0)
				{
					printf("El total del factorial %.2f es: %d\n",numA,totalFactorialA);
				}else
				{
					if(devolucionFuncionFactoriarA==-1)
				{
					printf("No se puede factorizar el numero %.2f porque contiene decimales\n",numA);
				}else
				{
					if(devolucionFuncionFactoriarA==1)
					{
						printf("No se puede factorizar el numero %.2f porque es negativo\n\n",numA);
					}
				}

				}
				if(devolucionFuncionFactoriarB==0)
				{
					printf("El total del factorial %.2f es: %d\n\n",numB,totalFactorialB);
				}else
				{
					if(devolucionFuncionFactoriarB==-1)
					{
						printf("No se puede factorizar el numero %.2f porque contiene decimales\n\n",numB);
					}else
					{
						if(devolucionFuncionFactoriarB==1)
						{
						printf("No se puede factorizar el numero %.2f porque es negativo\n\n",numB);
						}

					}

				}
			}else
			{
				printf("\nPor favor primero realice las operaciones con la opcion 3 para mostrar la lista de resultados \n\n");
			}

		break;
		case 5:
			printf("\n¡Hasta luego!\n");
		break;
		}


	}while(opciones<5);

	return EXIT_SUCCESS;
}
