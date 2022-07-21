#include<stdio.h>

void acceptmatrix(int a[5][5],int *r)
{
    int i,j,c;
    printf("enter order ( <=5 ):\n");
    scanf("%d",&*r);
    c=*r;

    for(i=0;i<*r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("enter R=%d and C=%d\n",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n\n");
}

void main()
{
    int a[5][5],n,i,j,i1,i2,i3,i4,i5,i6,i7,i8,i9;

    acceptmatrix(*a,&n);

     for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("\t%d",a[i][j]);

        }
        printf("\n\n");
    }

    for(i1=0;i1<=n-1;i1++)
    {
        printf("%d ",a[n-n][i1]);
    }

            for(i2=1;i2<=n-1;i2++)
        {
            printf("%d ",a[i2][n-1]);

        }

      for(i3=n-2;i3>=0;i3--)
        {
            printf("%d ",a[n-1][i3]);
        }

        for(i4=n-2;i4>=1;i4--)
        {
            printf("%d ",a[i4][0]);
        }

        for(i5=1;i5<=n-2;i5++)
        {
            printf("%d ",a[1][i5]);
        }

        for(i6=2;i6<=n-2;i6++)
        {
            printf("%d ",a[i6][n-2]);
        }

        for(i7=n-3;i7>=1;i7--)
        {
            printf("%d ",a[n-2][i7]);
        }

        for(i8=n-3;i8>=2;i8--)
        {
            printf("%d ",a[i8][1]);
        }

        for(i5=2;i5<=n-3;i5++)
        {
            printf("%d ",a[2][i5]);
        }
}
