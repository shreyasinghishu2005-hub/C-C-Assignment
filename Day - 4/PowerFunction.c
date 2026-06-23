#include <stdio.h>

int power(int base, int exponent) {
    int result = 1;
    int i;

    for(i = 1; i <= exponent; i++) {
        result *= base;
    }

    return result;
}

int main() {
    int base, exponent;

    printf("Enter base and exponent: ");
    scanf("%d %d", &base, &exponent);

    printf("Result = %d", power(base, exponent));

    return 0;
}