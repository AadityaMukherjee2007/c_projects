/*
Input: account balance, withdrawal amount.

Follow the given rules:
1. Withdrawal amount must be a multiple of 100.
2. Withdrawal must not exceed balance.
3. Maintain a minimum balance of ₹500 after withdrawal.

Output: Transaction success or failure with reason.
*/

#include <stdio.h>

int main()
{
    int acBal, amt;
    printf("Account balance: ");
    scanf("%d", &acBal);
    printf("Withdrawal amount: ");
    scanf("%d", &amt);

    if (acBal < amt)
        printf("Transaction Failed!\nWithdrawal must not exceed balance.\n");
    else if (acBal - amt < 500)
        printf("Transaction Failed!\nMaintain a minimum balance of ₹500.\n");
    else if (amt % 100 != 0)
        printf("Transaction Failed!\nWithdrawal amount must be a multiple of 100.\n");
    else 
    {
        printf("\nTransaction Succesfull!\n");
        printf("Reamining Balance: %d\n", acBal - amt);
    }

    return 0;
}