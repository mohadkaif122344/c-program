#include <stdio.h>

int main() {
    int a = 5, b = 5;

    // Postfix Increment
    printf("Postfix Increment:\n");
    printf("Initial value of a: %d\n", a);
    printf("Value of a++: %d\n", a++);
    printf("Value of a after a++: %d\n", a);

    // Prefix Increment
    printf("\nPrefix Increment:\n");
    printf("Initial value of b: %d\n", b);
    printf("Value of ++b: %d\n", ++b);
    printf("Value of b after ++b: %d\n", b);

    int c = 5, d = 5;

    // Postfix Decrement
    printf("\nPostfix Decrement:\n");
    printf("Initial value of c: %d\n", c);
    printf("Value of c--: %d\n", c--);
    printf("Value of c after c--: %d\n", c);

    // Prefix Decrement
    printf("\nPrefix Decrement:\n");
    printf("Initial value of d: %d\n", d);
    printf("Value of --d: %d\n", --d);
    printf("Value of d after --d: %d\n", d);

    return 0;
}
