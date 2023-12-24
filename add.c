#include <stdio.h>
#include "def.h"
void add_client(client *ptr)
{
     printf("\t***adding new client***\n");
     client new_client;
     int id,i;
     extern int client_counter;
     if(client_counter<=1)
     {
        printf("\tplease enter the name of client [%i]:\n",client_counter+1);
        fflush(stdin);
        gets(new_client.name);
        do
        {
            printf("\tplease enter non repeated id of client [%i]:\n",client_counter+1);
            scanf("%i",&id);
            for(i=0;i<=clients_array-1;i++)
            {
                if(ptr[i].id==id)
                {
                    printf("\t***an existing id please try another id***\n");
                    break;
                }
            }
        }while(i!=clients_array);
        new_client.id=id;
        printf("\tplease enter the type of account(depite or credit) of client [%i]:\n",client_counter+1);
        fflush(stdin);
        gets(new_client.type);
        do
        {
        printf("\tplease enter the non zero or negative cash of client [%i]:\n",client_counter+1);
        scanf("%lf",&new_client.cash);
        }while (new_client.cash<=0);
        ptr[client_counter]=new_client;
        client_counter++;

    }
    else
    {
        printf("\t***the number of clients exceeds the limit***\n\n");
    }
}

