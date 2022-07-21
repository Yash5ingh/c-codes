//Write a program to accept electricity bill details from the user such as name,costumer ID,pin code,bill amount and month of bill and display the same.
//program written by YASH SINGH , FY G2 ,roll no.2205069

#include<stdio.h>
int main()
{
    int ID,PINCODE;
    float BILL;
    char NAME[100],MONTH[100];
    printf("enter name of costumer:\n");
    scanf("%s",&NAME);
    printf("Enter ID:");
    scanf("%d",&ID);
    printf("Enter pincode:\n");
    scanf("%d",&PINCODE);
    printf("Enter month of bill payment:\n");
    scanf("%s",&MONTH);
    printf("Enter bill amount:\n");
    scanf("%f",&BILL);
    printf("\nThe customer's details are:\n");
    printf("\nname:%s\t",NAME);
    printf("ID:%d\t",ID);
    printf("PINCODE:%d\t",PINCODE);
    printf("month of payment:%s\t",MONTH);
    printf("amount:%f",BILL);
}
