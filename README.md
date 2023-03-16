#ifndef README_MD_INCLUDED
#define README_MD_INCLUDED

# ATM Program

This is a simple ATM machine program written in C language that allows users to check their balance, withdraw money, and transfer money between accounts. This program is intended for educational purposes only and is not designed for real-world use.

## Features

This program has the following features:

User authentication with a 4-digit PIN
Check account balance
Withdraw money
Transfer money to another account
Option to perform another transaction after completing a withdrawal or transfer

## How to Run

Open the C compiler (e.g., GCC).
Compile the program using the following command:

```
gcc -o atm atm.c

```


Run the program using the following command:

```
./atm

```

Follow the instructions displayed on the screen to use the ATM machine.

## How to Use

Enter your 4-digit PIN when prompted.
Select an option from the menu (Check balance, Withdraw, or Transfer).
If you choose Withdraw or Transfer, enter the amount you want to withdraw/transfer and follow the prompts to complete the transaction.
If you choose to perform another transaction, follow the prompts to select another option from the menu.
When you are done, choose No when prompted to perform another transaction to display your final account balance.



#endif // README_MD_INCLUDED
