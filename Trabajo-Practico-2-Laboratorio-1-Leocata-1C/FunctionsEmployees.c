#include "FunctionsEmployees.h"
#include "UTN.h"
#define FALSE 0
#define TRUE 1

int hardCodeEmployees(Employee lista[], int len)
{
// TERMINAR
}

//****************************************************************************************************************

int findEmptyPlaceEmployees(Employee lista[], int len, int value)
{
    int i;
    int index = -1;

    for(i=0; i < len; i++)
    {

        if(lista[i].isEmpty == value)
        {
            index = i;
        }
    }

    return index;

}

//***************************************************************************************************************

int sortEmployeesUp(Employee lista[], int len)
{
    int succesfully = -1;
    Employee employeeAux;
    int i;
    int j;

    for(i=0; i < len -1; i++)
    {

        if(lista[i].isEmpty == FALSE)
        {

            continue;
        }

        for(j=i+1; j < len; j++)
        {

            if(lista[j].isEmpty == FALSE)
            {

                continue;
            }

            if(strcmp(lista[j].id, lista[i].id) > 0)
            {


                employeeAux = lista[j];
                lista[j] = lista[i];                  //bubbleSort
                lista[i] = employeeAux;

                succesfully = 0;
            }

        }

    }

    return succesfully;
}

//***************************************************************************************************************

int sortEmployeesDown(Employee lista[], int len)
{

    int succesfully = -1;
    Employee employeeAux;
    int i;
    int j;

    for(i=0; i < len -1; i++)
    {

        if(lista[i].isEmpty == FALSE)
        {

            continue;
        }

        for(j=i+1; j < len; j++)
        {

            if(lista[j].isEmpty == FALSE)
            {

                continue;
            }

            if(strcmp(lista[j].id, lista[i].id) > 0)
            {


                employeeAux = lista[i];
                lista[i] = lista[j];                  //bubbleSort
                lista[j] = employeeAux;

                succesfully = 0;
            }

        }

    }

    return succesfully;
}


/// FUNCIONES DE MENU

void menu_Orden(void)
{
    printf("\n********** MENU DE ORDENES **********\n");
    printf("\n\t\t0.SALIR");
    printf("\n\t\t1.ORDEN ASCENDENTE");
    printf("\n\t\t2.ORDEN DESCENDENTE");
}

void menu_opciones_Orden(void)
{
    int opcion;

    do
    {
        menu_Orden();
        opcion = getInt("\n\nELIJA UNA OPCION: ", "\nERROR, REINGRESE UNA OPCION: ", 0, 2);

        switch(opcion)
        {

        case 1:
            /// ORDEN ASCENDENTE
            break;
        case 2:
            /// ORDEN DESCENDENTE
            break;
        }

    }
    while(opcion != 0);
}

void menu_Informes(void)
{
    printf("\n********** MENU DE INFORMES **********\n");
    printf("\n\t0.SALIR");
    printf("\n\t1.LISTAR EMPLEADOS ORDENADOS");
    printf("\n\t2.TOTAL DE SALARIOS");
    printf("\n\t3.PROMEDIO DE SALARIOS");
    printf("\n\t4.EMPLEADOS CON SALARIO PROMEDIO O MAYOR");
}

void menu_opciones_Informes(void)
{
    int opcion;

    do
    {
        menu_Informes();
        opcion = getInt("\n\nELIJA UNA OPCION: ", "\nERROR, REINGRESE UNA OPCION: ", 0, 4);

        switch(opcion)
        {

        case 1:
            menu_opciones_Orden();
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;

        }

    }
    while(opcion != 0);
}

void menu_Employee(void)
{
    printf("\n********** MENU DE EMPLEADOS **********\n");
    printf("\n0.SALIR");
    printf("\n1.ALTAS");
    printf("\n2.MODIFICAR");
    printf("\n3.BAJAS");
    printf("\n4.INFORMES");
}

void menu_opciones_Employee(void)
{

    /// s_Estructura listaaEstructura[TAM_ESTRUCTURA];
    ///  hardCodear_Listado_Estructura(listaEstructura, TAM_ESTRUCTURA);

    int opcion;

    do
    {
        menu_Employee();
        opcion = getInt("\n\nELIJA UNA OPCION: ", "\nERROR, REINGRESE UNA OPCION: ", 0, 4);

        switch(opcion)
        {

        case 1:
        case 2:
        case 3:
        case 4:
            menu_opciones_Informes();
            break;

        }

    }
    while(opcion != 0);
}
