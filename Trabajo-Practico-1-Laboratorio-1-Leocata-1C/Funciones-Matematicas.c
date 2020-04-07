#include <stdio.h>
#include <stdlib.h>
#include "Funciones-Matematicas.h"


float sumar(float x, float y)
{
    float suma = x+y;

    return suma;
}

float restar(float x, float y)
{
    float resta = x-y;

    return resta;
}

float multiplicar(float x, float y)
{
    float multp = x*y;

    return multp;
}

float dividir(float x, float y)
{
    float div = x/y;

    return div;
}

int factorizar(int x)
{
    int i;
    int resultado;

    if(x == 0)
    {
        resultado = 1;
    }

    else
    {
        resultado = 1;

        for(i = x; i >= 1; i--)
        {

            resultado = resultado * i;
        }
    }


    return resultado;
}


int esNumeroDecimal(float x)
{
    int tieneDecimales = 0; /// POR DEFECTO ASUMO QUE NO TIENE DECIMALES

    if()
    {
        /// CODIGO
    }

    return tieneDecimales;

}

