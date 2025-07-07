#include<stdio.h>

int main()
{
    int d;

    printf("Enter Number 1 to 7:");
    scanf("%d",&d);

    switch (d)
    {
    case 1:
        printf("The Day of Week is:Monday\n");
        break;

    case 2:
        printf("The Day of Week is:Tuesday\n");
        break;

     case 3:
        printf("The Day of Week is:Wednesday\n");
        break;

     case 4:
        printf("The Day of Week is:Thursday\n");
        break;

     case 5:
        printf("The Day of Week is:Friday\n");
        break;

     case 6:
        printf("The Day of Week is:Saturday\n");
        break;

     case 7:
        printf("The Day of Week is:Sunday\n");
        break;

        return 0;

    }
}





