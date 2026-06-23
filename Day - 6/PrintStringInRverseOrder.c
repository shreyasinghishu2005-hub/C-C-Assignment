#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int len = strlen(str);

    printf("Reversed string: ");
    for(i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    return 0;
}