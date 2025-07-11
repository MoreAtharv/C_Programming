#include<stdio.h>

int main()
{
    int i,j,Rc;

    printf("Enter Number");
    scanf("%d",&Rc);

    for(i=1; i<=Rc; i++)
    {
        for(j=1;j<=Rc;j++)
        {
            if(i<=j)
            printf("* ");
        }
        printf("\n");

    }
    return 0;
}
