#include<stdio.h>
int main()
{
    int a,i,m,c,j;
    printf("enter no of rows:\n");
    scanf("%d",&a);
    for(i=0;i<=a;i++)
    {
        for(j=1;j<=a-i;j++)
        {
            printf("    ");
        }
        for(m=0;m<=i;m++)
        {
          if(i==0||m==0)
                c=1;
          else
            c=c*(i-m+1)/m;
          printf("%8d",c);
        }
         printf("\n\n");
    }

}
