//
 #include<stdio.h>

int main()
{

    int n=0,Ocnt=0,dig=0;

    printf("Enter Positive Number=");
    scanf("%d",&n);

    while(n!=0)
    {
    dig = n % 10;

        if(dig % 2 != 0)
        {
            Ocnt++;
        }
        n = n / 10;
    }
    printf("Odd Count of digits in %d is = %d.",n,Ocnt);

    return 0;



}


