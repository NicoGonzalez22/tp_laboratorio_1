#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "ArrayEmployees.h"

int main(void) {
	setbuf(stdout,NULL);
	int idEliminarEmpleado;
	int idModificarEmpleado;
	int isEmpty;
	int opciones;
	int id;
	int validarOpciones;
	validarOpciones=0;
	id=1;

	Employee empleados[EMPLEADOSmax];
	isEmpty=initEmployees(empleados,EMPLEADOSmax);
	if(isEmpty==0)
	{
		printf("Bienvenido al menu de opciones\n");
	}
	do
	{

		printf("--------------------------"
				"\n1-ALTA a un empleado      |\n"
				"2-MODIFICAR un empleado   |\n"
				"3-BAJA a un empleado      |\n"
				"4-INFORMAR un empleado    |\n"
				"5-SALIR                   |\n"
				"--------------------------\n");
		opciones=CargarEntero("Ingrese la opcion deseada: ","¡Error! Ingrese nuevamente una opcion: ");
		if(opciones==1)
		{
			validarOpciones++;
		}
		switch(opciones)
		{
			case 1:

				id++;
				CargarEmpleado(empleados);
				break;
			case 2:
				if(validarOpciones>=1)
				{
					idModificarEmpleado=CargarEntero("Ingrese el id del empleado que desea modificar: ", "¡Error! Ingrese nuevamente el id del empleado que desea modificar: ");
					idModificarEmpleado=findEmployeeById(empleados,EMPLEADOSmax,idModificarEmpleado);
					ModificarEmpleado(empleados,idModificarEmpleado);

				}else
				{
					printf("Primero cargue algun empleado\n");
				}

				break;
			case 3:
				if(validarOpciones>=1)
				{
					idEliminarEmpleado=CargarEntero("Ingrese el id del empleado: ","¡Error! Ingrese nuevamente el id: ");
					if(removeEmployee(empleados, EMPLEADOSmax, idEliminarEmpleado)==0)
					{
						printf("Se ha eliminado el empleado correctamente\n");
						validarOpciones--;
					}else
					{
						printf("Ha ocurrido un error, volver a intentar\n");
					}
				}else
				{
					printf("Primero cargue algun empleado\n");
				}

				break;
			case 4:
				if(validarOpciones>=1)
				{
					menuOp4(empleados);
				}else
				{
					printf("Primero cargue algun empleado\n");
				}

				break;
		}
	}while(opciones>0&&opciones<5);
	return EXIT_SUCCESS;
}



