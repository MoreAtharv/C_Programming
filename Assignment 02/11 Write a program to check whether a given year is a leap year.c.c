#include<stdio.h>
#include<conio.h>
int main()

{
    int n;
    printf("Enter Number:");
    scanf("%d",&n);

    if(n%4==0)
    {
        printf("It is Leap Year:");
    }
    else
    {
        printf("It is not Leap Year:");
    }

    getch();

    return 0;
}
