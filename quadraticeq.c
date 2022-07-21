#include<stdio.h>
#include<math.h>
void main()
{
    float a ,b ,c ,det,r1,r2;
    printf("enter A ,B & C\n");
    scanf("%f%f%f",&a,&b,&c);
    printf("\nequation: %.2f x^2 + %.2f x + %.2f =0\n",a,b,c);
    det=pow(b,2)-4*a*c;
    printf("\nD=%.2f\n",det);
    if(det==0)
    {
        r1=-b/2*a;
        printf("\n%.2f\n",r1);
    }
    else if(det>0)
    {
        r1=(-b+sqrt(det))/2*a;
        r2=(-b-sqrt(det))/2*a;
        printf("\n%.2f & %.2f\n",r1,r2);
    }
    else
    {
        r1=-b/2*a;
        r2=(sqrt(-(det)))/2*a;
        printf("\n%.2f+i%.2f & %.2f-i%.2f\n",r1,r2,r1,r2);
    }
}
