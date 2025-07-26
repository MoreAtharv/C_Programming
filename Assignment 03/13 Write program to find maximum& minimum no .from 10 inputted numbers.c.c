#include<stdio.h>
#include<conio.h>

int main()
 {


    int Num, Max,Min, i;

    printf("\n Enter 7 numbers:\n");

    for(i = 0; i < 7; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &Num);

         if(Num > Max)
            {
            Max = Num;
            }
        else if(Num < Min)
            {
            Min = Num;
            }
    }

    printf("The Maximum number is: %d\n", Max);
    printf("The Minimum number is: %d\n", Min);


    getch();
    return 0;
}
