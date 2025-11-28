//Q32: Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/
#include <stdio.h>
int main() {
    int n,rev=0,r,num;
    printf("Enter any number ");
    scanf("%d",&n);
        
            num=n;
            rev=0;
            while(n!=0)
            {
                r=n%10;
                rev=(rev*10)+r;
                n=n/10;
            }
            if(num==rev)
            printf("Palindrome no");
            else
            printf("Not Palindrome no");
            return 0;
        }