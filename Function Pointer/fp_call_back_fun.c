#include <stdio.h>

void sum(int a,int b)
{
 printf("Sum = %d\n",a+b);
}
void mul(int a,int b)
{
    printf("Multiple = %d\n",a*b);
}
void disp(void(*funptr)(int,int))
{
    (*funptr)(5,2);
}
int main()
{
    disp(sum);
    disp(mul);
}