#include <stdio.h>
#include <math.h> // Required for the pow() function

int main() {
    float principal, rate, time, compound_interest;
    int compounding_frequency;

    // Input values from the user
    printf("Compound Interest Calculator\n");
    printf("Enter the principal amount: ");
    scanf("%f", &principal);
    printf("Enter the annual interest rate (in %%): ");
    scanf("%f", &rate);
    printf("Enter the time (in years): ");
    scanf("%f", &time);
    printf("Enter the number of times interest is compounded per year (e.g., 1 for annually, 4 for quarterly): ");
    scanf("%d", &compounding_frequency);

    // Calculate Compound Interest
    compound_interest = principal * pow((1 + rate / (100 * compounding_frequency)), compounding_frequency * time) - principal;

    // Display the result
    printf("Compound Interest: %.2f\n", compound_interest);

    return 0;
}
