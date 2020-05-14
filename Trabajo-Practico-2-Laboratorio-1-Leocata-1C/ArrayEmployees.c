#include "ArrayEmployees.h"
#define TRUE 1
#define FALSE 0
#define UP 1
#define DOWN 0

//****************************************************************************************************************

/** \brief To indicate that all position in the array are empty,
 * this function put the flag (isEmpty) in TRUE in all
 * position of the array
 * \param list Employee* Pointer to array of employees
 * \param len int Array length
 * \return int Return (-1) if Error [Invalid length or NULL pointer] - (0) if Ok
 *
 */
int initEmployees(Employee* list, int len)
{

    int succesfully = -1;
    int index;

    if(list != nullptr)
    {

        for(index = 0; index < len; index++)
        {

            list[index].isEmpty = TRUE;

            succesfully = 0;

        }

    }

    return succesfully;

}

//****************************************************************************************************************

/** \brief add in a existing list of employees the values received as parameters
 * in the first empty position
 * \param list employee*
 * \param len int
 * \param id int
 * \param name[] char
 * \param lastName[] char
 * \param salary float
 * \param sector int
 * \return int Return (-1) if Error [Invalid length or NULL pointer or without
free space] - (0) if Ok
**/
int addEmployee(Employee* list, int len, int id, char name[],char lastName[],float salary,int sector)
{
    int succesfully = -1;

    int indexEmptyPlace = findEmptyPlaceEmployees(list, len, FALSE);

    if(list != nullptr && indexEmptyPlace != -1)
    {

        list[indexEmptyPlace].id = id;
        strcpy(list[indexEmptyPlace].name, name);
        strcpy(list[indexEmptyPlace].lastName, lastName);
        list[indexEmptyPlace].salary = salary;
        list[indexEmptyPlace].sector = sector;

        succesfully = 0;
    }

    return succesfully;
}

//*****************************************************************************************************************

/** \brief find an Employee by Id en returns the index position in array.
 *
 * \param list Employee*
 * \param len int
 * \param id int
 * \return Return employee index position or (-1) if [Invalid length or NULL
pointer received or employee not found]
 *
 */
int findEmployeeById(Employee* list, int len,int id)
{
    int foundIndex = -1;

    if(list != nullptr)
    {

        for(index=0; index < len; index++)
        {

            if(list[index].id == id && list[index].isEmpty == FALSE)
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
 * \param list Employee*
 * \param len int
 * \param id int
 * \return int Return (-1) if Error [Invalid length or NULL pointer or if can't
find a employee] - (0) if Ok
 *
 */
int removeEmployee(Employee* list, int len, int id)
{

    int succefully = -1;
    int foundIndex = findEmployeeById(Employee* list, int len,int id);

    if(list != nullptr && foundIndex != -1)
    {

        list[foundIndex].isEmpty = TRUE;
        succefully = 0;
    }
}

return succesfully;
}

//****************************************************************************************************************

/** \brief Sort the elements in the array of employees, the argument order
indicate UP or DOWN order
 *
 * \param list Employee*
 * \param len int
 * \param order int [1] indicate UP - [0] indicate DOWN
 * \return int Return (-1) if Error [Invalid length or NULL pointer] - (0) if Ok
 *
 */
int sortEmployees(Employee* list, int len, int order)
{
    int succesfully;

    if(list != nullptr && order == UP)
    {

        succesfully = sortEmployeesUp(list, len);

    }

    if(list != nullptr && order == DOWN)
    {

        succesfully = sortEmployeesDown(list, len);

    }

    return succesfully;
}

//****************************************************************************************************************

/** \brief print the content of employees array
 *
 * \param list Employee*
 * \param length int
 * \return int
 *
 */
int printEmployees(Employee* list, int length)
{
    int succesfully = -1;

    if(list != nullptr)
    {

        // ACA EL CODIGO

        succesfully = 0;
    }


    return succesfully;
}




