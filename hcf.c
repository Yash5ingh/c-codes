#include<stdio.h>
void hcf(int n1,int n2)
{
    int r=1;

    while(r!=0)
    {

        r=n1%n2;
        if(r==0)
        {
            printf("%d",n2);
            break;
        }

        n1=n2;
        n2=r;
    }

}

void buzz(int n)
{
    int i,b,d,c=0;
    if(n%7==0)
    {
        printf("buzz number");
    }
    else
    {
        for(i=0;i<=n;i++)
        {
            b=n%10;
            d=n/10;
            if(b==7)
            {
                c=1;
               break;
            }
               n=d;

        }

        if(c==0)
        {
              printf("not a buzz number");
        }
        else
        {
            printf("buzz number");
        }

    }


}

void autom(int n)
{
    int i,a,p,l=1,c=0;
    a=n*n;
    p=n;

    while(n>0)
    {
        n=n/10;
        c++;
    }
    c=pow(10,c);
    l=a%c;

    if(l==p)
    {
        printf("automorphic");

    }
    else
    {
        printf("not automorphic");
    }

}


void lcm()
{
    int n1,n2,i=1,j=1,m1=1,m2=0;
    printf("enter 2 numbers:\n");
    scanf("%d%d",&n1,&n2);

    while(m1!=m2)
    {
        m1=n1*i;
        j=1;
        while(m1>m2)
        {
            m2=n2*j;
           j++;
        }
        i++;
    }
    printf("\n\tLCM = %d\n",m1);
}

void main()
{
     int n1,n2,q;
    printf("1.HCF\n2.buzz\n3.automorphic\n4.LCM\n");
    scanf("%d",&q);

    switch(q)
    {
    case 1:
        {
             printf("enter two numbers\n");
    scanf("%d%d",&n1,&n2);
            hcf(n1,n2);
            break;
        }
    case 2:
        {
             printf("enter number\n");
    scanf("%d",&n1);
            buzz(n1);
            break;
        }
         case 3:
        {
             printf("enter number\n");
    scanf("%d",&n1);
            autom(n1);
            break;
        }
         case 4:
            {
                lcm();
            }
    }

}
