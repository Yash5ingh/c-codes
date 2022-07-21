#include<stdio.h>
int main()
{
    int a,f=1,i=1;
    printf("enter number:\n");
    scanf("%d",&a);
    while(i<=a)
    {
        f=f*i;
        i++;
    }
    printf("\n\n\t%d\n\n",f);
}
