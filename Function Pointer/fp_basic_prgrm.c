#include <stdio.h>

int sum(int a ,int b)
{
    return a+b;
}
int main()
{
    int s=0;
    int(*funptr)(int,int)=&sum;
    s=funptr(5,2);
    printf("sum=%d",s);
}