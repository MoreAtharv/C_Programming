///20.	Write a program that accepts two numbers from the user and swaps their values.(Without using a third variable).
#include<stdio.h>
#include<conio.h>
int main()
{
    int  Num1,Num2;

    printf("\n Enter Any Two Numbers :");
    scanf("%d%d",&Num1,&Num2);

    printf("\nBefore Swap : %d & %d",Num1,Num2);

    Num1=Num1+Num2;
    Num2=Num1-Num2;
    Num1=Num1-Num2;


    printf("\nAfter Swap : %d & %d",Num1,Num2);

    getch();
    return 0;
}
