#include<stdio.h>
#define PI 3.14
int main()
{
    float r,a,c;
    printf("enter radius of the circle\n");
    scanf("%f",&r);
    a=PI*r*r;
    c=2*PI*r;
    printf("area of the circle is %.3fsq units.\n",a);
    printf("circumference of the circle is %.3f units.",c);

}
