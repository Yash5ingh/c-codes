#include<stdio.h>
int main()
{
    int a,i,b,n,m,c,j,k,l,z;
    printf("enter no.");
    scanf("%d",&a);
    for(m=1;m<=a-1;m++)
    {
         n=a-m;
       z=0;
       c=0;
        for(i=2;i<=m-1;i++)
    {
        b=m%i;
        if(b==0)
           c=1;

    }

    if(c==0)
    {

         for(j=2;j<=n-1;j++)
    {
        l=n%j;
        if(l==0)
           z=1;
           else
            z=2;

    }
    }

    if(z==2)
    {
        break;
    }

    }
    if(c==0&&z==2)
        printf("yes");
        else
            printf("no");

}
