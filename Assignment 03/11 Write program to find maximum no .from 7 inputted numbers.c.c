#include<stdio.h>
#include<conio.h>

int main()
 {


    int Num, Max, i;

    printf("\n Enter 7 numbers:\n");

    for(i = 0; i < 7; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &Num);

        if(i == 0)
            {
            Max = Num;
            }
         else if(Num > Max)
            {
            Max = Num;
            }
    }

    printf("The maximum number is: %d\n", Max);

    getch();
    return 0;
}
