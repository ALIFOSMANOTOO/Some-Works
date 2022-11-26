#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>

void main()
{
    float amount, deposit, withdraw;
    amount = 1000;

    int num;
    int pin = 2021;
    char transaction;

    puts("\n **WELCOME TO LYFSTYLE'S ATM,please INSECT your credit card and lets do some transactions***......");

    Sleep(3000);

    printf("please enter your valid PIN to get started\n");
    scanf("%d", &pin);
    //PIN VALIDATION
    if (pin != 2021)
    {
        printf("Incorrect pin\n");


    printf("please enter your valid PIN to get started\n");
    scanf("%d", &pin);
    }

    Sleep(1000);
    printf(".....\n");

    Sleep(1000);
start:
    printf("please wait while we process your account\n");

    printf("\n ***MENU***\n\n");
    printf("**HELLO USER ,WELCOME TO THE BEST ATM *** HERE!! you can :...\n ");

    //MENU
    Sleep(1000);
    printf("1.deposit into your account....\n ");
    Sleep(1000);
    printf("2.withdraw from your account.....\n ");
    Sleep(1000);
    printf("3.check your remaining balance.....\n ");
    Sleep(1000);
    printf("4.exit and come back later.....\n ");
    Sleep(1000);
    printf("please select your option\n");
    scanf("%d", &num);

    printf("loading!!please wait\n");
    Sleep(1000);

    //OPTION SELECTION
    switch (num)
    {

    //FOR DEPOSIT;
    case 1:
        printf("please enter the amount you want to deposit:\n");
        scanf("%f", &deposit);
        Sleep(1000);
        //FINAL AMOUNT IN ACCOUNT AFTER TRANSACTION
        amount = amount + deposit;
        printf("you have successfully deposited %.2fcedis, in your account \n", deposit);
        printf("your remaining balance is %.2fcedis ", amount);
        goto ending;
        break;

        //FOR WITHDRAWAL
    case 2:
        printf("please enter the amount you wish to withdraw....\n");
        scanf("%f", &withdraw);

        if (withdraw <= amount)
        {
            Sleep(1000);
            printf("you have withdrawn %.2fcedis from your account\n", withdraw);
           //NEW AMOUNT IN ACCOUNT
            amount = amount - withdraw;

            printf("please collect your money in the cash dispenser..\n");
            printf("you have %.2fcedis balance remaining\n", amount);
        }
        //CONDITION FOR INSUFFICIENT AMOUNT
        else
        {
            Sleep(1000);
            puts("you have insufficient balance that suit your withdrawal\n");
        }
        goto ending;
        break;
        //CHECKING BALANCE
    case 3:
        printf("you have %.2f cedis remaining in your account\n", amount);
        goto ending;
        break;


        //EXITING
    case 4:
        printf("**THANKS FOR USING ATM***\n");
        break;

    default:
        printf("!!!!invalid choice\n");
     //AFTER FIRST TRANSACTION,CONDITION TO END OR MAKE ANOTHER TRANSACTION
    ending:
        printf("\n\n\n DO YOU WISH TO HAVE ANOTHER TRANSACTION??(y/n):\n\n");
        char temp = getchar();
        scanf("%c", &transaction);

        if (transaction == 'n' || transaction == 'N')
        {
            printf("** THANK YOU FOR USING OUR ATM SERVICE**\n");
        }
        else if (transaction == 'y' || transaction == 'Y')
        {

            goto start;
        }
        else
        {
            printf("!!!!wrong entry try again");
            goto ending;
        }
    }
}

/*
kwakulyfstyle@IG,TWT,SNAPCHAT......
0556657404
ALIF OTOO @LINKIN
*/
