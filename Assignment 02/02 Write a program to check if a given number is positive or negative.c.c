///02
#include<stdio.h>
#include<conio.h>

int main()
{
  int Num;

  printf("Enter Number :");
  scanf("%d",&Num);

  if(Num > 0)
  {
      printf("\n Is a Positive ");

  }
  else if (Num < 0)
  {
      printf("\n Is a Negative ");
  }

  else
  {
      printf("\n Invalid No");
  }
  getch();

  return 0;

}
