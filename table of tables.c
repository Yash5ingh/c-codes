#include<stdio.h>
int main()
{
    int i,m,n=1;
    for(i=2;i<=10;i++)
    {
        for(m=1;m<=10;m++)
        {
        n=i*m;
        printf("%d\t",n);

        }
        printf("\n");
    }

}
