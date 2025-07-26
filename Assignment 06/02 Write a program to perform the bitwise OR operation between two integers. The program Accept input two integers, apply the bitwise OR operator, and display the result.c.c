#include<stdio.h>
#include<conio.h>

int main()
{
    int N1=0,N2=0,result=0;
    printf("Enter Number :");
    scanf("%d",&N1);

    printf("Enter Number :");
    scanf("%d",&N2);

    result =N1 | N2;

    printf("Result of %d | %d= %d",N1,N2,result);

    getch();

    return 0;

}
