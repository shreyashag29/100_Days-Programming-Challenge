//Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

/*
Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3

*/
#include <stdio.h>
#include <string.h>

void main() {
    char s[100];
    printf("Enter string: ");
    scanf("%s", s);

    int max_len = 0, start = 0, freq[256] = {0};
    for(int i = 0; i < strlen(s); i++) {
        freq[(int)s[i]]++;
        while(freq[(int)s[i]] > 1) {
            freq[(int)s[start]]--;
            start++;
        }
        if(i - start + 1 > max_len) max_len = i - start + 1;
    }
    printf("%d", max_len);

}
