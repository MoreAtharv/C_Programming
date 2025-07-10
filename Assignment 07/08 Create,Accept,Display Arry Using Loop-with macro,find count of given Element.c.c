#include<stdio.h>
#include<conio.h>
#define Size 9
int main()
{
    int i,Num,Cnt=0;
    int arr[Size];

    printf("Enter Elements:\n",Size);
    for(i=0; i<Size; i++)
    {
        printf("Element%d:",i+1);
        scanf("%d",&arr[i]);
    }


    printf("Array Elements Are:\n");
    for(i=0; i<Size; i++)
    {
     printf("%d",arr[i]);
    }


    printf("\nEnter element to find its Count:");
    scanf("%d",&Num);


    for(i=0; i<Size; i++)
    {
        if(arr[i] == Num)
            Cnt++;
    }
    printf("Count of %d is :%d",Num,Cnt);

    getch();
    return 0;

}
