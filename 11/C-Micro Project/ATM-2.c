#include <stdio.h>
#include <string.h>

struct account
{
  char name[47];
  int balance;
  int pin;
  int date;
};

int main()
{
    struct account detail[] = {
        {"Herodotos", 60000, 470, 2026},
        {"Socrates", 30000, 484, 2025},
        {"Plato", 80000, 428, 2029}, 
    };

    int ans, code = 0, draw, add, continueFlag = 1; // continueFlag part copied!!!
    int NUMaccount = sizeof(detail) / sizeof(detail[0]); 

    while (code != 470 && code != 484 && code != 428)
    {
        printf("Please Enter Your Pin:");
        scanf("%d", &code);
        if (code != 470 && code != 484 && code != 428)
        {
            printf("The pin is invalid\n");
        }
    }

    while (continueFlag) 
    {
        printf("\n________________________Bank of Kathmandu______________________\n");
        printf("MAIN MENU\n");
        printf("*******Our Services Extend*******\n");
        printf("1-Account Details\n");
        printf("2-Cash Withdraw\n");
        printf("3-Cash Deposit\n");
        printf("4-Exit\n");
        printf("\nSelect Your Service: ");
        scanf("%d", &ans);

        switch (ans)
        {
        case 1:
            for (int i=0; i < NUMaccount; i++)
            {
                if (code == detail[i].pin)
                {
                    printf("Account Holder: %s\n", detail[i].name);
                    printf("Current Balance: %d\n", detail[i].balance);
                    printf("Valid till: %d\n", detail[i].date);
                }
            }
            break;

        case 2:
            printf("\nWithdraw Amount: ");
            scanf("%d", &draw);
            for (int i=0; i < NUMaccount; ++i)
            {
                if (code == detail[i].pin)
                {
                    if (draw > detail[i].balance)
                    {
                        printf("**Insufficient Balance**\n");
                    }
                    else
                    {
                        detail[i].balance -= draw;
                        printf("\n***Thank You***\n");
                        printf("$%d Deducted\n", draw);
                        printf("New Balance: $%d\n", detail[i].balance);
                    }
                }
            }
            break;

        case 3:
            printf("\nDeposit Amount: ");
            scanf("%d", &add);
            for (int i = 0; i < NUMaccount; i++)
            {
                if (code == detail[i].pin)
                {
                    detail[i].balance += add;
                    printf("\n***Thank You***\n");
                    printf("$%d Deposited\n", add);
                    printf("New Balance: $%d\n", detail[i].balance);
                }
            }
            break;

        case 4:
            continueFlag = 0; 
            printf("Exiting...\n");
            break;

        default:
            printf("Invalid option. Please choose a valid service.\n");
        }
    }

    return 0;
}
