#include <stdio.h>
#include <stdlib.h>
#include "Funciones-Generales-Validadas.h"
#include "Funciones-Matematicas.h"

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

    printf("\n**************\t\tBIENVENIDO A LA CALCULADORA\t\t***************\n\n\n");



    /// valueA = getInt("\nIngrese un numero: ", "\nError, reingrese un numero valido: ", 1, 1000000);
    /// valueB = getInt("\nIngrese un numero: ", "\nError, reingrese un numero valido: ", 1, 1000000);

    do
    {
        /// 1.INGRESAR PRIMER OPERANDO
        /// 2.INGRESAR SEGUNDO OPERANDO
        /// 3.CALCULAR TODAS LAS OPERACIONES
        /// 4.INFORMAR RESULTADOS
        /// 5.SALIR


        printf("\n1.INGRESAR PRIMER OPERANDO");
        printf("\n2.INGRESAR SEGUNDO OPERANDO");
        printf("\n3.CALCULAR TODAS LAS OPERACIONES");
        printf("\n4.INFORMAR RESULTADOS");
        printf("\n5.SALIR");
        printf("\n\nELIJA LA OPERACION A REALIZAR: ");

        scanf("%d", &option);

        switch(option)
        {


        case 1:

            valueA = getInt("\nIngrese un numero: ", "\nError, reingrese un numero valido: ", 1, 1000000);
            break;

        case 2:

            valueB = getInt("\nIngrese un numero: ", "\nError, reingrese un numero valido: ", 1, 1000000)
                     break;

        case 3:

            printf("\n\t\t1.CALCULAR SUMA");
            printf("\n\t\t2.CALCULAR RESTA");
            printf("\n\t\t3.CALCULAR MULTIPLICACION");
            printf("\n\t\t4.CALCULAR DIVISION");
            printf("\n\t\t5.CALCULAR FACTORIAL");
            printf("\n\t\t6.CALCULAR TODAS LAS OPERACIONES A LA VEZ");
            printf("\n\n\t\tELIJA LA OPERACION A REALIZAR: ");

            scanf("%d", &operation);


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

                resultadoFactorialA = factorizar(ValueA);
                resultadoFactorialB = factorizar(valueB);
                break;

            case 6: /// CALCULAR TODAS LAS OPERACIONES A LA VEZ

                resultadoSuma = sumar(valueA, valueB);
                resultadoResta = restar(valueA, valueB);
                resultadoMultiplicacion = multiplicar(valueA, valueB);
                resultadoDivision = dividir(valueA, valueB);
                resultadoFactorialA = factorizar(ValueA);
                resultadoFactorialB = factorizar(valueB);
                break;

            default :

                printf("\nNO INGRESO UNA OPCION VALIDA");
                break;

            }

            break;



        case 4:

            printf("\n\t\t1.MOSTRAR SUMA");
            printf("\n\t\t2.MOSTRAR RESTA");
            printf("\n\t\t3.MOSTRAR MULTIPLICACION");
            printf("\n\t\t4.MOSTRAR DIVISION");
            printf("\n\t\t5.MOSTRAR FACTORIAL");
            printf("\n\t\t6.MOSTRAR TODAS LAS OPERACIONES A LA VEZ");
            printf("\n\n\t\tELIJA LA OPERACION A REALIZAR: ");

            scanf("%d", &result);

            switch(result)
            {
            case 1: /// MOSTRAR SUMA

                printf("\n\n\t\t\t\tEL RESULTADO DE LA SUMA ES: %d", sumar(valueA, valueB));
                break;

            case 2: /// MOSTRAR RESTA

                printf("\n\t\t\t\tEL RESULTADO DE LA RESTA ES: %d", restar(valueA, valueB));
                break;

            case 3: /// MOSTRAR MULTIPLICACION

                printf("\n\t\t\t\tEL RESULTADO DE LA MULTIPLICACION ES: %d", multiplicar(valueA, valueB));
                break;

            case 4: /// MOSTRAR DIVISION

                printf("\n\t\t\t\tEL RESULTADO DE LA DIVISION ES: %.2f", dividir(valueA, valueB));
                break;

            case 5: /// MOSTRAR FACTORIAL

                printf("\n\t\t\t\tEL RESULTADO DEL FACTORIAL DEL PRIMER NUMERO ES: %d", factorizar(valueA));
                printf("\n\t\t\t\tEL RESULTADO DEL FACTORIAL DEL SEGUNDO NUMERO ES: %d\n\n", factorizar(valueB));
                break;

            case 6: /// MOSTRAR TODAS LAS OPERACIONES A LA VEZ

                printf("\n\n\t\t\t\tEL RESULTADO DE LA SUMA ES: %d", sumar(valueA, valueB));
                printf("\n\t\t\t\tEL RESULTADO DE LA RESTA ES: %d", restar(valueA, valueB));
                printf("\n\t\t\t\tEL RESULTADO DE LA MULTIPLICACION ES: %d", multiplicar(valueA, valueB));
                printf("\n\t\t\t\tEL RESULTADO DE LA DIVISION ES: %.2f", dividir(valueA, valueB));
                printf("\n\t\t\t\tEL RESULTADO DEL FACTORIAL DEL PRIMER NUMERO ES: %d", factorizar(valueA));
                printf("\n\t\t\t\tEL RESULTADO DEL FACTORIAL DEL SEGUNDO NUMERO ES: %d\n\n", factorizar(valueB));
                break;

            default :

                printf("\n\t\t\t\tNO INGRESO UNA OPCION VALIDA");
                break;

            }
            break;

        case 5:

            printf("\n\nESTA SALIENDO DE LA CALCULADORA\n\n");
            break;


        default :

            printf("\nNO INGRESO UNA OPCION VALIDA");
            break;

        }

        system("pause");
        system("cls");


    }


    while(option != 5);

    return 0;
}





