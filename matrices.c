#include<stdio.h>
void tria(int a[10][10],int c,int r)
{
    int q,o;
    o=r+1;
    printf("\nwhich triangle\n1=upper\t2=lower\n");
    scanf("%d",&q);
    if(q==1)
    {
        for(int i=1; i<=r; i++)
        {
            for(int n=1; n<=c; n++)
            {
                if(o<n+i)
                {
                    printf("\t0");

                }
                else
                {

                    printf("\t%d",a[i][n]);
                }

            }

            printf("\n\n");
        }
    }
    else
    {
        for(int i=1; i<=r; i++)
        {
            for(int n=1; n<=c; n++)
            {
                if(o>n+i)
                {
                    printf("\t0");

                }
                else
                {

                    printf("\t%d",a[i][n]);
                }

            }

            printf("\n\n");
        }

    }
}




void trans(int a[10][10],int c,int r)
{
    for(int i=1; i<=c; i++)
    {
        for(int n=1; n<=r; n++)
        {
            printf("\t%d",a[n][i]);

        }
        printf("\n\n\n");
    }

}





void diag(int a[10][10],int c,int r)
{
    for(int i=1; i<=r; i++)
    {
        for(int n=1; n<=c; n++)
        {
            if(i==n)
            {
                printf("\t%d",a[i][n]);
            }
            else
            {
                printf("\t0");
            }


        }
        printf("\n\n\n");
    }
}





void main()
{
    int r,q,c,a[10][10];
    printf("enter order of matrix(1-10)\ncolumns \t rows\n");
    scanf("%d%d",&c,&r);
    printf("\nenter elements of the matrix\n");
    for(int i=1; i<=r; i++)
    {
        for(int n=1; n<=c; n++)
        {
            printf("\nR%d C%d=\n",i,n);
            scanf("%d",&a[i][n]);
        }
    }
    printf("\n\n\n");
    for(int i=1; i<=r; i++)
    {
        for(int n=1; n<=c; n++)
        {
            printf("\t%d",a[i][n]);

        }
        printf("\n\n\n");
    }
    printf("kya krna hai??\n1=triangle\n2=transpose\n3=diagonal\n");
    scanf("%d",&q);
    switch(q)
    {
    case 1:
        tria(a,c,r);
        break;

    case 2:
        trans(a,c,r);
        break;

    case 3:
        diag(a,c,r);
        break;

    default:
        printf("incorrect choice");

    }



}

