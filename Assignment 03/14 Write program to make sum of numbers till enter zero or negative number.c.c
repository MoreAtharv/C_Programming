#include<stdio.h>

int main()

{
    int N,Sum=0;
    while(1)
    {
    printf("Enter Number%d:\n");
    scanf("%d",&N);
    if(N<=0)
    {
       break;
    }
       Sum+=N;
    }

     printf("Total=%d\n",Sum);
    return 0;


}
