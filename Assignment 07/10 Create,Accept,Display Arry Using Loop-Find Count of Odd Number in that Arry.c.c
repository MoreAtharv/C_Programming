#include<stdio.h>
#include<conio.h>

int main()
{
    int i,No,Ocnt=0;
    int arr[4] ={0};

    for(i=0;i<4;i++)
    {
    printf("Enter Element : ");
    scanf("%d",&arr[i]);
    }
    getch();

    for(i=0;i<4;i++)

    {
    printf(" Array Element %d  is : %d \n\n",i+0,arr[i]);

    if(arr[i]%2==1)
    {
        Ocnt++;
    }

    }
     printf("Odd Number count = %d",Ocnt);

    return 0;
}
