#include <stdio.h>
#define Max 4
struct student{
    int rollno;
    char name[24];
    float marks;

};
struct student s[Max];

int main(){
    int i;
    

    for( i=0;i<Max;i++)
    {
        struct student *ptr=&s[i];
        printf("enter the value for student[%d]:\n",i+1);
        scanf("%d %s %f",&ptr->rollno,ptr->name,&ptr->marks);
    }
    for( i=0;i<Max;i++)
    {
        printf("the details of student[%d]:\n",i+1);
        struct student *ptr=&s[i];
        printf("%d %s %f\n",(*ptr).rollno,(*ptr).name,(*ptr).marks);
    }
}