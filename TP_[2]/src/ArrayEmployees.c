#include "ArrayEmployees.h"

void CargarEmpleado(Employee empleados[])
{
	int id;
	char name[TamName];
	char lastname[TamName];
	int salary;
	int sector;

	id=1;
	CargarNombreOApellido(name,"Ingrese su nombre: ","¡Error! Ingrese nuevamente su nombre: ");
	CargarNombreOApellido(lastname,"Ingrese su Apellido: ","¡Error! Ingrese nuevamente su Apellido: ");
	salary=CargarFlotante("Ingrese su salario: ","¡Error! salario no valido,ingreselo nuevamente: ");
	sector=CargarEntero("Ingrese su sector","¡Error! sector no valido, ingreselo nuevamente: ");
	addEmployee(empleados,EMPLEADOSmax,id,name,lastname,salary,sector);
}


int initEmployees(Employee empleados[],int len)
{
	int retorno;
	if(empleados!=NULL&&len>0)
	{
		for(int i=0;i<=len;i++)
		{
			empleados[i].isEmpty=VACIO;
			retorno=0;
		}
	}else
	{
		retorno=-1;
	}
	return retorno;
}

int addEmployee(Employee empleados[],int len,int id,char name[],char lastName[],float salary,int sector)
{
	int retorno;
	retorno=-1;
	if(empleados!=NULL&&len>0&&id>0&&name!=NULL&&lastName!=NULL&&salary>0&&sector>0)
	{
		for(;id<=len;id++)
		{
			if(empleados[id].isEmpty==VACIO)
			{
				empleados[id].id=id;
				strcpy(empleados[id].name,name);
				strcpy(empleados[id].lastName,lastName);
				empleados[id].salary=salary;
				empleados[id].sector=sector;
				empleados[id].isEmpty=CARGADO;
				printf("Su id es: %4d\n",empleados[id].id);
				retorno=0;
				break;
			}
		}
	}

	return retorno;
}

int findEmployeeById(Employee empleados[],int len,int id)
{
	int retorno;
	 retorno=-1;
	if(empleados!=NULL&&len>0&&id>0)
	{
			for(int i=0;i<len;i++)
		{
			if(i==empleados[id].id&&empleados[id].isEmpty==CARGADO)
			{
				retorno=i;
			}
		}
	}
	return retorno;
}


int removeEmployee(Employee empleados[],int len, int id)
{
	int retorno;

	int empleado;

	retorno=-1;

	if(empleados[id].isEmpty==CARGADO &&empleados!=NULL&&len>0&&id>0)
	{
			for(int j=0;j<len;j++)
		{
			if(id==empleados[j].id)
			{
				empleado=j;
			}
		}
		for(int i=0;i<=len;i++)
		{
				if(i==empleados[i].id&&empleados[empleado].id==id)
				{
						empleados[id].isEmpty=VACIO;
						retorno=0;
				break;
				}
		}
	}

	return retorno;
}

int sortEmployees(Employee empleados[],int len,int order)
{
	Employee empleadosAux[EMPLEADOSmax];
	for(int i=0;i<len;i++)
	{
	empleadosAux[i]=empleados[i];
	}

	int retorno;
	int sectorAux;
	int idAux;
	int salaryAux;
	char nameAux[TamName];
	char lastNameAux[TamName];
	int isEmptyAux;
	retorno=-1;
	for(int j=1;j<len;j++)
	{
		for(int k=j+1;k<len;k++)
		{
			if(order==1)
			{
					if(empleadosAux[j].sector>empleadosAux[k].sector&&empleadosAux[j].isEmpty==CARGADO&&empleadosAux[k].isEmpty==CARGADO)
				{
					idAux=empleadosAux[j].id;
					empleadosAux[j].id=empleadosAux[k].id;
					empleadosAux[k].id=idAux;

					salaryAux=empleadosAux[j].salary;
					empleadosAux[j].salary=empleadosAux[k].salary;
					empleadosAux[k].salary=salaryAux;

					strcpy(nameAux,empleadosAux[j].name);
					strcpy(empleadosAux[j].name,empleadosAux[k].name);
					strcpy(empleadosAux[k].name,nameAux);

					strcpy(lastNameAux,empleadosAux[j].lastName);
					strcpy(empleadosAux[j].lastName,empleadosAux[k].lastName);
					strcpy(empleadosAux[k].lastName,lastNameAux);

					sectorAux=empleadosAux[j].sector;
					empleadosAux[j].sector=empleadosAux[k].sector;
					empleadosAux[k].sector=sectorAux;

					isEmptyAux=empleadosAux[j].isEmpty;
					empleadosAux[j].isEmpty=empleadosAux[k].isEmpty;
					empleadosAux[k].isEmpty=isEmptyAux;
					retorno=0;
				}
			}else
			{
				if(order==0)
				{
					if(empleadosAux[j].sector<empleadosAux[k].sector&&empleadosAux[j].isEmpty==CARGADO&&empleadosAux[k].isEmpty==CARGADO)
								{
									idAux=empleadosAux[j].id;
									empleadosAux[j].id=empleadosAux[k].id;
									empleadosAux[k].id=idAux;

									salaryAux=empleadosAux[j].salary;
									empleadosAux[j].salary=empleadosAux[k].salary;
									empleadosAux[k].salary=salaryAux;

									strcpy(nameAux,empleadosAux[j].name);
									strcpy(empleadosAux[j].name,empleadosAux[k].name);
									strcpy(empleadosAux[k].name,nameAux);

									strcpy(lastNameAux,empleadosAux[j].lastName);
									strcpy(empleadosAux[j].lastName,empleadosAux[k].lastName);
									strcpy(empleadosAux[k].lastName,lastNameAux);

									sectorAux=empleadosAux[j].sector;
									empleadosAux[j].sector=empleadosAux[k].sector;
									empleadosAux[k].sector=sectorAux;

									isEmptyAux=empleadosAux[j].isEmpty;
									empleadosAux[j].isEmpty=empleadosAux[k].isEmpty;
									empleadosAux[k].isEmpty=isEmptyAux;
									retorno=0;
								}
				}
			}

		}
	}
	printEmployees(empleadosAux,len);
	return retorno;
}

int printEmployees(Employee empleadosAux[],int length)
{
	int retorno;
	retorno=-1;
	printf("ID       APELLIDO        NOMBRE         SALARIO  SECTOR\n");
	if(empleadosAux!=NULL&&length>0)
	{
		for(int i=0;i<=length;i++)
		{
			if(empleadosAux[i].isEmpty==CARGADO)
			{

				printf("%d %15s %13s %15.2f %4d\n",empleadosAux[i].id,empleadosAux[i].lastName,empleadosAux[i].name,empleadosAux[i].salary,empleadosAux[i].sector);

				retorno=0;
			}
		}

	}
	return retorno;
}
void ModificarEmpleado(Employee empleados[],int id)
{
	int opcion;
for(int i=0;i<=EMPLEADOSmax;i++)
{
	if(i==empleados[id].id&&empleados[id].isEmpty==CARGADO)
	{
		do
		{

			printf("1-Modificar Nombre \n"
					"2-Modificar Apellido \n"
					"3-Modificar Salario \n"
					"4-Modificar Sector \n"
					"5-Salir\n");
			opcion=CargarEntero("Ingrese la opcion: ","¡Error!Ingrese la opcion nuevamente: ");
			switch(opcion)
			{
				 case 1:
					 PedirString(empleados[id].name,"Ingrese el nombre: ");
				break;
				 case 2:
					 PedirString(empleados[id].lastName,"Ingrese su Apellido: ");
				break;
				 case 3:
					 empleados[id].salary=CargarFlotante("Ingrese el salario: ","¡Error! Ingrese nuevamente el salario");
				break;
				 case 4:
					 empleados[id].sector=CargarEntero("Ingrese el sector","¡Error!Ingrese nuevamente el sector");
				break;
			}
		}while(opcion>0&&opcion<4);
		break;
	}
}

}


void CalcularPromedioYTotal(Employee empleados[],int len)
{
	int cantEmpleados;
	int totalSalarios;
	int promedioTotal;
	int cantEmpleadosSobreElPromedio;
	totalSalarios=0;
	cantEmpleados=0;
	cantEmpleadosSobreElPromedio=0;
	for(int i=0;i<len;i++)
	{
		if(empleados[i].isEmpty==CARGADO)
		{
			cantEmpleados++;
			totalSalarios=totalSalarios+empleados[i].salary;
		}
	}
	promedioTotal=totalSalarios/cantEmpleados;
	for(int j=0;j<len;j++)
	{
		if(empleados[j].isEmpty==CARGADO&&empleados[j].salary>promedioTotal)
		{
			cantEmpleadosSobreElPromedio++;
		}
	}

	printf(" El total de los salario es: %d \n El promedio de los salarios es: %d \n La cantidad de empleado que superan el promedio es: %d\n",totalSalarios,promedioTotal,cantEmpleadosSobreElPromedio);
}

void menuOp4(Employee empleados[])
{
	int opcion;
	int opcionCase1;
	do
	{
	printf("1-Listado Empleados ordenados\n"
			"2-Total,Promedio de salarios y cantidad de empleados que superan el promedio\n3-Salir\n");
			opcion=CargarEntero("Ingrese la opcion que desee: ","¡Error! Ingrese una opcion valida");
	switch(opcion)
	{
	case 1:
		opcionCase1=CargarEnteroConMaxYMin("1-Listado ascendente \n0-Listado descendente\nIngrese opcion: ","¡Error!Ingrese una opcion valida",0,1);
		sortEmployees(empleados, EMPLEADOSmax,opcionCase1);
		break;
	case 2:
		CalcularPromedioYTotal(empleados,EMPLEADOSmax);
		break;

	}
	}while(opcion>0&&opcion<3);



}



