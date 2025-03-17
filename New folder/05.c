#include <stdio.h>

int main() {
    int a = 5, b = 10, temp;

    // Swapping using a third variable
    temp = a;
    a = b;
    b = temp;

    printf("After swapping:\n");
    printf("a = %d, b = %d\n", a, b);

    return 0;
}
