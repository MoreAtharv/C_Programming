 ///07
#include<stdio.h>
#include<conio.h>

int main()
{
  int Num;

  printf("Enter Number :");
  scanf("%d",&Num);

  (Num % 2 == 0)? printf(" is Even Number.\n",Num):printf(" is odd Number.\n",Num);

  getch();

  return 0;

}

