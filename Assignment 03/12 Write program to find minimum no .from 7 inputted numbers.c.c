#include<stdio.h>
#include<conio.h>

int main()
 {


    int Num, Min, i;

    printf("\n Enter 7 numbers:\n");

    for(i = 0; i < 7; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &Num);

        if(i == 0)
            {
            Min  = Num;
            }
         else if(Num < Min)
            {
            Min = Num;
            }
    }

    printf("\n\nThe maximum number is: %d\n", Min);

    getch();
    return 0;
}
