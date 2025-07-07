#include<stdio.h>

int main()
{
    char div;

    printf("Enter Division A,B,C,D\n");
    scanf("%c",&div);

    switch(div)
    {
        case 'A':
        printf("Your Exam is at 10 AM\n");
        break;

        case 'B':
        printf("Your Exam is at 10:30 AM\n");
        break;

        case 'C':
        printf("Your Exam is at 1 PM\n");
        break;

        case 'D':
        printf("Your Exam is at 1:30 PM\n");
        break;

         case 'a':
        printf("Your Exam is at 10 AM\n");
        break;

        case 'b':
        printf("Your Exam is at 10:30 AM\n");
        break;

        case 'c':
        printf("Your Exam is at 1 PM\n");
        break;

        case 'd':
        printf("Your Exam is at 1:30 PM\n");
        break;

        return 0;
    }
}
