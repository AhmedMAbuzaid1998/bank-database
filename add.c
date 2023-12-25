#include <stdio.h>
#include "def.h"
void add_client(client *ptr)
{
     printf("\t***adding new client***\n");
     client new_client;//creating new object from the structure client to receive new data of new client
     int id,i;
     extern int client_counter;
     if(client_counter<=clients_array-1)//if the number of clients doesnot exceeds the maximum number of bank clients do this block of code
     {
        printf("\tplease enter the name of client [%i]:\n",client_counter+1);
        fflush(stdin);
        gets(new_client.name);
        do//this block to check if the user enter repeated id
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
        new_client.id=id;//if the id doesnot repeated then it will be added
        printf("\tplease enter the type of account(depite or credit) of client [%i]:\n",client_counter+1);
        fflush(stdin);
        gets(new_client.type);
        do//this block to receive non zero or negative number
        {
            printf("\tplease enter the non zero or negative cash of client [%i]:\n",client_counter+1);
            scanf("%lf",&new_client.cash);
        }while (new_client.cash<=0);
        ptr[client_counter]=new_client;
        client_counter++;
    }
    else//if the number of clients  exceeds the maximum number of bank clients do this block of code
    {
        printf("\t***the number of clients exceeds the limit***\n\n");
    }
}

