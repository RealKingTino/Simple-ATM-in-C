#include <stdio.h>
#include <stdlib.h>

int main() {
    int pin, choice, amount, balance = 5000, transfer, anotherTransaction = 1;

    printf("Welcome to World Bank of Nigeria ATM\n");
    printf("Please enter your 4-digit PIN: ");
    scanf("%d", &pin);

    if (pin != 1234) {
        printf("Invalid PIN, please try again.\n");
        exit(0);
    }

    while(anotherTransaction){
        printf("Please select an option:\n");
        printf("1. Check balance\n");
        printf("2. Withdraw\n");
        printf("3. Transfer\n");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Your balance is: %d\n", balance);
                break;
            case 2:
                printf("Enter amount to withdraw: ");
                scanf("%d", &amount);
                if (amount > balance) {
                    printf("Insufficient balance\n");
                } else {
                    balance -= amount;
                    printf("Transaction successful, new balance is: %d\n", balance);
                }
                printf("Do you want to perform another transaction?\n");
                printf("1. Yes\n");
                printf("2. No\n");
                scanf("%d", &anotherTransaction);
                break;
            case 3:
                printf("Enter amount to transfer: ");
                scanf("%d", &amount);
                if (amount > balance) {
                    printf("Insufficient balance\n");
                } else {
                    printf("Enter account number to transfer to: ");
                    scanf("%d", &transfer);
                    balance -= amount;
                    printf("Transaction successful, new balance is: %d\n", balance);
                }
                printf("Do you want to perform another transaction?\n");
                printf("1. Yes\n");
                printf("2. No\n");
                scanf("%d", &anotherTransaction);
                break;
            default:
                printf("Invalid choice\n");
                break;
        }
    }

    printf("Your final balance is: %d\n", balance);
    return 0;
}
