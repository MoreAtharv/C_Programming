#include<stdio.h>

int main()
{
    int No, Sum=0,Cnt=0,Temp;
    printf("\n Enter 5 Number's:");
    scanf("%d",&No);

    Temp=No;

    while(Temp != 0)
    {
       Sum +=Temp % 10;
       Temp = Temp / 10;
       Cnt++;
    }
    if(Cnt==5)
    {
      printf("The Sum of Digit is%d\n",Sum);
    }
    else
    {
        printf("Invalid Number's");
    }

    return 0;

}

