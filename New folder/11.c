#include<stdio.h>
int main()
{
    int i, n,reverse=0;
    printf("enter the number :");
    scanf("%d",&i);
    while(i!=0)
    {
     reverse = (reverse*10)+i%10;
     i = i/10;

    }
    printf("the reverse number:%d\n",reverse);
    return 0;
}