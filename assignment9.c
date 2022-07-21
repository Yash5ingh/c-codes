#include<stdio.h>
struct part
{
    int  y ,q ;
    char m[20],s[3];
};


void main()
{
    struct part p[60];
    int j ,i=0 , a,n ;
    char y,t[3]="AA";


    do
    {
        printf("\nENTER:\tsr. no.\n\tyear\n\tmaterial\n\tquantity\n");
        scanf("%s%d%s%d",&p[i].s,&p[i].y,&p[i].m,&p[i].q);
        strupr(p[i].s);
        printf("\nnext-1\nsubmit-0\n");
        scanf("%d",&j);
        i++;
    }
    while(j==1);

    printf("\n\n\t________\n\n");

     for(a=0;a<=i;a++)
     {
        if(p[a].s[0]=='A'&&p[a].s[1]=='A')
        {
            printf("\n\nSr.No.\t%s\n\nyear-%d\nmaterial-%s\nquantity-%d\n",p[a].s,p[a].y,p[a].m,p[a].q);
        }
        if(p[a].s[0]=='B'&&p[a].s[1]=='B')
        {
            if(p[a].s[2]=='0'||p[a].s[2]=='1'||p[a].s[2]=='2'||p[a].s[2]=='3'||p[a].s[2]=='4'||p[a].s[2]=='5'||p[a].s[2]=='6')
            printf("\n\nSr.No.\t%s\n\nyear-%d\nmaterial-%s\nquantity-%d\n",p[a].s,p[a].y,p[a].m,p[a].q);
        }
     }

}
