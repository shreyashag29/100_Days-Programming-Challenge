//Q85: Reverse a string.

/*
Sample Test Cases:
Input 1:
abcd
Output 1:
dcba

*/
#include <stdio.h>
int main() {
    char str[100], rev[100];
    int i, length = 0, end;
    printf("Enter a string:\n");
    scanf("%s", str);
    while (str[length] != '\0') {
        length++;
    }
    end = length - 1;
    for (i = 0; i < length; i++) {
        rev[i] = str[end];
        end--;
    }
    rev[i] = '\0';
    printf("Reversed string: %s\n", rev);
    return 0;
}
