#include<stdio.h>

int main()
{
    int n,cnt=0;

    printf("Enter Number's");
    scanf("%d",&n);

    if(n==0)
    {
        cnt = 1;
    }
    else
    {
        if (n < 0)
        n = -n;

    }

    while (n!=0)
    {
        n = n/10;
        cnt++;
    }
    printf("Count of digits:%d\n",cnt);
    return 0;



}

