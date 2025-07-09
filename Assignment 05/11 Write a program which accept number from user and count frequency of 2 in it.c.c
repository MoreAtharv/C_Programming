//
 #include<stdio.h>

int main()
{

    int n=0,cnt=0,dig=0;

    printf("Enter Positive Number=");
    scanf("%d",&n);
    if(n == 2)
    {
        cnt=1;
    }

    while(n!=0)
    {
        dig = n % 10;

        if(dig == 2)
        {
            cnt++;
        }
        n = n / 10;
    }
    printf("Count of Two=%d",cnt);


    return 0;



}


