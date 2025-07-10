#include<stdio.h>
#include<conio.h>

int main()
{
    int i,No,Ecnt=0;
    int arr[7] ={0};

    for(i=0;i<7;i++)
    {
    printf("Enter Element : ");
    scanf("%d",&arr[i]);
    }
    getch();

    for(i=0;i<7;i++)
    {
    printf(" Array Element %d  is : %d \n\n",i+0,arr[i]);
    }
    return 0;
}
