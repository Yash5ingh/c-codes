#include<stdio.h>

void acceptmatrix(int a[5][5],int *r,int *c)
{
    int i,j;
    printf("enter rows x columns:\n");
    scanf("%d%d",&*r,&*c);

    for(i=0;i<*r;i++)
    {
        for(j=0;j<*c;j++)
        {
            printf("enter R=%d and C=%d\n",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n\n");
}


void main()
{
    int a[5][5],ar,ac,b[5][5],br,bc,c[5][5],i,j,o,s;

    acceptmatrix(*a,&ar,&ac);
    acceptmatrix(*b,&br,&bc);

    printf("multiplication of:\n\n");

     for(i=0;i<ar;i++)
    {
        for(j=0;j<ac;j++)
        {
            printf("\t%d",a[i][j]);
        }
        printf("\n\n");
    }

    printf("and\n");

     for(i=0;i<br;i++)
    {
        for(j=0;j<bc;j++)
        {
            printf("\t%d",b[i][j]);
        }
        printf("\n\n");
    }


    printf("is-----\n\n");



    if(ac==br)
    {
       for(i=0;i<ar;i++)
       {
           for(j=0;j<bc;j++)
           {
               s=0;
               for(o=0;o<ac;o++)
               {
                   s=s+a[i][o]*b[o][j];
               }

               c[i][j]=s;
               printf("\t%d",c[i][j]);
           }
           printf("\n\n");

       }
    }
    else
    {
        printf("\n\nnot possible\n\n");
    }

}
