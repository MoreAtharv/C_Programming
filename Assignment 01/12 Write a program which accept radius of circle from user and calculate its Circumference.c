///12.Write a program which accept radius of circle from user and calculate its Circumference. Consider value of PI as 3.14. (Circumference =  2 * PI * Radius)

#include<stdio.h>
#include<conio.h>

float Pi = 3.14;

int main()
{
    float Radius , Circumference ;

    printf("\n Enter Radius Of Circle  : ");
    scanf("%f",&Radius);

    Circumference  = 2 * Pi * Radius ;

    printf("\n Circumference  Of Circle Is : %.2f ",Circumference );
    getch();
    return 0;
}
