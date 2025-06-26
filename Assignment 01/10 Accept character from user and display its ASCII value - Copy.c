///
#include<stdio.h>
#include<conio.h>

int main()
{
    char ch;

    printf("Enter Character");
    scanf("%c",&ch);

    printf("\nCharacter:%c",ch);
    printf("\nDecimal:%d",ch);
    printf("\nHexadecimal:%x",ch);
    printf("\nOctal:%o",ch);

    getch();

    return 0;
}
