#include<stdio.h>
#include<conio.h>

int main()
{

   int n,dig,cnt=0,Temp;

    printf("Enter a Number");
    scanf("%d",&n);

    printf("Enter digit to Count:");
    scanf("%d",&dig);

    while(n>0)
    {
        Temp=n%10;
       if(Temp==dig)
       {
        cnt++;
       }
         n=n/10;
    }
    printf("The digit %d appears %d time.\n",dig,cnt);
    return 0;
}
