#include<stdio.h>

int main()
{
    int Num = 0;

    printf("Enter Number \n");
    scanf("%d",&Num);

    if((Num>>14)&1)
    {
        printf("\n %d number 15th bit is on",Num);
    }
    else
    {
        printf("\n %d number 15th bit is off",Num);
    }
    return 0;
}
