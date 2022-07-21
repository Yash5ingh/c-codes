#include<stdio.h>
void main()
{
    int a=0,n,i;
    printf("enter number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        a=a+i;
    }
    printf("\n\t%d\n",a);
    return 0;
}
