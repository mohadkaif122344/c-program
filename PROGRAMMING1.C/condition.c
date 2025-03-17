#include<stdio.h>
int main()
{
    int num;
    printf("enter a number : ");
    scanf("%d",&num);
    if(num > 0)
    {
        printf("%d number is positive.\n",num);

    }
    else 
    {
        printf("%d number is negative.\n",num);

    }
    return 0;
}