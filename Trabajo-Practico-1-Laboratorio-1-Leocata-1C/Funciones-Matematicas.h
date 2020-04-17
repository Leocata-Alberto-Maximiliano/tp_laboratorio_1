#include <stdio.h>
#include <stdlib.h>


/** \brief REALIZA LA SUMA DE DOS NUMEROS
 *
 * \param float
 * \param float
 * \return float
 *
 */
float sumar(float, float);

/** \brief REALIZA LA RESTA DE DOS NUMEROS
 *
 * \param float
 * \param float
 * \return float
 *
 */
float restar(float, float);

/** \brief REALIZA LA MULTIPLICACION DE DOS NUMEROS
 *
 * \param float
 * \param float
 * \return float
 *
 */
float multiplicar(float, float);

/** \brief REALIZA LA DIVISION ENTRE DOS NUMEROS
 *
 * \param float
 * \param float
 * \return float
 *
 */
float dividir(float, float);


/** \brief CALCULA EL FACTORIAL DE UN NUMERO. NO CALCULA EL FACTORIAL DE NUMEROS DECIMALES NI DE NUMEROS MAYORES a 31.
 *
 * \param long long int
 * \return long long int
 *
 */
long long int factorizar(long long int);


/** \brief INDICA SI UN NUMERO POSEE CIFRAS DECIMALES. RETORNA "1" PARA VERDADERO, "0" PARA FALSO.
 *
 * \param float
 * \return int
 *
 */
int esNumeroDecimal(float);
