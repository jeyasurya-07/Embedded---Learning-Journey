#include <stdio.h>

void sum(int a, int b)
{
    printf("\nsum = %d",a+b);
}
void diff(int a,int b)
{
    printf("\ndiff = %d",a-b);
}
void mul(int a,int b)
{
    printf("\nmul = %d",a*b);

}
void div(int a,int b)
{
    if(b==0)
    {
        printf("\nerror by zero");
        return 0;
    }
    printf("\ndiv = %d",a/b);
}

int main ()
{
    int i,j,ch;
    void(*funptr[15])(int,int)={sum,diff,mul,div};
    printf("0 - Addition\n1 - Subtraction\n2 - Multiplication\n3 - Division");
    printf("\nenter the char:");
    scanf("%d",&ch);
    if(ch<0 || ch>3)
    {
        printf("\ninvalid choice");
        return 0;
    }
    printf("\nenter the two values:");
    scanf("%d %d",&i,&j);
    funptr[ch](i,j);
}