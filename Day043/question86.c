//Q86: Check if a string is a palindrome.

/*
Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome

*/
#include <stdio.h>
int main() {
    char str[100], rev[100];
    int i, length = 0, end,c=0;
    printf("Enter a string:\n");
    scanf("%s", str);
    while (str[length] != '\0') {
        length++;
    }
    end = length - 1;
    for (i = 0; i < length; i++) {
        rev[i] = str[end];
        if(rev[i] == str[end])
        c++;
        end--;
    }
    rev[i] = '\0';
    if(c==length)
    printf("String is pallindrome");
    else
    printf("String is not pallindrome");
    
    return 0;
}
