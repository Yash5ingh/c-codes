#include<stdio.h>
int main()
{
    char c1[50],c2[50];
    printf("select colors to mix from the following:\n\nred\tblue\tyellow\n\n");
    printf("\n\nenter first colour\n");
    gets(c1);
    printf("enter second colour\n");
    gets(c2);

    if(((strcmp(c1,"red")==0)&&(strcmp(c2,"blue")==0))||((strcmp(c1,"blue")==0)&&(strcmp(c2,"red")==0)))
    {
        printf("\n\ncombination is purple\n\n");

    }
    else if(((strcmp(c1,"red")==0)&&(strcmp(c2,"yellow")==0))|((strcmp(c1,"yellow")==0)&&(strcmp(c2,"red")==0)))
    {
        printf("\n\ncombination is orange\n\n");
    }
     else if(((strcmp(c1,"blue")==0)&&(strcmp(c2,"yellow")==0))|((strcmp(c1,"yellow")==0)&&(strcmp(c2,"blue")==0)))
     {
         printf("\n\ncombination is green\n\n");
     }
     else
     {
         printf("\n\ninvalid color\n\n");

     }

}
