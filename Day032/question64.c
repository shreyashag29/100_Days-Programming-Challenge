//Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/
#include <stdio.h>

int main() {
    long long num;
    scanf("%lld", &num);   
    int freq[10] = {0};    
    while (num > 0) {
        int digit = num % 10;   
        freq[digit]++;          
        num /= 10;              
    }
    int maxDigit = 0;
    for (int i = 1; i < 10; i++) {
        if (freq[i] > freq[maxDigit]) {
            maxDigit = i;
        }
    }
    printf("%d", maxDigit);
    return 0;
}
#include <stdio.h>

void main() {
    int n, digit;
    int freq[10] = {0};  
    
    printf("Enter number: ");
    scanf("%d", &n);
    
    int temp = n;
    
    while (temp > 0) {
        digit = temp % 10;
        freq[digit]++;
        temp = temp / 10;
    }
    
    int max = 0, ans = 0;
    for (int i = 0; i < 10; i++) {
        if (freq[i] > max) {
            max = freq[i];
            ans = i;
        }
    }
    
    printf("Digit that occurs the most: %d", ans);
}

