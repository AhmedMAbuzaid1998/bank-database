#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "def.h"
 client bank_clients[clients_array];
int client_counter=0;
int main()
{
    int stop=1;
    char option;
    while(stop==1)
    {
        printf("please choose one of this operations\n1-creat new client (enter 1)\n2-edit client details(enter 2)\n3-print client details(enter 3)\n4-delete a client from bank (enter 4)\n5-trasfer money from client to another client(enter 5)\n6-exit(enter 6)");
        scanf(" %c",&option);
        switch(option)
        {
        case '1':
            add_client(&bank_clients[clients_array]);
            break;
        case '2':
            edit_client(&bank_clients[clients_array]);
            break;
        case '3':
            print_client(&bank_clients[clients_array]);
            break;
        case '4':
            delete_client(&bank_clients[clients_array]);
            break;
        case '5':
            trans_money(&bank_clients[clients_array]);
            break;
        case '6':
            stop=0;
            break;
        default:
            printf("\t***wrong operation***\n");
            break;
        }
    }

    return 0;
}
