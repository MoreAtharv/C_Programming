#include<stdio.h>

int main()
{
    int i,j,Rc;
                                                    /// ij ij ij ij
    printf("Enter Number");                         /// 11 12 13 14
    scanf("%d",&Rc);                                /// 21 22 23 24
                                                    /// 31 32 33 34
                                                    /// 41 42 43 44
    for(i=1; i<=Rc; i++)
    {
        for(j=1;j<=Rc;j++)
        {
        if((i==j)||(j==Rc)||(j==1))
            printf(" * ");

        else
        {
            printf("   ");
        }
        }
        printf("\n");

    }
    return 0;
}
