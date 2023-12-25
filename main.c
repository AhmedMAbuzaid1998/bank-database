#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "def.h"
client bank_clients[clients_array];
int client_counter=0;
int main()
{
    int stop=1;//to make the program in infinite loop until you want to exit
    char option;
    while(stop==1)
    {
        printf("please choose one of this operations\n\
1-creat new client (enter 1)\n\
2-edit client details(enter 2)\n\
3-print client details(enter 3)\n\
4-delete a client from bank (enter 4)\n\
5-trasfer money from client to another client(enter 5)\n\
6-exit(enter 6)");
        scanf(" %c",&option);//scanning the operation from the user
        switch(option)
        {
        case '1'://adding new client
            add_client(&bank_clients[clients_array]);
            break;
        case '2'://editing clients details
            edit_client(&bank_clients[clients_array]);
            break;
        case '3'://printing clients details
            print_client(&bank_clients[clients_array]);
            break;
        case '4'://deleting client details
            delete_client(&bank_clients[clients_array]);
            break;
        case '5'://transfer money from client to another client
            trans_money(&bank_clients[clients_array]);
            break;
        case '6'://exit the program
            stop=0;
            break;
        default:
            printf("\t***wrong operation***\n");
            break;
        }
    }

    return 0;
}
