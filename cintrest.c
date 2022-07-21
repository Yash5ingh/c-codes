#include<stdio.h>
void main()
{
    float p,r,t,d,a;
    printf("enter principal:\n");
    scanf("%f",&p);
    printf("enter interest rate:\n");
    scanf("%f",&r);
    printf("enter time period:\n");
    scanf("%f",&t);
    a=p*(pow((1+r/100),t));
    printf("\n\namount=%.3f\n\n\n",a);

}
