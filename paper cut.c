#include<stdio.h>
void main()
{
    float a=1682,b=1189,c;
    int i,n;
    printf("enter size\nA");
    scanf("%d",&n);

    for(i=0;i<=n;i++)
    {
        c=a/2;
        a=b;
        b=c;

    }
    printf("\ndimensions are:  %.2f X %.2f\n",a,b);

}
