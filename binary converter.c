#include<stdio.h>
#include<math.h>
void main()
{
    int d,b=0,n,i=0,c;
    printf("enter decimal number\n");
    scanf("%d",&d);
    while(d!=0)
    {
        n=d%2;
        d=d/2;
        c=pow(10,i);
        b=b+n*c;
        i++;

    }
     printf("\n\tbinary:  %d\n\n",b);
    return 0;
}
