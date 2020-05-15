#include "FunctionsEmployees.h"
#include "ArrayEmployees.h"
#include "UTN.h"
#define FALSE 0
#define TRUE 1

int hardCodeEmployees(Employee lista[], int len)
{
    int r = 0;

    int ids[5] = {1,2,3,4,5};
    char names[5][50] = {"ALBERTO","JAVIER","VIVIANA","LIHUE","PATRICIO"};
    char lastNames[5][50] = {"LEOCATA","SANCHEZ","BARRIO","LOPEZ","OTEL"};
    float salarys[5] = {24000.00,130000.00,50000.00,25000.00,60000.00};
    int sectors[5] = {1,2,3,1,2};

    int i;

    for(i=0; i < len; i++)
    {
        lista[i].id = ids[i];
        strcpy(lista[i].name, names[i]);
        strcpy(lista[i].lastName, lastNames[i]);
        lista[i].salary= salarys[i];
        lista[i].sector = sectors[i];

        r = 1;
    }

    return r;
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
    int r = -1;
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

                r = 0;
            }

        }

    }

    return r;
}

//***************************************************************************************************************

int sortEmployeesDown(Employee lista[], int len)
{

    int r = -1;
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

                r = 0;
            }

        }

    }

    return r;
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
