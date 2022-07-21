#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp;
    int i=1;
    char t[200] ;
    fp=fopen("C:\\Users\\Yash\\Documents\\text.txt","r");

    while(!feof(fp))
    {
        fgets(t,200,fp);
        printf("%d. ",i);
        printf("%s",t);
        i++;
    }
    fclose(fp);


    return 0;
}
