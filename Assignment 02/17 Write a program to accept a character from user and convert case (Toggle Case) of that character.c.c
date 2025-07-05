
#include<stdio.h>

int main()
{
    char ch;
    printf("Enter Character ");
    scanf("%c",&ch);

    if((ch>='A'&&ch<='Z'))
    {
        ch=ch+32;
        printf("%c",ch);
    }
    else if(ch>='a'&&ch<='z')
     {
         ch=ch-32;
         printf("%c",ch);
     }
     else
     {
         printf("%c",ch);
     }


    return 0;
}

