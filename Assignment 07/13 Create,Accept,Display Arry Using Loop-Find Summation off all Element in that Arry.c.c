#include<stdio.h>
#include<conio.h>

int main()
{
    int i,Sum=0;
    int arr[4];

    for(i=0;i<4;i++)
    {
    printf("Enter Element : ");
    scanf("%d",&arr[i]);
    }

    for(i=0;i<4;i++)
    {

      printf(" Array Element %d  is : %d \n\n",i+0,arr[i]);
       Sum += arr[i];

    }

     printf(" Number sum = %d",Sum );

    return 0;
}

