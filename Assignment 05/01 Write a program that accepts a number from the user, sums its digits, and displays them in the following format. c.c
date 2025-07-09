#include<stdio.h>

int main()
{
    int No=0, Sum=0,Deg=0,Temp=0;
    printf("\n Enter a Number:");
    scanf("%d",&No);

    Temp=No;

    for(Temp=No; Temp>0;Sum+=(Temp%10),Temp/=10);

    printf("%d  =%d",No,Sum);


    return 0;

}
