#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int count1[256] = {0}, count2[256] = {0};
    int i, flag = 1;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    if(strlen(str1) != strlen(str2)) {
        printf("Not Anagrams\n");
        return 0;
    }

    for(i = 0; str1[i] != '\0'; i++) {
        count1[(unsigned char)str1[i]]++;
        count2[(unsigned char)str2[i]]++;
    }

    for(i = 0; i < 256; i++) {
        if(count1[i] != count2[i]) {
            flag = 0;
            break;
        }
    }

    if(flag)
        printf("Strings are Anagrams\n");
    else
        printf("Strings are Not Anagrams\n");

    return 0;
}