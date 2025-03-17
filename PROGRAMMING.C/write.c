#include<stdio.h>
#include<conio.h>
int main()
{

int day;
printf("enter the day number :\n");
scanf("%d",&day);
if(day==1)
printf("monday");
else
if(day==2)
printf("\ntuesday");
else
if(day==3)
printf("wednesday");
else
if(day==4)
printf("thursday");
else
if(day==5)
printf("friday");
else
if(day==6)
printf("saturday");
else
if(day==7)
printf("sunday");
else
printf("your choice is wrong");

return 0;

}