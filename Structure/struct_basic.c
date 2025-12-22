#include <stdio.h>

struct student {                        //structure declaration with tags
    int rollno;                         //member of structures
    char name[20];
    float mark;
}a;
struct student s2;                       //declaration of structure variable
int main()
{
struct student s1;
printf("\nenter the detail for s1:");
scanf("%d %s %f",&s1.rollno,s1.name,&s1.mark);
printf("\nenter the detail for s2:");
scanf("%d %s %f",&s2.rollno,s2.name,&s2.mark);
a=s1;
printf("\nthe detail of s1:");
printf("\n%d %s %f",s1.rollno,s1.name,s1.mark);
printf("\nthe detail of s2:");
printf("\n%d %s %f",s2.rollno,s2.name,s2.mark);
printf("\nthe detail of a");
printf("\n%d %s %f",a.rollno,a.name,a.mark);
}