//Q88: Replace spaces with hyphens in a string.

/*
Sample Test Cases:
Input 1:
hello world
Output 1:
hello-world

*/
#include <stdio.h>

int main() {
    char str[100];
    int i;
    printf("Enter a string:\n");
    scanf("%[^\n]", str); 
    i = 0;
    while (str[i] != '\0') {
        if (str[i] == ' ')
        printf("-");
        else 
        printf("%c",str[i]);
        i++;
    }
    return 0;
}
