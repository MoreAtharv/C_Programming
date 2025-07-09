 #include<stdio.h>

int main()
{

    int n,dig,max=0;

    printf("Enter Number=");
    scanf("%d",&n);

    while(n!=0)
    {
        dig = n%10;

        if(dig>max)
        {
            max = dig ;
        }

        n=n/10;
    }

    printf("Maximum Digit is=%d",max);

    return 0;
}
