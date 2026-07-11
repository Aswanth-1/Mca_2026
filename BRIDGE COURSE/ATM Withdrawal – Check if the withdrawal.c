ATM Withdrawal – Check if the withdrawal amount is a multiple of 100, within the account balance, and leaves the minimum required balance.

#include <stdio.h>

int main()
{
    int balance, withdraw;
    int minBalance = 500;

    printf("Enter account balance: ");
    scanf("%d", &balance);

    printf("Enter withdrawal amount: ");
    scanf("%d", &withdraw);

    if (withdraw % 100 == 0)
    {
        if (withdraw <= balance)
        {
            if ((balance - withdraw) >= minBalance)
            {
                printf("Transaction Successful. Please collect your cash.");
            }
            else
            {
                printf("Transaction Failed - Minimum balance must be maintained.");
            }
        }
        else
        {
            printf("Transaction Failed - Insufficient balance.");
        }
    }
    else
    {
        printf("Transaction Failed - Amount must be multiple of 100.");
    }

    return 0;
}