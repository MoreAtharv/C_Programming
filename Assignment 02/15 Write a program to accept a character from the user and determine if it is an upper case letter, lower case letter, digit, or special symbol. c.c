#include<stdio.h>

int main()
{
    char ch;
    printf("Enter Character ");
    scanf("%c",&ch);

    if((ch>='A'&&ch<='Z'))
    {
        printf("it is the Uppercase Character.");
    }
    else if(ch>='a'&&ch<='z')
     {
         printf("it is the Lowercase  Character.");
     }
     else if(ch>='0'&&ch<='9')
     {
         printf("it is Digit");
     }
     else
     {
         printf("it is Special Symbol.");
     }


    return 0;
}

