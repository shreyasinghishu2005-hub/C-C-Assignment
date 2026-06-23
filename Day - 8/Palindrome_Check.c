#include <stdio.h>
#include <string.h>

int palindrome(char str[], int start, int end) {
    if(start >= end) return 1;
    if(str[start] != str[end]) return 0;
    return palindrome(str, start + 1, end - 1);
}

int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    if(palindrome(str, 0, strlen(str)-1))
        printf("Palindrome");
    else
        printf("Not Palindrome");
    return 0;
}
