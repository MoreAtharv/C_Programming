//
 #include<stdio.h>

int main()
{

    int n=0,ecnt=0,dig=0;

    printf("Enter Positive Number=");
    scanf("%d",&n);

    while(n!=0)
    {
    dig = n % 10;
        if(dig == 0)
        {

        }

        else if(dig % 2 == 0)
        {
            ecnt++;
        }
        n = n / 10;
    }

    printf("Even Count of digits in is = %d.",ecnt);

    return 0;



}


