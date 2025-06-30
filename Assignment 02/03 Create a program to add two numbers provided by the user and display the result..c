///3.Create a program to add two numbers provided by the user and display the result.

#include<stdio.h>
#include<conio.h>
int main()
{
    int total,N1,N2;


    printf("Enter number 1\n");
    scanf("%d",&N1);

    printf("Enter number 2\n");
    scanf("%d",&N2);

    total = N1 + N2;

    printf("%d+%d =%d",N1,N2,total);

    return 0;
}

