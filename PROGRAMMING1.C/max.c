/*ternary operator (?) using program*/ 

// program maximum of two number
 #include<stdio.h>
  
 
 int main() {
    int num1, num2,num3, max;
    printf("Enter two numbers: ");
    scanf("%d", &num1);
    printf("Enter two numbers: ");
    scanf("%d", &num2);
     
    printf("Enter two numbers: ");
    scanf("%d", &num3);
     
    max = (num1>num2) ? num1:num2;

  max = (num1 > num2) ? (num1 > num3 ? num1 : num3) : (num2 >num3 ? num2 : num3);
 printf("The maximum of %d,%d and %d is: %d\n", num1,
                                         num2,num3, max);
 return 0;
 }
