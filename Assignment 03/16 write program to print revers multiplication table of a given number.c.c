#include<stdio.h>

int main()
{
    int N,i;

    printf("Enter Number To print Multiplication Table\n");
    scanf("%d",&N);

    for(i=10;i>=1;i--)
    {
    printf("%d X %d =%d\n",N,i,N*i);
    }
    return 0;
}
