#include<stdio.h>
#include<string.h>
int main()
{
    char book[50];
    char author[50];
    printf("enter book and author name:\n\nbook name:\tauthor name:\nc++\t\tkanetkar\nCf\t\tbalguru\njava\t\therbert\n");
    scanf("%s,%s",book,author);

    if((strcmp(book,"c++")==0)&&(strcmp(author,"kanetkar")==0))
    {
        printf("c++ is available");

    }
    else
        printf("book not available");






}
