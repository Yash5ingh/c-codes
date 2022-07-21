#include<stdio.h>
int main()
{
    int i=0;
    int y,m,r,f,c,s1,s2,s3,s4,s5,s6,s7,s8,s9,s10;
    for(i=1;i<=10;i++)
    {
        r=0;
    for(m=1;m<=12;m++)
        {

            printf("\nEnter marks for class :%d  student:%d\n",i,m);
            scanf("%d",&f);
            r=r+f;
            printf("continue?\nyes=1\tno=0");
            scanf("%d",&c);
            if(c==0)
                break;

        }
        switch(i)
        {
        case 1:
            s1=r;
            break;
             case 2:
            s2=r;
            break;
             case 3:
            s3=r;
            break;
             case 4:
            s4=r;
            break;
             case 5:
            s5=r;
            break;
             case 6:
            s6=r;
            break;
             case 7:
            s7=r;
            break;
             case 8:
            s8=r;
            break;
             case 9:
            s9=r;
            break;
             case 10:
            s10=r;
            break;
        }
    }
    printf("\nclass\ttotal\n1\t%d\n2\t%d\n3\t%d\n4\t%d\n5\t%d\n6\t%d\n7\t%d\n8\t%d\n9\t%d\n10\t%d",s1,s2,s3,s4,s5,s6,s7,s8,s9,s10);

}
