#include<stdio.h>

int main()
{
    char ch,i ='\0';

    printf("Enter character:");
    scanf("%c",&ch);

    if(ch>='A'&&ch<='Z')
    {
        for(i=ch;i<='Z';i++)
        {
            printf("%c",i);
        }
    }
    else if(ch>='a'&&ch<='z')
    {
        for(i=ch;i>='a';i--)
        {
            printf("%c",i);
        }
    }
    else
    {
        printf("Invalid No ");
    }
    return 0;
}
