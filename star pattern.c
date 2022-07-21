#include<stdio.h>

void circle(int l)
{
    int i,a,n,s,g,o,b,w;
    for(i=0;i<l;i++)
    {
        for(w=1;w<=l/2;w++)
        {
        printf("\n");
        }
        for(b=0;b<=l+5;b++)
        {
            printf("     ");
        }
        for(n=0;n<=i;n++)
        {
            for(o=1;o<=l-i;o++)
            {
                printf("\b\b");
            }
        }
        printf("*");
        for(s=0;s<=i;s++)
        {
            for(g=1;g<=l-i;g++)
            {
                printf("    ");
            }
        }
        printf("*");


    }
    printf("\n\n");

}


void pyramid(int l)
{
    int i,a,n;
    for(i=1;i<=l;i++)
    {
        printf("\n");
        for(n=1;n<=l-i;n++)
        {
            printf("  ");
        }
        for(a=1;a<=i;a++)
        {
            printf("*   ");
        }

    }

}

void rpyramid(int l)
{
    int i,a,n;
    for(i=0;i<l;i++)
    {
        printf("\n");
        for(n=0;n<=i;n++)
        {
            printf("  ");
        }
        for(a=1;a<=l-i;a++)
        {
            printf("*   ");
        }

    }

}

int star(int r)
{
    int n,i;
    for(i=1;i<=r;i++)
    {
        for(n=1;n<=i;n++)
        {
            printf("* ");

        }
        printf("\n");
    }

}

int rstar(int b)
{
     for(int i=1;i<=b;i++)
    {
        for(int n=b;n>=i;n--)
        {
            printf("* ");

        }
        printf("\n");
    }

}


void main()
{
    int q,r;
    printf("how many rows?\n");
    scanf("%d",&r);
     do
    {
    printf("\nSelect pattern:\ntriangle=1\tinverted triangle=2\tpyramid=3\tinverted pyramid=4\tcircle=5\tchange rows=9\tend=0\n");
    scanf("%d",&q);
    switch(q)
    {
    case 1:
        {
            star(r);
            break;
        }
    case 2:
        {
            rstar(r);
            break;
        }
    case 3:
        {
            pyramid(r);
            break;
        }
    case 4:
        {
            rpyramid(r);
            break;
        }
    case 5:
        {
            circle(r);
            break;
        }
    case 9:
        {
           printf("how many rows?\n");
    scanf("%d",&r);
    break;
        }
    default:
        q=69;
    }
    }
    while(q!=69);
}
