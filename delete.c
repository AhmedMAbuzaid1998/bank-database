#include <stdio.h>
#include "def.h"
#include <string.h>
void delete_client(client *ptr)
{
    printf("\t***delete a client informations***\n");
    int id,i,j;
    extern int client_counter;
    printf("\t***please enter client id***\n");
    scanf("%i",&id);
    for(i=0;i<=clients_array-1;i++)
    {
        if((ptr[i].id)==id)
        {
            client_counter--;
            break;
        }
    }
        if(i==clients_array)
        {
            printf("\t***wrong id please try again***\n");
        }
        for(j=i;j<=clients_array-1;j++)
        {
            if(j==clients_array-1)
            {
                ptr[j].id=0;
                ptr[j].cash=0;
                strcpy(ptr[j].name,"");
                strcpy(ptr[j].type,"");
            }
            else
            {
                ptr[j].id=ptr[j+1].id;
                ptr[j].cash=ptr[j+1].cash;
                strcpy(ptr[j].name,ptr[j+1].name);
                strcpy(ptr[j].type,ptr[j+1].type);

            }
      }
}

