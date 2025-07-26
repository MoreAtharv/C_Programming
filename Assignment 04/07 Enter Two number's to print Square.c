#include<stdio.h>

int main()
{
    int i,j,Rc=0;

    printf("Enter Number");
    scanf("%d",&Rc);

    for(i=1; i<=Rc; i++)
    {
        for(j=1;j<=Rc;j++)
        {
            printf("%d",Rc);
            Rc += 2;
        }
        printf("\n");

    }
    return 0;
}
