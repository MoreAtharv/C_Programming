 #include<stdio.h>

int main()
{

    int n,dig,esum=0,osum=0,diff=0;

    printf("Enter Number=");
    scanf("%d",&n);

    while(n != 0)
    {
        dig = n%10;

        if(dig%2==0)
        {
            esum += dig;
        }
        else
        {
            osum +=dig;
        }

        n=n/10;
    }
     diff=esum - osum;

    printf("%d-%d=%d",esum,osum,diff);

    return 0;
}
