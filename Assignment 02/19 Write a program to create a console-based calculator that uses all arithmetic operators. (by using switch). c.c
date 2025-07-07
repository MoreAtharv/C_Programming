#include<stdio.h>


int main()
{
    char s;
   int num1,num2;
    float total;

    printf("Enter an Operator(+,-,*,/,%%):");
    scanf("%c",&s);

    printf("Enter Number 1:");
    scanf("%d",&num1);

    printf("Enter Number 2:");
    scanf("%d",&num2);

    switch(s)

     {
        case'+':
        total=num1+num2;
        printf("Total:%.2f\n",total);
        break;

        case'-':
        total=num1-num2;
        printf("Total:%.2f",total);
        break;

        case'*':
        total=num1*num2;
        printf("Total:%.2f",total);
        break;

        case'/':
        total=num1/num2;
        printf("Total:%.2f",total);
        break;

        case'%':
        if (num2!=0)
        {
        printf("Total:%d\n",num1 % num2);
        }
        else
        {
            printf(" '0' Error");
        }

        break;



        return 0;
     }
}
