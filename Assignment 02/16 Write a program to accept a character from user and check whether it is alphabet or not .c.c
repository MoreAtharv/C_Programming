#include<stdio.h>

int main()
{
    char C;

    printf("Enter Character to check Whether it is Alphabet ");
    scanf("%c",&C);

    if((C>='A'&&C<='Z')||(C>='a'&&C<='z') )
    {
        printf("True.");
    }
     else
     {
         printf("False.");
     }

    return 0;
}
