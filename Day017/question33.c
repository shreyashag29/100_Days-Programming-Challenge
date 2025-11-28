//Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/
#include <stdio.h>
int main() {
    int r,n,s=0,num;
    printf("Enter any number:  ");
    scanf("%d",&n);
    num=n;
    while(n!=0)
    {
       r=n%10;
       s=s+(r*r*r);
       n=n/10;
    }
    if(num==s)
    printf("Armstrong number");
    else 
    printf("Not a Armstrong number ");
    return 0;

}