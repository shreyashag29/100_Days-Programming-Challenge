//Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/
#include <stdio.h>
#include <string.h>

#define MAX 1000

void reverseWord(char *start, char *end) {
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char str[MAX];

    fgets(str, sizeof(str), stdin);

    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n')
        str[len - 1] = '\0';

    char *wordStart = NULL;

    for (int i = 0; i <= strlen(str); i++) {
        if (str[i] != ' ' && wordStart == NULL) {
            wordStart = &str[i];  
        }
        if ((str[i] == ' ' || str[i] == '\0') && wordStart != NULL) {
            reverseWord(wordStart, &str[i - 1]);  
            wordStart = NULL;
        }
    }

    printf("%s\n", str);

    return 0;
}
