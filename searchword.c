#include<stdio.h>

void main()
{
    int i,j,lb,la,count=0;
    char a[100],b[20],c[20]="o";
    printf("enter a string\n");
    gets(a);
    printf("\nenter a word to search\n");
    gets(b);
    lb=strlen(b);
    la=strlen(a);

    for(i=0;i<la;i++)
    {
        if(a[i]==b[0])
        {
            for(j=i;j<i+lb;j++)
            {
                c[j-i]=a[j];

            }

            if(strcmp(c,b)==0)
            {
                count++;
            }
        }


    }


    printf("\nword came %d time(s)\n",count);


}
