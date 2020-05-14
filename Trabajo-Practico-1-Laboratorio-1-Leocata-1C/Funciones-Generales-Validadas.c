#include <stdio.h>
#include <stdlib.h>
#include "Funciones-Generales-Validadas.h"

void menu()
{
    printf("\n1.INGRESAR PRIMER OPERANDO");
    printf("\n2.INGRESAR SEGUNDO OPERANDO");
    printf("\n3.CALCULAR OPERACIONES");
    printf("\n4.INFORMAR RESULTADOS");
    printf("\n5.SALIR");
    printf("\n76.SHEVCHENKO");
}

int getInt(char message[],char errorMessage[], int min, int max)
{
    int value;

    printf("%s", message);
    scanf("%d", &value);

    while(value <  min || value > max)
    {
        printf("%s", errorMessage);
        scanf("%d", &value);


    }



    return value;
}


float getFloat(char message[],char errorMessage[], float min, float max)
{
    float value;

    printf("%s", message);
    scanf("%f", &value);

    while(value <  min || value > max )
    {
        printf("%s", errorMessage);
        scanf("%f", &value);
    }

    return value;
}

char getChar(char message[],char errorMessage[], char min, char max)
{
    char value;

    printf("%s", message);
    fflush(stdin);
    scanf("%c", &value);

    while(value < min || value > max )
    {
        printf("%s", errorMessage);
        fflush(stdin);
        scanf("%c", &value);
    }

    return value;
}
