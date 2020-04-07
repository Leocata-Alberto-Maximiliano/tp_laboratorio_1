#include <stdio.h>
#include <stdlib.h>
#include "Funciones-Matematicas.h"


int sumar(int x, int y)
{
    return x+y;
}

int restar(int x, int y)
{
    return x-y;
}

int multiplicar(int x, int y)
{
    return x*y;
}

float dividir(float x, float y)
{
    float resultado;

        /// VALIDAR DIVISION POR CER0

    return resultado;
}

int factorizar(int x)
{
    int i;

    long long int resultado = 1;

    for(i = x; i >= 1; i--)
    {

        resultado = resultado * i;  /// REVISAR
    }

    return resultado;
}
