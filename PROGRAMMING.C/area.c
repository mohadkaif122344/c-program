#include <stdio.h>
#include <math.h>
#define PI 3.14159


int main()
 {
    float radius;
  
    float area;
    float circumference;

    // Prompt the user for the radius
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculate the area
    area = PI * radius * radius;

    // calculate the circumference
    circumference = 2 * PI * radius;

    // Display the area
    printf("The area of the circle : %f\n", area);

    // display the circumference
    printf("the circumference of the circle : %f\n",circumference);

    return 0;
}
