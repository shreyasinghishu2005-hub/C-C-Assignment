#include <stdio.h>

int main() {
    float num1, num2;
    char op;

    printf("Enter expression (e.g. 5 + 3): ");
    scanf("%f %c %f", &num1, &op, &num2);

    switch(op) {
        case '+':
            printf("Result = %.2f", num1 + num2);
            break;

        case '-':
            printf("Result = %.2f", num1 - num2);
            break;

        case '*':
            printf("Result = %.2f", num1 * num2);
            break;

        case '/':
            if (num2 != 0)
                printf("Result = %.2f", num1 / num2);
            else
                printf("Error! Division by zero.");
            break;

        default:
            printf("Invalid Operator");
    }

    return 0;
}