#include<stdio.h>
void main()
{
    int i,a,n,s,g,o,l,b;
    printf("lines");
    scanf("%d",&l);
    for(i=0;i<l;i++)
    {
        printf("\n\n\n");
        for(b=0;b<=l;b++)
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
