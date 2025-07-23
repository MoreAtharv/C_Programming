#include<stdio.h>
#include<conio.h>

int main()
{
    int Choice = 0,N1 = 0,N2 = 0,Result = 0;

    printf("\n==============================* Calculator *===================================\n");

    printf("\n Choices => \n\t 1. Addition \n\t 2. Subtraction \n\t 3. Multiplication\n\t 4. Division \n\t 5. Exit");

    printf("\n\n Enter Your Choice :");
    scanf("%d",&Choice);

    switch(Choice)
    {
    case 1 :
             printf("\n Enter Two Numbers For Addition : ");
             scanf("%d%d",&N1,&N2);
             Result = N1 + N2;
             printf("\n addition of %d + %d = %d",N1,N2,Result);
             break;

     case 2 :
             printf("\n Enter Two Numbers For Subtract : ");
             scanf("%d%d",&N1,&N2);
             Result = N1 - N2;
             printf("\n Subtract of %d - %d = %d",N1,N2,Result);
             break;

     case 3 :
             printf("\n Enter Two Numbers For Multiplication : ");
             scanf("%d%d",&N1,&N2);
             Result = N1 * N2;
             printf("\n Multiplication of %d * %d = %d",N1,N2,Result);
             break;

      case 4 :
             printf("\n Enter Two Numbers For Division : ");
             scanf("%d%d",&N1,&N2);
             Result = N1 / N2;
             printf("\n Division of %d / %d = %d",N1,N2,Result);
             break;

      case 5 :
             goto Down;


    }

   getch();
          Down: printf("\n\n Thanks");
   return 0;
}
