#include<stdio.h>
#include<conio.h>

int main()
{
    int Choice = 0,N1 = 0,N2 = 0,Result = 0;
     Up:
    printf("\n==============================* Calculator *===================================\n");

    printf("\n Choices => \n\t 1. Addition \n\t 2. Subtraction \n\t 3. Multiplication\n\t 4. Division \n\t 5. Exit");

    printf("\n\n Enter Your Choice :");
    scanf("%d",&Choice);

    switch(Choice)
    {
    case 1 :
             printf("\n Enter Two Numbers For Addition : ");
             scanf("%d%d",&N1,&N2);

             printf("\n addition of %d + %d = %d",N1,N2,Add( N1,N2));
             getch();

             break;

     case 2 :
             printf("\n Enter Two Numbers For Subtract : ");
             scanf("%d%d",&N1,&N2);

             printf("\n Subtract of %d - %d = %d",N1,N2,Sub(N1,N2));
             getch();

             break;

     case 3 :
             printf("\n Enter Two Numbers For Multiplication : ");
             scanf("%d%d",&N1,&N2);

             printf("\n Multiplication of %d * %d = %d",N1,N2,Mult(N1,N2));
             getch();

             break;

      case 4 :
             printf("\n Enter Two Numbers For Division : ");
             scanf("%d%d",&N1,&N2);

             printf("\n Division of %d / %d = %d",N1,N2,Div(N1,N2));
             getch();

             break;

      case 5 :
             goto Down;


    }

   getch();
          system("cls");
          goto Up;
          Down: printf("Thanks");
   return 0;
}
int Add(int N1, int N2)
{
    int Add = 0;
    Add = N1 + N2;
    return Add;
}
int Sub(int N1, int N2)
{
    int Sub = 0;
    Sub = N1 - N2;
    return Sub;
}
int Mult(int N1, int N2)
{
    int Mul = 0;
    Mul = N1 * N2;
    return Mul;
}
int Div(int N1, int N2)
{
    int Div = 0;
    Div = N1 + N2;
    return Div;
}
