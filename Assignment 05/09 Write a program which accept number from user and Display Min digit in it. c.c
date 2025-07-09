 #include<stdio.h>

int main()
{

    int n,dig,min=9;

    printf("Enter Number=");
    scanf("%d",&n);

    while(n!=0)
    {
        dig = n%10;

        if(dig<min)
        {
            min = dig ;
        }

        n=n/10;
    }

    printf("Minimum Digit is=%d",min);

    return 0;
}
