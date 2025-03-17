#include<stdio.h>
int main()
{
  int age;
  printf("enter your age: ");
  scanf("%d",&age);

  if(age < 13)
  {
    printf("child\n");

  }
  else if (age >= 13 && age <= 19)
  {
    printf("teenager\n");
  }
  else if (age >= 20 && age <= 50)
  {
    printf("adult\n");
  }
  else
  {
    printf("senior\n");
  }

    return 0;
}