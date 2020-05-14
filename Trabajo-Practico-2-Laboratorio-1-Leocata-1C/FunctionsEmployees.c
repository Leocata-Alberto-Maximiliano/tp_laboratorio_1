
int hardCodeEmployees(Employee* list, int len)
{
 // TERMINAR
}

//****************************************************************************************************************

int findEmptyPlaceEmployees(Employee* list, int len, int value)
{
    int i;
    int index = -1;

    for(i=0; i < len; i++)
    {

        if(list[i].isEmpty == value)
        {
            index = i;
        }
    }

    return index;

}

//***************************************************************************************************************

int sortEmployeesUp(Employee* list, int len)
{
    int succesfully = -1;
    Employee employeeAux;
    int i;
    int j;

    for(i=0; i < len -1; i++)
    {

        if(list[i].isEmpty == FALSE)
        {

            continue;
        }

        for(j=i+1; j < len; j++)
        {

            if(list[j].isEmpty == FALSE)
            {

                continue;
            }

            if(strcmp(list[j].id, list[i].id) > 0)
            {


                employeeAux = list[j];
                list[j] = list[i];                  //bubbleSort
                list[i] = employeeAux;

                succesfully = 0;
            }

        }

    }

    return succesfully;
}

//***************************************************************************************************************

int sortEmployeesDown(Employee* list, int len)
{

    int succesfully = -1;
    Employee employeeAux;
    int i;
    int j;

    for(i=0; i < len -1; i++)
    {

        if(list[i].isEmpty == FALSE)
        {

            continue;
        }

        for(j=i+1; j < len; j++)
        {

            if(list[j].isEmpty == FALSE)
            {

                continue;
            }

            if(strcmp(list[j].id, list[i].id) > 0)
            {


                employeeAux = list[i];
                list[i] = list[j];                  //bubbleSort
                list[j] = employeeAux;

                succesfully = 0;
            }

        }

    }

    return succesfully;
}
