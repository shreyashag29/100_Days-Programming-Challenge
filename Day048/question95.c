//Q95: Check if one string is a rotation of another.

/*
Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation

*/
#include <stdio.h>
#include <string.h>

#define MAX 1000

int main() {
    char s1[MAX], s2[MAX];

    if (fgets(s1, sizeof(s1), stdin) == NULL) return 0;
    if (fgets(s2, sizeof(s2), stdin) == NULL) return 0;

    size_t len1 = strlen(s1);
    if (len1 > 0 && s1[len1 - 1] == '\n') {
        s1[len1 - 1] = '\0';
        len1--;
    }

    size_t len2 = strlen(s2);
    if (len2 > 0 && s2[len2 - 1] == '\n') {
        s2[len2 - 1] = '\0';
        len2--;
    }

    if (len1 != len2) {
        printf("Not rotation\n");
        return 0;
    }

    char concat[2 * MAX];
    strcpy(concat, s1);
    strcat(concat, s1);


    if (strstr(concat, s2) != NULL) {
        printf("Rotation\n");
    } else {
        printf("Not rotation\n");
    }

    return 0;
}

