///8.Write Program to find out ASCII value of given character.

#include<stdio.h>
#include<conio.h>

int main()

{
    char ch;

    printf("\n Enter Any Character : ");
    scanf("%c",&ch);
    printf("\n ASCII value of given character %c Is = %d",ch,ch);

    getch();

    return 0;
}
