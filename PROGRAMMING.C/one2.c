#include<stdio.h>
int main()
{

int num1,num2,max;
printf("enter two number = ");
scanf("%d%d",&num1,&num2);
max = (num1 > num2) ? num1:num2;
printf("max is = %d\n",max);

    return 0;

}