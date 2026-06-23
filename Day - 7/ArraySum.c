#include <stdio.h>

int main() {
    int arr[5], i, sum = 0;
    int *ptr = arr;

    printf("Enter 5 elements:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", ptr + i);
    }

    for(i = 0; i < 5; i++) {
        sum += *(ptr + i);
    }

    printf("Sum = %d\n", sum);

    return 0;
}