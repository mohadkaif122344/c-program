#include<stdio.h>
int main()
{
   int a,b;
   printf("enter a and b ");
   scanf("%d%d",&a,&b);

   int max(int a, int b){
   
    if(a>b)
    {
        return a;
    }
    else {
        return b;
    }
   }

    return 0;
}