#include<stdio.h>
#include<conio.h>

int main()
{
    int i,No,Zcnt=0,Ocnt=0,Ecnt=0;
    int arr[8] ={0};

    for(i=0;i<8;i++)
    {
    printf("Enter Element : ");
    scanf("%d",&arr[i]);
    }
    getch();

    for(i=0;i<8 ;i++)

    {
    printf(" Array Element %d  is : %d \n\n",i+0,arr[i]);

    if(arr[i]==0)
    {
        Zcnt++;
    }
    else if(arr[i]%=2)
    {
        Ecnt++;
    }
    else
    {
        Ocnt++;
    }

    }
     printf("Zero Number count = %d\n",Zcnt);

     printf("Even Number count = %d\n",Ecnt);

     printf("Odd Number count = %d\n",Ocnt);

    return 0;
}
