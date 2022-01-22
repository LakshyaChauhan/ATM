#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include "PIN.h" // ! Add PIN.h file 
 
int pin,bal;
int PIN(); 

int main()
{
    PIN();
    BAL();
    printf("Generating Your PIN-%d\n\n",pin);
    printf("Your created account will have a balance of Rs %d",bal);
    
    printf("\n\nWelcome to our Bank\n\n");
    int pin1;
    printf("Type your secret pin number: ");
    scanf("%d",&pin1);

    char ch;
    if(pin1==pin)
    {
        while(1)
        {
            int choice,deposited,wd;
            printf("\nHello! Welcome to our ATM Service\n");
            printf("1. Balance Checking\n");
            printf("2. Cash Withdrawl\n");
            printf("3. Cash Deposition\n");
            printf("4. Exit\n");
            printf("************************\n\n");

            printf("Please Proceed With Your Choice: ");
            scanf("%d",&choice);
            if(choice>0 && choice<5)
            {
                switch(choice)
                {
                    case 1:
                        printf("The account balance is Rs : %d\n\n",bal);
                        break;
                    case 2:
                        printf("Insert the amount to be withdrawl: ");
                        scanf("%d",&wd);

                        if(wd%100==0)
                        {
                            printf("You can now collect the cash.\n");
                            bal=bal-wd;
                            printf("The current balance is Rs %d\n\n",bal);
                        }
                        else    
                            printf("You are requested to insert the amount in multiples of 100\n\n");
                            break;
                    case 3:
                        printf("Insert the amount to be deposited: ");
                        scanf("%d",&deposited);
                        printf("The balance is: %d\n\n",bal+deposited);
                        break;
                    case 4:
                        printf("We are thankful to you for USING our ATM Services");
                        exit(0);
                    default:
                    printf("Wrong Choice\n\n");
                }
                

                printf("Would you like to have another ATM transaction (y/n):");
                printf("\ny\n\n");
            }
            
            else
                printf("Wrong Choice\n\n");
        }
    }
    
    else
    printf("You entered Wrong PIN");
    
    return 0;
}
