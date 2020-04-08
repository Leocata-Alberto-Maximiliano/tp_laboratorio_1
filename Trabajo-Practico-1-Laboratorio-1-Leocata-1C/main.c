#include <stdio.h>
#include <stdlib.h>
#include "Funciones-Generales-Validadas.h"
#include "Funciones-Matematicas.h"
#define MIN -1000000
#define MAX 1000000

int main()
{
    float valueA;
    float valueB;

    float resultadoSuma;
    float resultadoResta;
    float resultadoMultiplicacion;
    float resultadoDivision;
    int resultadoFactorialA;
    int resultadoFactorialB;

    int option;

    printf("\n***************\t\tBIENVENIDO A LA CALCULADORA\t\t***************\n\n\n");

    do
    {

        printf("\n1.INGRESAR PRIMER OPERANDO");
        printf("\n2.INGRESAR SEGUNDO OPERANDO");
        printf("\n3.CALCULAR OPERACIONES");
        printf("\n4.INFORMAR RESULTADOS");
        printf("\n5.SALIR");

        option = getInt("\n\n\t\tELIJA LA OPCION A REALIZAR: ", "\n\t\tERROR, ELIJA UNA OPCION VALIDA A REALIZAR: ", 1, 5);

        switch(option)
        {

        case 1:

            valueA = getFloat("\nINGRESE UN NUMERO: ", "\nERROR, INGRESE UN NUMERO VALIDO: \n\n", MIN, MAX);

            break;

        case 2:

            valueB = getFloat("\nINGRESE UN NUMERO: ", "\nERROR, INGRESE UN NUMERO VALIDO: \n\n", MIN, MAX);

            break;

        case 3:

            printf("\n\t\t***CALCULANDO OPERACIONES***\n\n");

            resultadoSuma = sumar(valueA, valueB);
            resultadoResta = restar(valueA, valueB);
            resultadoMultiplicacion = multiplicar(valueA, valueB);
            resultadoDivision = dividir(valueA, valueB);
            resultadoFactorialA = factorizar(valueA);
            resultadoFactorialB = factorizar(valueB);

            break;

        case 4:

            printf("\n\t\t***INFORMANDO RESULTADOS***");

            printf("\n\n\t\t\t\tEL RESULTADO DE LA SUMA ES: %.2f", resultadoSuma);
            printf("\n\n\t\t\t\tEL RESULTADO DE LA RESTA ES: %.2f", resultadoResta);
            printf("\n\n\t\t\t\tEL RESULTADO DE LA MULTIPLICACION ES: %.2f", resultadoMultiplicacion);

            if(valueB == 0)
            {
                printf("\n\n\t\t\t\tEL RESULTADO DE LA DIVISION ES: ERROR, NO ES POSIBLE DIVIDIR POR CERO!!!");
            }

            else
            {
                printf("\n\n\t\t\t\tEL RESULTADO DE LA DIVISION ES: %.2f", resultadoDivision);
            }


            if(valueA < 0 || esNumeroDecimal(valueA) == 1 || valueA > 16)
            {
                printf("\n\n\t\t\t\tEL RESULTADO DEL FACTORIAL DEL PRIMER NUMERO ES: ERROR, NO ES POSIBLE CALCULAR EL FACTORIAL!!!");
            }

            else
            {
                printf("\n\n\t\t\t\tEL RESULTADO DEL FACTORIAL DEL PRIMER NUMERO ES: %d", resultadoFactorialA);

            }

            if(valueB < 0 || esNumeroDecimal(valueB) == 1 || valueA > 16)
            {
                printf("\n\n\t\t\t\tEL RESULTADO DEL FACTORIAL DEL SEGUNDO NUMERO NUMERO ES: ERROR, NO ES POSIBLE CALCULAR EL FACTORIAL!!!\n\n");
            }

            else
            {
                printf("\n\n\t\t\t\tEL RESULTADO DEL FACTORIAL DEL SEGUNDO NUMERO ES: %d\n\n", resultadoFactorialB);

            }
            break;

        case 5:

            printf("\n***************\t\tESTA SALIENDO DE LA CALCULADORA, HASTA PRONTO :)\t\t***************\n\n");

            break;


        }

        system("pause");
        system("cls");


    }while(option != 5);



    return 0;
}

