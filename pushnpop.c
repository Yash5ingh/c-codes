#include <stdio.h>

struct data
{
    char folder[20];
    int top;
}s;

void displaystack()
{
    for(int i=0; i<=s.top; i++)
    {
        printf("\n[%d]: %d",i, s.stack[i]);
    }

}

int stackfull()
{
    if (s.top==9)
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
    if(s.top==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(int n)
{
    if (stackfull())
    {
        printf("stack is full!\n");
    }
    else
    {
        s.top++;
        s.stack[s.top]=n;
    }
}

void pop()
{
    if (stackempty())
    {
        printf("\nstack is empty!\n");
    }
    else
    {
        s.stack[s.top]=0;
        s.top--;
    }
}

int main()
{
    s.folder[10]
    int a,q;
    s.top= -1;

    while (q!=0)
    {
        printf("\nChoose option:\n1.push\n2.pop\n0.EXIT\n");
        scanf("%d",&q);
        switch(q)
            {
            case 1:
                {
                    if (stackfull())
                    {
                        printf("\nstack is full!\n");
                        break;
                    }
                    else
                    {
                        printf("enter number:\n");
                        scanf("%d",&a);
                        push(a);
                        break;
                    }

                }

            case 2:
                {
                    pop();
                    break;
                }
            }
            displaystack();
            printf("\n");
    }

    return 0;
}
