#include<stdio.h>
void main()
{

    int s,m,ms,h,hm,hs,d,dh,dm,ds,r1,r2;
    printf("enter no. of sec\n");
    scanf("%d",&s);
    if(s>=60&&s<3600)
    {
        m=s/60;
        ms=s%60;
        printf("%d min %d sec\n",m,ms);
    }
    else if(s>=3600&&s<86400)
    {
        h=s/3600;
        r1=s%3600;
        hm=r1/60;
        hs=r1%60;
        printf("%d hours  %d min  %d sec",h,hm,hs);

    }
    else if(s>=86400)
    {
        d=s/86400;
        r1=s%86400;
        dh=r1/3600;
        r2=r1%3600;
        dm=r2/60;
        ds=r2%60;
        printf("%d days  %d hours  %d min  %d sec \n",d,dh,dm,ds);

    }
    else
    {
        printf("%d sec\n",s);
    }
}
