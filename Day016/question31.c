//Q31: Write a program to take a number as input and print its equivalent binary representation.

/*
Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/
#include <stdio.h>
#include <math.h>
int main() {
        int r,c=0,x=0,n;
        printf("Enter any number ");
        scanf("%d",&n);
        do
        {
            r=n%2;
            c+=r*(int)pow(10,x++);
            n=n/2;
        }while(n!=0);
        printf("%d",c);
        return 0;
    }
