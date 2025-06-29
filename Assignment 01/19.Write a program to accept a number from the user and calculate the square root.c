///19.Write a program to accept a number from the user and calculate the square root of that number, then display the result.
#include<stdio.h>
#include<math.h>

int main()
{
    float No,S;

    printf("Enter Number : ");
    scanf("%f",&No);

     S = sqrt(No);

    printf("SquareRoot of %.2f is %0.2f",No,S);


}
