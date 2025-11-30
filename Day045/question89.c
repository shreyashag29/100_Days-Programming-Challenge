//Q89: Count frequency of a given character in a string.

/*
Sample Test Cases:
Input 1:
programming
g
Output 1:
2

*/
#include <stdio.h>

int main() {
    char str[100],ch;
    int i,c=0;
    printf("Enter a string:\n");
    scanf("%[^\n]", str); 
    printf("Enter a charcter\n");
    scanf(" %c",&ch);
    i = 0;
    while (str[i] != '\0') {
        if (str[i] == ch)
        c++;
        i++;
    }
    printf("Frequency of given character in given string is : %d",c);
    return 0;
}
