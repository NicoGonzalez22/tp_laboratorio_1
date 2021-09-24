/*
 * funcionesIngresoDeDatos.h
 *
 *  Created on: 24 sept 2021
 *      Author: Usuario
 */

#ifndef FUNCIONESINGRESODEDATOS_H_
#define FUNCIONESINGRESODEDATOS_H_


/// @fn float IngresarNumero(char[], char[])
/// @brief Pide y devuelve un numero flotante
///
/// @param mensaje El texto que se muestra al pedir el numero flotante
/// @param mensajeError El texto que se muestra al recibir un numero invalido
/// @return devuelve el numero ingresado
float IngresarNumero(char[],char[]);




/// @fn int IngresarOpciones(char[], char[], int, int)
/// @brief Pide y devuelve un numero que representa una opcion en el menu.
/// 	   Se utiliza a minimo y a maximo para definir un rango de opciones.
///
/// @param mensaje El texto que se muestra al pedir la opcion
/// @param mensajeError El texto que se muestra cuando sobrepasa el minimo o maximo asignado
/// @param minimo Numero minimo para definir el rango de opciones
/// @param maximo Numero maximo para definir el rango de opciones
/// @return devuelve la opcion ingresada
int IngresarOpciones(char[],char[],int,int);


#endif /* FUNCIONESINGRESODEDATOS_H_ */
