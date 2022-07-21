#include<stdio.h>
int main()
{
    char ope;
    int add,sub,mul;
    float div,n1,n2;
    printf("kiske saath krna hai..?\n");
    scanf("%f%f",&n1,&n2);
    printf("kya krna hai..?\n");
    scanf("%c",&ope);
    switch(ope)
    {
        case '+':
            add=n1+n2;
            printf("\n\tAddition=%d\n\n",add);
            break;
        case '-':
            sub=n1-n2;
            printf("\n\tSubtraction=%d\n\n",sub);
            break;

        case '*':
            mul=n1*n2;
            printf("\n\tmultiplication=%d\n\n",mul);
            break;

        case '/':
            div=n1/n2;
            printf("\n\tdivision=%f\n\n",div);
            break;

        default:
            printf("Incorrect choice");
            }

            return 0;

     }
