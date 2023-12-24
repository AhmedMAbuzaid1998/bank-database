#include <stdio.h>
#include "def.h"
void trans_money(client *ptr)
{
    printf("\t***tranfer money operation***\n");
    int depositer_id,recipient_id,depositerid_check=0,recipientid_check=0;
    double amount;
    printf("\t***please enter depositor id***\n");
    scanf("%i",&depositer_id);
    for(int i=0;i<=clients_array-1;i++)
    {
      if((ptr[i].id)==depositer_id)
      {
            do
            {
                printf("\t***please enter the cash amount greater than zero***\n");
                scanf("%lf",&amount);
            }while (amount<=0);
            if(amount>ptr[i].cash)
            {
                printf("\t***larger amount than your cash please try another number***\n");
            }
            else
            {
                printf("\t***please enter recipient id***\n");
                scanf("%i",&recipient_id);
                if(recipient_id==depositer_id)
                {
                    printf("\t***you enter the same id please try again***\n");
                }
                else
                {
                     for(int j=0;j<=clients_array-1;j++)
                     {
                        if((ptr[j].id)==recipient_id)
                        {
                            ptr[j].cash+=amount;
                            ptr[i].cash-=amount;
                            recipientid_check++;
                        }
                    }

                }

                if(recipientid_check==0)
                {
                    printf("\t***wrong recipient id please try again***\n");
                }

            }
            depositerid_check++;
     }
    }
    if(depositerid_check==0)
    {
        printf("\t***wrong depositer id please try again***\n");
    }

}

