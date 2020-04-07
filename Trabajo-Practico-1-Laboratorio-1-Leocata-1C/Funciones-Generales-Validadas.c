#include <stdio.h>
#include <stdlib.h>
#include "Funciones-Generales-Validadas.h"



int getInt(char message[],char errorMessage[], int min, int max)
{
    int value;

    printf("%s", message);
    scanf("%d", &value);

     while(value <  min || value > max )
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
        printf("%s", errorMessage);            /// REVISAR
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

     while(value !=  min && value != max )
    {
        printf("%s", errorMessage);
        fflush(stdin);
        scanf("%c", &value);
    }

    return value;
}
