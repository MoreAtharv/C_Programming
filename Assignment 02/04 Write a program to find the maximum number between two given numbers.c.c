///04
#include<stdio.h>
#include<conio.h>

int main()
{
 int N1,N2,N3;

 printf("Enter Any Three Number's to get greater :\n");
 scanf("%d%d%d",&N1,&N2,&N3);

 if(N1>N2)
 {
 printf("This is Greater No:%d",N1);
 }

 else if(N2>N3)
 {
 printf("This is Greater No:%d",N2);
 }

  else if(N3>N1)
 {
 printf("This is Greater No:%d",N3);
 }

 getch();

 return 0;
}
