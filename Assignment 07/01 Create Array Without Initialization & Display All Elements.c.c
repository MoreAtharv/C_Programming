#include<stdio.h>

int main()
{
    int arr[5],i;

    printf("Enter 5 numbers:\n");

    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Number's\n");

    for(i=0;i<5;i++)
    {
     printf("%d",arr[i]);
    }
    return 0;
}
