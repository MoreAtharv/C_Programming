///16.Write a program which accept temperature in Fahrenheit and convert it into Celsius.  (1 Celsius = (Fahrenheit -32) * (5/9))

#include<conio.h>
#include<conio.h>

int main()
{
    float Far,Cel;

    printf("\n Enter Temperature ");
    scanf("%f",&Far);

    Cel = (Far-32)*5/9;


    printf("\n  Temperature Celsius Is : %0.2f ",Cel);

    getch();
    return 0;
}
