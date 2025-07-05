#include<stdio.h>

int main()
{
    char C;

    printf("Enter Character ");
    scanf("%c",&C);

    if((C>='A'&&C<='Z'))
    {
        printf("%c is the Uppercase Character.",C);
    }
    else if(C>='a'&&C<='z')
     {
         printf("%c is the Lowercase  Character.",C);
     }
     else
     {
         printf("%c is The Character %c is Not a Letter",C);
     }

    return 0;
}

