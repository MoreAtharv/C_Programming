///05
#include<stdio.h>
#include<conio.h>

int main()
{
 int N;

 printf("Enter Number to check Wether it is Divisible by 5 and 7.\n");
 scanf("%d",&N);

 if(N%5==0 && N%7==0)

 {
      printf(" \n %d Number is Divisible By 5 and 7.",N);
 }


 else
 {
      printf(" \n %d Number is Not Divisible By 5 and 7.",N);
 }

 getch();

 return 0;
}
