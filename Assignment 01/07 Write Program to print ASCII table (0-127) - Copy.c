///07.Write Program to print ASCII table (0-127)
#include<stdio.h>
#include<conio.h>

int main()
{


   int i = 0;

    for(i = 0 ;i<=127;i++)
    {
      printf("\n ASCII Value Of %d = %c ",i,i);
    }

    getch();

    return 0;

}
