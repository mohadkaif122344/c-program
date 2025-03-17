// write a program to final velocity
// formula 
// v = u + at^2
// or v = u + a*t*t

#include<stdio.h>
#include<math.h>
int main()
{
    int v,u,a,t;
// enter initial velocity u
    printf("enter u :");
    scanf("%d",&u);
    // enter acceleration a
    printf("enter a:");
    scanf("%d",&a);
    // enter time t
    printf("enter t :");
    scanf("%d",&t);
// formula
    v = u + a * pow(t,2);
// or v = u + a*t*t;
    // print final velocity v
    printf("final velocity : %d",v); 


return 0;
}