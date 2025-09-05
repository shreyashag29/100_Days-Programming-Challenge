//Q27: Write a program to print the sum of the first n odd numbers.

/*
Sample Test Cases:
Input 1:
3
Output 1:
9

Input 2:
5
Output 2:
25

*/
#include <stdio.h>
int main() {
    int s=0,n,i;
    printf("Enter the number till which you need sum ");
    scanf("%d",&n);
    for(i=1;i<=(2*n)-1;i+=2)
    s=s+i;
    printf("%d",s);
    return 0;   
}