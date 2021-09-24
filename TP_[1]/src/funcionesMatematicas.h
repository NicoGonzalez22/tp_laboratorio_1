/*
 * funcionesMatematicas.h
 *
 *  Created on: 24 sept 2021
 *      Author: Usuario
 */

#ifndef FUNCIONESMATEMATICAS_H_
#define FUNCIONESMATEMATICAS_H_
/// @fn float SumarNumeros(float, float)
/// @brief recibe dos numeros y los suma.
///
/// @param numUno Operador A ingresado
/// @param numDos Operador B ingresado
/// @return	La suma de los dos numeros
float SumarNumeros(float,float);



/// @fn float RestarNumeros(float, float)
/// @brief recibe dos numeros y los resta.
///
/// @param numUno Operador A ingresado
/// @param numDos Operador B ingresado
/// @return La resta de los dos numeros
float RestarNumeros(float,float);



/// @fn float DividirNumeros(float*, float, float)
/// @brief recibe dos numeros,valida que el divisor no sea 0(en caso que sea 0 la operacion no se realiza) y realiza la operacion.
/// 	   Utilizamos a "resultado" para asignarle el resultado de la operacion
///
/// @param resultado Donde se guardara el resultado
/// @param numUno Operador A ingresado
/// @param numDos Operador B ingresado
/// @return devuelve 0(si la operacion se realizo) o 1(si el divisor era 0) para luego evaluar el mensaje que querramos enviar si el resultado de la operacion o avisar que no se realizo la operacion por que el divisor era 0
///
float DividirNumeros(float*,float,float);



/// @fn float MultiplicarNumeros(float, float)
/// @brief recibe dos numeros y los multiplica.
///
/// @param numUno Operador A ingresado
/// @param numDos Operador B ingresado
/// @return La multiplicacion de los dos numeros
float MultiplicarNumeros(float,float);



/// @fn int FactoriarNumeroA(int*, float)
/// @brief Recibe un numero, valida que no sea un numero decimal(en caso que lo sea no realiza la operacion),valida si el numero ingresado
/// 	   es cero (devuelve pResultado=1) y valida si el numero es menor a cero (tampoco realizaria la operacion).
/// 	   Si el numero es entero y positivo, realiza el factorial del mismo.
/// 	   Ultilizamos a "pResultado" para asignar el resultado de la operacion
/// @param pResultado Donde se guardara el resultado
/// @param numUno	Operador A ingresado
/// @return	devuelve -1 (si el numero es decimal),devuelve 0 (si el numero es igual a 0 o si el numero es entero) y devuelve 1(si el numero es negativo)
int FactoriarNumeroA(int*,float);



/// @fn int FactoriarNumeroA(int*, float)
/// @brief Recibe un numero, valida que no sea un numero decimal(en caso que lo sea no realiza la operacion),valida si el numero ingresado
/// 	   es cero (devuelve pResultado=1) y valida si el numero es menor a cero (tampoco realizaria la operacion).
/// 	   Si el numero es entero y positivo, realiza el factorial del mismo.
/// 	   Ultilizamos a "pResultado" para asignar el resultado de la operacion
/// @param pResultado Donde se guardara el resultado
/// @param numDos	Operador B ingresado
/// @return	devuelve -1 (si el numero es decimal),devuelve 0 (si el numero es igual a 0 o si el numero es entero) y devuelve 1(si el numero es negativo)
int FactoriarNumeroB(int*,float);




#endif /* FUNCIONESMATEMATICAS_H_ */
