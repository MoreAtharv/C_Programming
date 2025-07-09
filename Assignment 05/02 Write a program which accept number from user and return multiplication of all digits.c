#include<stdio.h>

int main()
{
    int num,digit,product=1;
    printf("\n Enter a Number:");
    scanf("%d",&num);

    if(num == 0)
    {
        printf("0");
    }
    else
        {
            while(num!=0)
          {
              digit=num%10;
              product*=digit;
              num/=10;

          }
        }
        printf("Multiplication=%d\n",product);

    return 0;

}
