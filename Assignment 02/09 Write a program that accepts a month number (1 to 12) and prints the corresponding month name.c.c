///08
#include<stdio.h>
#include<conio.h>
int main()

{
    int n;
    printf("Enter Number 1 to 12:");
    scanf("%d",&n);

    if(n==1)
    {
        printf(" January\n");
    }
    else if(n==2)
    {
        printf("February\n");
    }
    else if(n==3)
    {
        printf("March\n");
    }
    else if(n==4)
    {
        printf("April\n");
    }
    else if(n==5)
    {
        printf("May\n");
    }
    else if(n==6)
    {
        printf("June\n");
    }
     else if(n==12)
    {
        printf("July\n");
    }
    else if(n==7)
    {
        printf("August\n");
    }
    else if(n==8)
    {
        printf("September");
    }
     else if(n==9)
    {
        printf("October\n");
    }
    else if(n==10)
    {
        printf("November\n");
    }
    else if(n==12)
    {
        printf("December\n");
    }
    else
    {
        printf("Invalid Number");
    }
    getch();

    return 0;

}








