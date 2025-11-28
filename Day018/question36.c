//Q36: Write a program to find the HCF (GCD) of two numbers.

/*
Sample Test Cases:
Input 1:
12 18
Output 1:
6

Input 2:
7 9
Output 2:
1

*/
#include <stdio.h>
int main() {
    int i,a,b,gc;
    printf("Enter Value of a ");
    scanf("%d",&a);
    printf("Enter Value of b ");
    scanf("%d",&b);
    if(a>b)
    {
       for(i=a;i>1;i--)
       {
        if(a%i==0 && b%i==0)
        gc=i;
       }
       printf("%d",gc);
    }
    else
    {
        for(i=a;i>1;i--)
       {
        if(a%i==0 && b%i==0)
        gc=i;
       }
       printf("%d",gc);
    }
    return 0;
}