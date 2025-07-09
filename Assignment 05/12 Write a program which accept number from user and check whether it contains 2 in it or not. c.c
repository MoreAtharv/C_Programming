//
 #include<stdio.h>

int main()
{

    int n=0,dig=0,ent=0;

    printf("Enter a Number=");
    scanf("%d",&n);


    while(n!=0)
    {
        dig = n % 10;

        if(dig == 2)
        {
         printf("\nIt Contains Two");
         return 0;
        }

        n = n / 10;
    }

         printf("\nIt Do Not Contains Two");

    return 0;



}



