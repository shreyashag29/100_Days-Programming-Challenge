//Q84: Convert a lowercase string to uppercase without using built-in functions.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
HELLO

*/
#include <stdio.h>
int main() {
    char str[100], ch;
    int i, Ascii;
    printf("Enter a string:\n");
    scanf("%[^\n]", str);
    i = 0;
    while (str[i] != '\0')  
    {
        Ascii = (int)str[i];
        if (Ascii >= 97 && Ascii <= 122)  
        {
            ch = (char)(Ascii - 32);  
            printf("%c", ch);
        }
        else 
            printf("%c", str[i]);  
            i++;
    }
    return 0;
}
