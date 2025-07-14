#include<stdio.h>
#include<conio.h>
#define size 7
int main()
{
    int i=0,Max=0,arr[size]={};

    for(i=0;i<size;i++)
    {
    printf("Enter Element %d:",i+1);
    scanf("%d",&arr[i]);
    }


   for(i=0;i<size;i++)
   {
       if((i==0)||(Max < arr[i]))
        {
        Max = arr[i];
        }
   }
   printf("max=%d",Max);

   getch();
   return 0;

}
