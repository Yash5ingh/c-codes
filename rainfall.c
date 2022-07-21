#include<stdio.h>
int main()
{
    int m,y,i,rm;
    float avg,r,tm=0;
    printf("enter number of years:");
    scanf("%d",&y);
    for(i=1;i<=y;i++)
    {
    for(m=1;m<=12;m++)
        {
            printf("Enter rainfall for month %d of year %d:\n",m,i);
            scanf("%d",&rm);
            r=r+rm;
            tm++;
        }
    }
    printf("\nTotal number of months:%.0f\n",tm);
    printf("total rainfall received:%.0f\n",r);
    avg=r/tm;
    printf("Average rainfall per month:%.3f\n",avg);

}
