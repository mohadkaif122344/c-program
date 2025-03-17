/*two integer numbers are input through the keyword.
write a program to find out the 
greater number*/
#include<stdio.h>
#include<conio.h>

void main()
{
   
    int x,y;
    printf("enter the value of x :");
    scanf("%d",&x);

    printf("enter the value of y :");
    scanf("%d",&y);

    if(x>y)
    printf("x is greater");

    if(y>x)
    printf("y is greater");

    getch();
}