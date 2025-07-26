#include<stdio.h>
#include<conio.h>

int main()
{
    int n=0,result=0;
    printf("Enter Number :");
    scanf("%d",&n);

    result = ~n;

    printf("Result of %d=%d",n,result);

    getch();

    return 0;

}
