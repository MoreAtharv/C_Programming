#include<stdio.h>

int main()
{
    int i,No;
    int fact = 1;

    printf("Enter a Number:");
    scanf("%d",&No);


        for(i = 1;i <= No; i++)
        {
            fact = fact * i;
        }
        printf("The factorial of %d is:%d\n",No,fact);

    return 0;
}

