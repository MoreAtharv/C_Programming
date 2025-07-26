#include<stdio.h>

int main()
{
    int Num = 0;

    printf("Enter Number \n");
    scanf("%d",&Num);

    if((Num>>6)&1)
       {
           printf("\n 7th bit -");
       }

    if((Num>>7)&1)
       {
           printf("\n 8th bit -");
       }

    if((Num>>8)&1)
       {
           printf("\n 9th bit -");
       }

       printf("\nof given number %d bit is on",Num);

       return 0;
}
