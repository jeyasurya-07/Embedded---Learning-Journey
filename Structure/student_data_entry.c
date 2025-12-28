#include <stdio.h>
#define TOTAL 3

typedef struct{
        int roll_no;
        char name[25];
        float marks;
    }students;

 students s[TOTAL];

void printfun(const students * arr,int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d %s %.2f\n",arr[i].roll_no,arr[i].name,arr[i].marks);
    }
}


int main()
{
    int i;
    
    for(i=0;i<TOTAL;i++)
    {
        students * ptr=&s[i];
        printf("enter the (roll no , name , marks) of student %d:",i+1);
        scanf("%d %24s %f",&ptr->roll_no,ptr->name,&ptr->marks);
    }
    printf("The details of students are:\n");
    
        printfun(s,TOTAL);
    
}