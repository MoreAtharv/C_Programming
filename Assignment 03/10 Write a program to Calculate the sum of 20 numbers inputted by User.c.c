#include<stdio.h>

int main()

{
    int i,N,Sum=0;
    printf("Enter 10 Number's");

    for(i==1;i<=10;i++)
    {
       printf("Enter Number%d:\n",i);
       scanf("%d",&N);
       Sum+=N;
    }

     printf("Total=%d\n",Sum);
    return 0;
}
