#include <stdio.h>
#include <stdlib.h>
#include "Funciones-Generales-Validadas.h"
#include "Funciones-Matematicas.h"
#define MIN -1000000
#define MAX 1000000

int main()
{
    int valueA;
    int valueB;

    int resultadoSuma;
    int resultadoResta;
    int resultadoMultiplicacion;
    int resultadoDivision;
    int resultadoFactorialA;
    int resultadoFactorialB;

    int option;
    int operation;
    int result;

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

            valueA = getInt("\nINGRESE UN NUMERO: ", "\nERROR, INGRESE UN NUMERO VALIDO: ", MIN, MAX);
            break;

        case 2:

            valueB = getInt("\nINGRESE UN NUMERO: ", "\nERROR, INGRESE UN NUMERO VALIDO: ", MIN, MAX);
            break;

        case 3:

            printf("\n\t\t1.CALCULAR SUMA");
            printf("\n\t\t2.CALCULAR RESTA");
            printf("\n\t\t3.CALCULAR MULTIPLICACION");
            printf("\n\t\t4.CALCULAR DIVISION");
            printf("\n\t\t5.CALCULAR FACTORIAL");
            printf("\n\t\t6.CALCULAR TODAS LAS OPERACIONES");

            operation = getInt("\n\n\t\tELIJA LA OPERACION A REALIZAR: ", "\n\t\tERROR, ELIJA UNA OPERACION VALIDA A REALIZAR: ", 1, 6);

            switch(operation)
            {

            case 1: /// CALCULAR SUMA

                resultadoSuma = sumar(valueA, valueB);
                break;

            case 2: /// CALCULAR RESTA

                resultadoResta = restar(valueA, valueB);
                break;

            case 3: /// CALCULAR MULTIPLICACION

                resultadoMultiplicacion = multiplicar(valueA, valueB);
                break;

            case 4: /// CALCULAR DIVISION

                resultadoDivision = dividir(valueA, valueB);
                break;

            case 5: /// CALCULAR FACTORIAL

                resultadoFactorialA = factorizar(valueA);
                resultadoFactorialB = factorizar(valueB);
                break;

            case 6: /// CALCULAR TODAS LAS OPERACIONES A LA VEZ

                resultadoSuma = sumar(valueA, valueB);
                resultadoResta = restar(valueA, valueB);
                resultadoMultiplicacion = multiplicar(valueA, valueB);
                resultadoDivision = dividir(valueA, valueB);
                resultadoFactorialA = factorizar(valueA);
                resultadoFactorialB = factorizar(valueB);
                break;

            }

            break;


        case 4:

            printf("\n\t\t1.MOSTRAR SUMA");
            printf("\n\t\t2.MOSTRAR RESTA");
            printf("\n\t\t3.MOSTRAR MULTIPLICACION");
            printf("\n\t\t4.MOSTRAR DIVISION");
            printf("\n\t\t5.MOSTRAR FACTORIAL");
            printf("\n\t\t6.MOSTRAR TODOS LOS RESULTADOS");

            result = getInt("\n\n\t\tELIJA LA OPERACION A MOSTRAR: ", "\n\t\tERROR, ELIJA UNA OPERACION VALIDA PARA MOSTRAR: ", 1, 6);

            switch(result)
            {
            case 1: /// MOSTRAR SUMA

                printf("\n\n\t\t\t\tEL RESULTADO DE LA SUMA ES: %d\n\n", sumar(valueA, valueB));
                break;

            case 2: /// MOSTRAR RESTA

                printf("\n\t\t\t\tEL RESULTADO DE LA RESTA ES: %d\n\n", restar(valueA, valueB));
                break;

            case 3: /// MOSTRAR MULTIPLICACION

                printf("\n\t\t\t\tEL RESULTADO DE LA MULTIPLICACION ES: %d\n\n", multiplicar(valueA, valueB));
                break;

            case 4: /// MOSTRAR DIVISION

                printf("\n\t\t\t\tEL RESULTADO DE LA DIVISION ES: %.2f\n\n", dividir(valueA, valueB));
                break;

            case 5: /// MOSTRAR FACTORIALES

                printf("\n\t\t\t\tEL RESULTADO DEL FACTORIAL DEL PRIMER NUMERO ES: %d", factorizar(valueA));
                printf("\n\t\t\t\tEL RESULTADO DEL FACTORIAL DEL SEGUNDO NUMERO ES: %d\n\n", factorizar(valueB));
                break;

            case 6: /// MOSTRAR TODAS LAS OPERACIONES A LA VEZ

                printf("\n\n\t\t\t\tEL RESULTADO DE LA SUMA ES: %d", sumar(valueA, valueB));
                printf("\n\n\t\t\t\tEL RESULTADO DE LA RESTA ES: %d", restar(valueA, valueB));
                printf("\n\n\t\t\t\tEL RESULTADO DE LA MULTIPLICACION ES: %d", multiplicar(valueA, valueB));
                printf("\n\n\t\t\t\tEL RESULTADO DE LA DIVISION ES: %.2f", dividir(valueA, valueB));
                printf("\n\n\t\t\t\tEL RESULTADO DEL FACTORIAL DEL PRIMER NUMERO ES: %d", factorizar(valueA));
                printf("\n\n\t\t\t\tEL RESULTADO DEL FACTORIAL DEL SEGUNDO NUMERO ES: %d\n\n", factorizar(valueB));
                break;

            }

            break;

        case 5:

            printf("\n***************\t\tESTA SALIENDO DE LA CALCULADORA, HASTA PRONTO :)\t\t***************\n\n");
            break;


        }

        system("pause");
        system("cls");

    }


    while(option != 5);

    return 0;
}
