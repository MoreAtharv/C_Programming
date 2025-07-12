#include<stdio.h>
#include<conio.h>

int main()
{
    int i,No,Zcnt=0;
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

    if(arr[i]==0)
    {
        Zcnt++;
    }

    }
     printf("Zero Number count = %d",Zcnt);

    return 0;
}
