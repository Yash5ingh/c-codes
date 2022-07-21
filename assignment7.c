#include<stdio.h>
int main()
{
    int sum[10],stu,cla,mar[12],i,r,p,id[12],j,k;
    for(cla=0;cla<10;cla++)
    {
        printf("Enter number of students for class %d (1 to 12)\n",cla+1);
        scanf("%d",&stu);
        r=0;

        for(i=0;i<stu;i++)
        {
            printf("Enter marks and student ID for student %d\n",i+1);
            scanf("%d%d",&mar[i],&id[i]);

            if(mar[i]<=100&&mar[i]>=0)
              printf("submitted\n\n");
            else
            {
                do
                {
                    printf("marks should be between (0-100)\n");
                printf("enter marks for student %d\n",i+1);
            scanf("%d",&mar[i]);
                }
                while(mar[i]>=100&&mar[i]>=0);
                printf("submitted\n\n");


            }

        }
        i=--i;
        for(j=0;j<=i;j++)
        {
            r=r+mar[j];
        }
        printf("\nStudent ID:\t\tMarks:\n");

        for(k=0;k<=i;k++)
        {
            printf("%d\t\t\t%d\n",id[k],mar[k]);
        }
        printf("\ntotal=%d\n\n\n",r);
        sum[cla]=r;
    }
    printf("\n\n\tCLASS:\tTOTAL:\n");
    for(p=0;p<10;p++)
    {
        printf("\t%d\t%d\n",p+1,sum[p]);
    }
    printf("\n\n");

}
