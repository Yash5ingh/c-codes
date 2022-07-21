#include<stdio.h>
int main()
{
    int a,i,b,c=0;
    printf("enter no.");
    scanf("%d",&a);

    for(i=2;i<=a-1;i++)
    {
        b=a%i;
        if(b==0)
           c=1;
        break;
    }
    if(c==1)
            printf("com");
        else
            printf("prime");
}
