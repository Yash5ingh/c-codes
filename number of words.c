#include<stdio.h>
#include<stdlib.h>
void main()
{
    char s[50]="0";
    int l,i,c=1;

    printf("enter string:\n");
    gets(s);

    l=strlen(s);

    for(i=0;i<l;i++)
    {
        if(s[i]==' ')
        {
            c++;

        }

    }
    printf("\n %d words\n\n",c);

}
