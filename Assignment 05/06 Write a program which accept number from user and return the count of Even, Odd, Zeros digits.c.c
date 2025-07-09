 #include<stdio.h>

int main()
{

    int n,dig,ecnt=0,ocnt=0,zcnt=0;

    printf("Enter Number=");
    scanf("%d",&n);

    while(n != 0)
    {
        dig = n%10;

        if(dig == 0)
            zcnt++;
        else if(dig%2==0)
            ecnt++;
        else
            ocnt++;

        n=n/10;
    }
    printf("E=%d,\nO=%d,\nZ=%d,",ecnt,ocnt,zcnt);

    return 0;
}
