#include "ArrayEmployees.h"
#define TRUE 1
#define FALSE 0
#define UP 1
#define DOWN 0

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

    int succesfully = -1;
    int index;

    if(lista != NULL && len > 0)
    {

        for(index = 0; index < len; index++)
        {

            lista[index].isEmpty = TRUE;

            succesfully = 0;

        }

    }

    return succesfully;

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
int addEmployee(Employee lista[], int len, int id, char name[],char lastName[],float salary,int sector)
{
    int succesfully = -1;

    int indexEmptyPlace = findEmptyPlaceEmployees(lista, len, FALSE);

    if(lista != NULL && len > 0 && indexEmptyPlace != -1)
    {

        lista[indexEmptyPlace].id = id;
        strcpy(lista[indexEmptyPlace].name, name);
        strcpy(lista[indexEmptyPlace].lastName, lastName);
        lista[indexEmptyPlace].salary = salary;
        lista[indexEmptyPlace].sector = sector;

        succesfully = 0;
    }

    return succesfully;
}

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
int findEmployeeById(Employee lista[], int len,int id)
{
    int index;
    int foundIndex = -1;

    if(lista != NULL && len > 0)
    {

        for(index=0; index < len; index++)
        {

            if(lista[index].id == id && lista[index].isEmpty == FALSE)
            {

                foundIndex = index;
                break;
            }
        }
    }

    return index;

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
int removeEmployee(Employee lista[], int len, int id)
{
    int succesfully;
    int foundIndex;
    succesfully = -1;
    foundIndex = findEmployeeById(lista, len, id);

    if(lista != NULL && len > 0 && foundIndex != -1)
    {

        lista[foundIndex].isEmpty = TRUE;
        succesfully = 0;
    }


return succesfully;
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
int sortEmployees(Employee lista[], int len, int order)
{
    int succesfully;

    if(lista != NULL && len > 0 && order == UP)
    {

        succesfully = sortEmployeesUp(lista, len);

    }

    if(lista != NULL && len > 0 && order == DOWN)
    {

        succesfully = sortEmployeesDown(lista, len);

    }

    return succesfully;
}

//****************************************************************************************************************

/** \brief print the content of employees array
 *
 * \param lista Employee*
 * \param length int
 * \return int
 *
 */
int printEmployees(Employee lista[], int len)
{
    int succesfully = -1;

    if(lista != NULL && len > 0)
    {

        // ACA EL CODIGO

        succesfully = 0;
    }


    return succesfully;
}




