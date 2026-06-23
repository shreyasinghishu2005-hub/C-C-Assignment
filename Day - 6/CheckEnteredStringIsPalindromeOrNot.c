#include <stdio.h>
#include <string.h>

int main() {
    char str[100], rev[100];
    int i, len, flag = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);

    for(i = 0; i < len; i++) {
        rev[i] = str[len - i - 1];
    }
    rev[len] = '\0';

    for(i = 0; i < len; i++) {
        if(str[i] != rev[i]) {
            flag = 0;
            break;
        }
    }

    if(flag)
        printf("Palindrome String\n");
    else
        printf("Not a Palindrome String\n");

    return 0;
}