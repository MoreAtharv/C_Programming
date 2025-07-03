///12
#include<stdio.h>
#include<conio.h>
int main()

{
    char i;
    printf("Enter a Character:");
    scanf("%c",&i);


    if('A'==i||'E'==i||'I'==i||'O'==i||'U'==i||'a'==i||'e'==i||'i'==i||'o'==i||'u'==i)
    {
        printf("\nAlphabet is VOVEL.");
    }
     else
     {
         printf("\n Alphabet is NOT VOVEL.");
     }

    getch();

    return 0;

}
