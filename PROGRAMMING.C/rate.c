#include<stdio.h>
#include<conio.h>

int main()
{
{
  int qty;
  float dis = 0.10,rate,tot;

  printf("enter the rate and quantity :\n");
  scanf("%f%d",&rate,&qty);

  if(qty>=1000)

  tot=((qty*rate)-(qty*rate*dis));
  printf("\n rate=%f\n dis=%f\n qty=%d",rate,dis,qty);
  printf("\n total expenses=%f",tot);


    return 0;
}