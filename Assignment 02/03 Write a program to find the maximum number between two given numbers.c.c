///03
#include<stdio.h>
#include<math.h>

int main()
{
 int N1,N2;

 printf("Enter Any Two Number");
 scanf("%d %d",&N1,&N2);

 if(N1>N2)
 {
 printf("This is Greater No:%d",N1);
 }

 else if(N1<N2)
 {
     printf("This is Greater No:%d",N2);
 }
 else if(N1=N2)
 {
     printf("Both The number's are same");
 }
 else
 {
     printf("Invalid Number");
 }

 getch();

 return 0;

}
