//Riya wants to learn basic calculation, help her for following operations by program:addition of 2 numbers, subtraction of 2 numbers, division operation of 2 numbers,multiplication of 2 numbers, find remainder, calculate percentage.
// program written by YASH SINGH, G2 batch, roll no:2205069
#include<stdio.h>
int main()
{
    int num1,num2,a,s,m,r;
    float d,p;
    printf("enter marks of subject 1:\n");
    scanf("%d",&num1);
    printf("enter marks of subject 2:\n");
    scanf("%d",&num2);
    a=num1+num2;
    s=num1-num2;
    m=num1*num2;
    r=num1%num2;
    d=num1/num2;
    p=a/2;
    printf("\n\nsum of marks=%d\n",a);
    printf("difference of marks=%d\n",s);
    printf("product of marks=%d\n",m);
    printf("division of the two marks=%f\n",d);
    printf("remainder after division was=%d\n",r);
    printf("percentage marks obtained=%.2f\n\n",p);
}
