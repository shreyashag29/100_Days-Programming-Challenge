//Q29: Write a program to calculate the factorial of a number.

/*
Sample Test Cases:
Input 1:
5
Output 1:
120

Input 2:
3
Output 2:
6

*/
#include <stdio.h>
int main() {
    int f,i,n;
    printf("Enter the number for factorial ");
    scanf("%d",&n);
    f=1;
    for(i=1;i<=n;i++)
    f=f*i;
    printf("%d",f);
    return 0;
}