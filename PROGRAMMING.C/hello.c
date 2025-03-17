#include<stdio.h>
int main()
{

   int a, b;
   int add,sub,multi,division;
   int mod;

   printf("enter number a: ");
   scanf("%d",&a);

   printf("enter number b: ");
    scanf("%d",&b);

    add = a + b;
    sub = a - b;
    multi = a * b;
    division = a / b;
    mod = a % b;

    printf("Addition : %d\n", add);
    printf("Subtraction : %d\n", sub);
    printf("Multiplication : %d\n", multi);
    printf("Division : %d\n", division);
    printf("Modulus : %d\n", mod);
    
    return 0;
}