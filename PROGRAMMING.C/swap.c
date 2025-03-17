#include<stdio.h>
int main()
{
// write swap number program

int a,b,sum;
printf("enter a :");
scanf("%d",&a);

printf("enter number b :");
scanf("%d",&b);

sum = a;
a = b;
b = sum;
printf("after swapping,first number : %d\n",a);
printf("after swappng,second number : %d",b);



    return 0;
}