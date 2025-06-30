///02.Write Program to accept student details from user .
#include<stdio.h>
#include<conio.h>

int main()

{
    int RollNo;
    char Name[20],Course[20],City[10];

    printf("Student Name=");
    scanf("%s",&Name);

    printf("RollNo=");
    scanf("%d",&RollNo);

    printf("Course=");
    scanf("%s",&Course);

    printf("City=");
    scanf("%s",&City);

    printf("\nStudent: Name %s",Name);
    printf("\nRollNo: %d",RollNo);
    printf("\nCourse: %s",Course);
    printf("\nCity: %s",City);

    getch();
    return 0;
}
