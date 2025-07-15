#include<stdio.h>
#include<conio.h>
#define size 7

int main()
{
    int Bill[size]={0},i=0,search=0;

    for(i=0; i<size; i++)
    {
        printf("\nEnter Array %d Element :\n",i+1);
        scanf("%d",&Bill[1]);
    }

    getch();
    system("cls");

        printf("\nEnter Number to be Searched in Array :");
        scanf("%d",&search);

        for(i=0; i<size; i++)
        {
            if(Bill[1]==search)
            {
                break;
            }
        }
        if(i==size)
        {
             printf("\n Number Entered by you is not found:");
        }
        else
        {
            printf("\n Number %d found at Index %d:",search,i);

        }
        getch();
        return 0;
}
