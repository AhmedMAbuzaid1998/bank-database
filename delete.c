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
        if((ptr[i].id)==id)//if we found the id
        {
            client_counter--;//reduce number of clients by 1
            break;//this to get out from the loop this means that the counter willnot reach the end
        }
    }
        if(i==clients_array)//if the counter reach the end this means that is non founded id
        {
            printf("\t***wrong id please try again***\n");
        }
        for(j=i;j<=clients_array-1;j++)//we will iterate from the index we found the id to the end of array
        {
            if(j==clients_array-1)//this to make the last place in the array of clients free
            {
                ptr[j].id=0;
                ptr[j].cash=0;
                strcpy(ptr[j].name,"");
                strcpy(ptr[j].type,"");
            }
            else//this to shift all the client under the deleted client
            {
                ptr[j].id=ptr[j+1].id;
                ptr[j].cash=ptr[j+1].cash;
                strcpy(ptr[j].name,ptr[j+1].name);
                strcpy(ptr[j].type,ptr[j+1].type);

            }
      }
}

