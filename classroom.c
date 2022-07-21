#include<stdio.h>
int main()
{
    int sum[10],stu,cla,mar,i,r,p;
    for(cla=0;cla<10;cla++)
    {
        printf("Enter number of students for class %d (1 to 12)\n",cla+1);
        scanf("%d",&stu);
        r=0;

        for(i=1;i<=stu;i++)
        {
            printf("Enter marks for student %d\n",i);
            scanf("%d",&mar);

            if(mar<=100&&mar>=0)
                r=r+mar;
            else
            {
                do
                {
                    printf("marks should be between (0-100)\n");
                printf("enter marks for student %d\n",i);
            scanf("%d",&mar);
                }
                while(mar>=100&&mar>=0);
                r=r+mar;

            }
        }
        printf("\n\n");
        sum[cla]=r;
    }
    printf("\n\n\tCLASS:\tTOTAL:\n");
    for(p=0;p<10;p++)
    {
        printf("\t%d\t%d\n",p+1,sum[p]);
    }
    printf("\n\n");

}
