#include<stdio.h>
#include<string.h>

int top;
char a[20];

struct stack
{
    char folder[20];

}s[10];

void displaystack()
{
    printf("\n\n\n\n\n\n\n");
     for(int i=0; i<=top ; i++)
    {
        printf("[%d] : %s\n",i,s[i].folder);
    }
    printf("\ncurrently on: %s\n\n",s[top].folder);
}

int stackfull()
{
    if (top==9)
    {
        return 1;
    }
    else
    {
        return 0 ;
    }
}

int stackempty()
{
    if(top==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(char n[20])
{
     if (stackfull())
    {
        printf("\nstack full!!\n");
    }
    else
    {
        top++;
        strcpy(s[top].folder,n);
    }

}

void pop()
{
    if (stackempty())
    {
        printf("\nalready switched off \n(wont reply in real life -_- )!\n");
    }
    else
    {
        strcpy(s[top].folder,"0");
        top--;
    }
}

void localdisa()
{
    while(1)
    {
         printf("[UP]\n\ndownloads\nusers\nmusic\n");
    gets(a);

    if(strcmp(a,"downloads")==0)
    {
        push(a);
        displaystack();
        dedend();

    }
    else if(strcmp(a,"users")==0)
    {
        push(a);
        displaystack();
        dedend();

    }
    else if(strcmp(a,"music")==0)
    {
        push(a);
        displaystack();
        dedend();

    }
    else if(strcmp(a, "up")==0)
    {
        pop();
        displaystack();
        return;
    }
    else
    {
        printf("invalid choice");
        localdisa();
    }
    }
}

void localdisb()
{
    while(1)
    {
         printf("[UP]\n\ngames\nmovies\nsecure\n");
    gets(a);

    if(strcmp(a,"games")==0)
    {
        push(a);
        displaystack();
        dedend();

    }
    else if(strcmp(a,"movies")==0)
    {
        push(a);
        displaystack();
        dedend();

    }
    else if(strcmp(a,"secure")==0)
    {
        push(a);
        displaystack();
        dedend();

    }
    else if(strcmp(a, "up")==0)
    {
        pop();
        displaystack();
        return;
    }
    else
    {
        printf("invalid choice\n\n");
    }
    }
}

void localdisc()
{
    while(1)
    {
         printf("[UP]\n\nsecure\nc++ programs\nc programs\n");
    gets(a);

    if(strcmp(a,"secure")==0)
    {
        push(a);
        displaystack();
        dedend();

    }
    else if(strcmp(a,"c++ programs")==0)
    {
        push(a);
        displaystack();
        dedend();

    }
    else if(strcmp(a,"c programs")==0)
    {
        push(a);
        displaystack();
        dedend();

    }
    else if(strcmp(a, "up")==0)
    {
        pop();
        displaystack();
        return;
    }
    else
    {
        printf("invalid choice\n\n");
    }
    }
}

void mycomp()
{
    while (1)
    {
       printf("[UP]\n\nlocal disk A(A)\nlocal disk B(B)\nlocal disk C(C)\n");
    gets(a);

    if(strcmp(a,"A")==0)
    {
        push(a);
        displaystack();
        localdisa();

    }
    else if(strcmp(a,"B")==0)
    {
        push(a);
        displaystack();
        localdisb();

    }
    else if(strcmp(a,"C")==0)
    {
        push(a);
        displaystack();
        localdisc();

    }
    else if(strcmp(a, "up")==0)
    {
        pop();
        displaystack();
        return;
    }
    else
    {
        printf("invalid choice\n\n");
    }
    }

}

void mydocs()
{
    while (1)
    {
       printf("[UP]\n\nimportant\nscripts\npresentations\n");
    gets(a);

    if(strcmp(a,"important")==0)
    {
        push(a);
        displaystack();
        dedend();

    }
    else if(strcmp(a,"scripts")==0)
    {
        push(a);
        displaystack();
        dedend();

    }
    else if(strcmp(a,"presentations")==0)
    {
        push(a);
        displaystack();
        dedend();

    }
    else if(strcmp(a, "up")==0)
    {
        pop();
        displaystack();
        return;
    }
    else
    {
        printf("invalid choice\n\n");
    }
    }

}

void mypics()
{
    while (1)
    {
       printf("[UP]\n\ncamera\nedits\nimported\n");
    gets(a);

    if(strcmp(a,"camera")==0)
    {
        push(a);
        displaystack();
        dedend();

    }
    else if(strcmp(a,"edits")==0)
    {
        push(a);
        displaystack();
        dedend();

    }
    else if(strcmp(a,"imported")==0)
    {
        push(a);
        displaystack();
        dedend();

    }
    else if(strcmp(a, "up")==0)
    {
        pop();
        displaystack();
        return;
    }
    else
    {
        printf("invalid choice\n\n");
    }
    }

}

void dedend()
{
    while (1)
    {
       printf("[UP]\n");
    gets(a);


    if(strcmp(a, "up")==0)
    {
        pop();
        displaystack();
        return;
    }
    else
    {
        printf("invalid choice\n\n");
    }
    }

}

void off()
{
    while (1)
    {
       printf("\n\n[TURN ON](start)\n");
        gets(a);


    if(strcmp(a, "start")==0)
    {
        top++;
        strcpy(s[top].folder,"DESKTOP");;
        return;
    }
    else
    {
        pop();
    }
    }
}

int main()
{
    top = -1;
    printf("Enter the name of folder you want to open..");

    off();

 while (1)
 {

    displaystack();
    printf("\nSHUT DOWN(off)\n\nmy computer\nmy documents\nmy pictures\n\n");
    gets(a);

    if (strcmp(a,"my computer")==0)
    {
        push(a);
        displaystack();
        mycomp();
    }
    else if (strcmp(a,"my documents")==0)
    {
        push(a);
        displaystack();
        mydocs();
    }
    else if (strcmp(a,"my pictures")==0)
    {
        push(a);
        displaystack();
        mypics();
    }
    else if (strcmp(a,"off")==0)
    {
        pop();
        off();

    }
 }
}
