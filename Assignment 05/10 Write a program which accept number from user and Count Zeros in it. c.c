//
 #include<stdio.h>

int main()
{

    int n=0,zcnt=0,dig=0;

    printf("Enter Positive Number=");
    scanf("%d",&n);
    if(n==0)
    {
        zcnt=1;
    }

    while(n!=0)
    {
    dig = n % 10;

        if(dig == 0)
        {
            zcnt++;
        }
        n = n / 10;
    }
    printf("Zero Count of digits in is  %d.",zcnt);

    return 0;



}


