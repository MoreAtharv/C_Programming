#include<stdio.h>

int main()

{
    int N1,N2,i=0;


    printf("Enter 1 Number:");
    scanf("%d",&N1);

    printf("Enter 2 Number:");
    scanf("%d",&N2);

    while(i < N2)
    {
      printf("\t%d",N1);
      i++;
    }

    return 0;


}
