#include <stdio.h>
#include "def.h"
void print_client(client *ptr)
{
    printf("\t***printing a client details***\n");
    int id,id_check=0;/*id this to receive the id when the empolyee wants to edit details of a client */
                      /*id_check contain number 0 to check if the id is founded or not*/
    printf("\t***please enter client id***\n");
    scanf("%i",&id);
    for(int i=0;i<=clients_array-1;i++)
    {
        if((ptr[i].id)==id)//if we found the id so do this code
        {
            printf("\tclient id: %i\n",ptr[i].id);
            printf("\tclient cash: %.3f\n",ptr[i].cash);
            printf("\tclient name: ");
            puts(ptr[i].name);
            printf("\tclient account type: ");
            puts(ptr[i].type);
            id_check++;
            break;
        }

    }
    if(id_check==0)//if id_check still zero this means that is no identical id in bank database
    {
        printf("\t***wrong id***\n");
    }

}



