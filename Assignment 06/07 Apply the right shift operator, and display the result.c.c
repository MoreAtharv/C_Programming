#include<stdio.h>
#include<conio.h>

int main()
{
    int N=0,result=0;
    printf("Enter Number :");
    scanf("%d",&N);

    result = (N>>4);

    printf("Result of %d=%d",N,result);

    getch();

    return 0;

}
