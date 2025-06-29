///20 .Write a program that accepts two numbers from the user and swaps their values.
#include<stdio.h>
#include<conio.h>

int main()
{
  float a,b,c;

  printf("Enter Two Number\n");
  scanf("%f%f",&a,&b);

  printf("\n Before Swapping :\n a=%0.f\n  b=%0.f\n",a,b);

  c=a+b;
  b=a-b;
  a=a-b;

   printf(" \nAfter Swapping :\na=%0.f\n b=%0.f\n",a,b);


  getch();

  return 0;

}
