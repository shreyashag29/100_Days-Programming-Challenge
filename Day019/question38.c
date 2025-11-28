//Q38: Write a program to find the sum of digits of a number.

/*
Sample Test Cases:
Input 1:
123
Output 1:
6

Input 2:
999
Output 2:
27

*/
#include <stdio.h>
int main() {
    int s=0,r,num;
    printf("Enter any number ");
    scanf("%d",&num);
    while(num!=0)
    {
        r=num%10;
        s=s+r;
        num=num/10;
    }
    printf("%d",s);
    return 0;
}