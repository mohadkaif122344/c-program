// addition, subtraction, multiplication and division all use in  one programs
#include<stdio.h>

int main()
{

int a, b;
int add, sub, multi, div;
// enter any numbers
printf("enter a :");
scanf("%d",&a);
printf("enter b :");
scanf("%d",&b);

add = a+b;
sub = a-b;
multi = a*b;
div = a/b;

// addition
printf("addition : %d\n",add);
// subtraction
printf("subtraction : %d\n",sub);
// multiplication
printf("multiplication : %d\n",multi);
// division
printf("division : %d\n",div);

    return 0;

}