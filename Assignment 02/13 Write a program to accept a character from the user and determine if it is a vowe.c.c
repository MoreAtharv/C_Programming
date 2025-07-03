#include<stdio.h>
#include<conio.h>

int main()
{
    char C;

    printf("Enter Character ");
    scanf("%c",&C);

    if (C=='A'||C=='a'||C=='E'||C=='e'||C=='I'||C=='i'||C=='O'||C=='o'||C=='U'||C=='u')
    {
        printf("It is a VOVEl.");
    }
    else if((C>='A'&&C<='Z')||(C>='a'&&C<='z'))
    {
        printf("It is CONSONANT.");
    }
    else
     {
         printf("This is Not Character.");
     }

     getch();

    return 0;
}
