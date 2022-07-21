#include <stdio.h>
float calculate_price(float,float,float);
void main()
{
    float price, comm_rate, disc_rate,fp;
    printf("Enter price, commission rate, discount rate\n");
    scanf("%f%f%f",&price,&comm_rate,&disc_rate);
    fp=calculate_price(price,comm_rate,disc_rate);
    printf("Final price of product=%.2f\n",fp);

}
float calculate_price(float price,float comm_rate,float disc_rate)
{
    float comm_amt, dis_amt,final_price;
    comm_amt=(comm_rate/100)*price;
    dis_amt=(disc_rate/100)*(price+comm_amt);
    final_price=price+comm_amt-dis_amt;
    return final_price;
}
