#include<stdio.h>
int main()
{
    int n,m,i=1;
    printf("enter number:\n");
    scanf("%d",&n);

    while(i<=10)
    {
        m=i*n;
        printf("%d x %d = %d\n",n,i,m);
        i++;

    }

}
