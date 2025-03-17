#include<stdio.h>

int main()
{

// Declare and initialize an array of integers


int numbers[5] = {10,20,30,40,50};

// Access and print array element

 for  (int i = 0; i < 5; i++)

{
    printf("element at index %d : %d\n",i, numbers[i]);

}
    
    return 0;
}