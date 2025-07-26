#include<stdio.h>

int main()
{
    int Num = 0;

    printf("Enter Number \n");
    scanf("%d",&Num);

    if(((Num>>4)&1) && ((Num>>17)&1))
    {
        printf("\n 5th & 18th bit of given number %d is on",Num);
    }
    else if((Num>>4)&1)
    {
        printf("\n for given number %d = 5th bit is on & 18th bit off",Num);
    }
     else if((Num>>17)&1)
    {
        printf("\n for given number %d = 5th bit is off & 18th bit on",Num);
    }
    else
    {
       printf("\n 5th & 18th bit is off");
    }
    return 0;
}
