#include <stdio.h>
#include "def.h"
void edit_client(client *ptr)
{
    printf("\t***editing a client details***\n");
    int id,cash_status,id_check=0;/*id this to receive the id when the empolyee wants to edit details of a client */
                                  /*cash_status is a variable that check if the empolyee will withdraw or deposit (1 for withdraw and 2 for deposit )and if there is another number entered it will ask the empolyee to renter valid number*/
    double amount;                /*id_check contain number 0 to check if the id is founded or not*/
    printf("\t***please enter client id***\n");
    scanf("%i",&id);
    for(int i=0;i<=clients_array-1;i++)
    {
      if((ptr[i].id)==id)//if we found the id so do this code
      {
          printf("\t***please enter the new id***\n");//ask for new id
          scanf("%i",&ptr[i].id);
          printf("\t***please enter the new name***\n");//ask for new name
          fflush(stdin);
          gets(ptr[i].name);
          printf("\t***please enter the new account type***\n");//ask for new type for the accounts
          fflush(stdin);
          gets(ptr[i].type);
          do//ask for operation (1 for withdraw and 2 for deposit) if there is another number it will ask to renter the number 1 or 2
          {
          printf("\t***for withdraw cash enter(1)***\n\t***for deposit enter (2)***\n");
          scanf("\t%i",&cash_status);
          }while((cash_status!=1)&&(cash_status!=2));
          do//this block to receive non zero or negative number
          {
                printf("\t***please enter the amount non negative or zero***\n");
                scanf("%lf",&amount);
          }while(amount<=0);

          if(cash_status==1)//if cash_status 1 this means withdraw from account
          {
              ptr[i].cash-=amount;
          }
          else if(cash_status==2)//if cash_status 2 this means deposit to this account
          {
              ptr[i].cash+=amount;
          }
          id_check++;
        }
    }
     if(id_check==0)//if id_check still zero this means that is no identical id in bank database
      {
          printf("\t***wrong id***\n");
      }
}


