#include <stdio.h>
#include "def.h"
void edit_client(client *ptr)
{
    printf("\t***editing a client details***\n");
    int id,cash_states,id_check=0;
    double amount;
    printf("\t***please enter client id***\n");
    scanf("%i",&id);
    for(int i=0;i<=clients_array-1;i++)
    {
      if((ptr[i].id)==id)
      {
          printf("\t***please enter the new id***\n");
          scanf("%i",&ptr[i].id);
          printf("\t***please enter the new name***\n");
          fflush(stdin);
          gets(ptr[i].name);
          printf("\t***please enter the new account type***\n");
          fflush(stdin);
          gets(ptr[i].type);
          do
          {
          printf("\t***for withdraw cash enter(1)***\n\t***for deposit enter (2)***\n");
          scanf("\t%i",&cash_states);
          }while((cash_states!=1)&&(cash_states!=2));
          do
          {
                printf("\t***please enter the amount non negative or zero***\n");
                scanf("%lf",&amount);
          }while(amount<=0);

          if(cash_states==1)
          {
              ptr[i].cash-=amount;
          }
          else if(cash_states==2)
          {
              ptr[i].cash+=amount;
          }
          id_check++;
        }
    }
     if(id_check==0)
      {
          printf("\t***wrong id***\n");
      }
}


