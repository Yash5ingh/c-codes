#include<stdio.h>
int fib(int n)
{
    if(n==1 ||n==2)
    {
        return n-1;
    }
    else
    {
        return fib(n-1)+fib(n-2);
    }
}
void main()
{
    int a,b,n;
    printf("enter limit");
    scanf("%d",&n);
    printf("%d",fib(n));

}
