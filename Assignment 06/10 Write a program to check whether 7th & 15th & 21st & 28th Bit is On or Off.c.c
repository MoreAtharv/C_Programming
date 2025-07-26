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

    if((Num>>14)&1)
       {
           printf("\n 15th bit -");
       }

    if((Num>>20)&1)
       {
           printf("\n 21th bit -");
       }

    if((Num>>27)&1)
       {
           printf("\n 28th bit -");
       }

       printf("of given number %d bit is on",Num);

       return 0;
}



