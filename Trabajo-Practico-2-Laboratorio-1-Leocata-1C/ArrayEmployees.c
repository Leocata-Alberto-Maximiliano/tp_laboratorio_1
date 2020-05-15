#include "ArrayEmployees.h"
#include "UTN.h"
#define TRUE 1
#define FALSE 0
#define UP 1
#define DOWN 0

int printEmployee(Employee  employee)
{
    int r = -1;
    /// ID NAME LASTNAME SALARY SECTOR
    if(employee.isEmpty == FALSE)
    {
        printf("\n%d\t\t%s\t\t%s\t\t%.2f\t\t%d");
        r = 0;
    }

return r;
}

/** \brief print the content of employees array
 *
 * \param lista Employee*
 * \param length int
 * \return int
 *
 */
int printEmployees(Employee lista[], int len)
{
    int r = -1;
    int i;

    printf("\nID\t\tNAME\t\tLASTNAME\t\tSALARY\t\tSECTOR\n");
    for(i = 0; i < len; i++)
    {
        printEmployee(lista[i]);
        r = 0;
    }

    return r;
}

//****************************************************************************************************************

/** \brief To indicate that all position in the array are empty,
 * this function put the flag (isEmpty) in TRUE in all
 * position of the array
 * \param lista Employee* Pointer to array of employees
 * \param len int Array length
 * \return int Return (-1) if Error [Invalid length or NULL pointer] - (0) if Ok
 *
 */
int initEmployees(Employee lista[], int len)
{

    int r = -1;
    int i;

    for(i = 0; i < len; i++)
    {

        lista[i].isEmpty = TRUE;

        r = 0;
    }


    return r;

}

//****************************************************************************************************************

/** \brief add in a existing lista of employees the values received as parameters
 * in the first empty position
 * \param lista employee*
 * \param len int
 * \param id int
 * \param name[] char
 * \param lastName[] char
 * \param salary float
 * \param sector int
 * \return int Return (-1) if Error [Invalid length or NULL pointer or without
free space] - (0) if Ok
**/
/*int addEmployee(Employee lista[], int len, int id, char name[],char lastName[],float salary,int sector)
{
    int r = -1;

    int indexEmptyPlace = findEmptyPlaceEmployees(lista, len, FALSE);

    if(lista != NULL && len > 0 && indexEmptyPlace != -1)
    {

        lista[indexEmptyPlace].id = id;
        strcpy(lista[indexEmptyPlace].name, name);
        strcpy(lista[indexEmptyPlace].lastName, lastName);
        lista[indexEmptyPlace].salary = salary;
        lista[indexEmptyPlace].sector = sector;

        r = 0;
    }

    return r;
}*/

//*****************************************************************************************************************

/** \brief find an Employee by Id en returns the index position in array.
 *
 * \param lista Employee*
 * \param len int
 * \param id int
 * \return Return employee index position or (-1) if [Invalid length or NULL
pointer received or employee not found]
 *
 */
int findEmployeeById(Employee lista[], int len /*,int id*/)
{
    int indexResult = -1;
    int id;
    int i;

    printEmployees(lista, len);

    id = getInt("\n\nINGRESE UN EMPLEADO POR SU ID: ", "\nERROR, REINGRESE UN EMPLEADO: ", 1, 1000);

    for(i=0; i < len; i++)
    {

        if(lista[i].id == id)
        {

            indexResult = i;
            break;
        }
    }

    return i;

}

//****************************************************************************************************************

/** \brief Remove a Employee by Id (put isEmpty Flag in 1)
 *
 * \param lista Employee*
 * \param len int
 * \param id int
 * \return int Return (-1) if Error [Invalid length or NULL pointer or if can't
find a employee] - (0) if Ok
 *
 */
int removeEmployee(Employee lista[], int len/*, int id*/)
{
    int r = -1;
    int indexResult;

    indexResult = findEmployeeById(lista, len);

    if(indexResult != -1)
    {
        lista[indexResult].isEmpty = TRUE;
        r = 0;
    }

    return r;
}

//****************************************************************************************************************

/** \brief Sort the elements in the array of employees, the argument order
indicate UP or DOWN order
 *
 * \param lista Employee*
 * \param len int
 * \param order int [1] indicate UP - [0] indicate DOWN
 * \return int Return (-1) if Error [Invalid length or NULL pointer] - (0) if Ok
 *
 */
int sortEmployees(Employee lista[], int len/*, int order*/)
{
    int r;
    int orden;
    orden = getInt("\n\nELIJA EL CRITERIO DE ORDENAMIENTO ", "ERROR, REILIJA EL CRITERIO DE ORDENAMIENTO ", 1, 2);

    switch(orden)
    {
    case 1:
        r = sortEmployeesUp(lista, len);
        break;

    case 2:
        r = sortEmployeesDown(lista, len);
        break;

    }

    return r;
}

//****************************************************************************************************************


