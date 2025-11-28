//Q40: Write a program to find the 1’s complement of a binary number and print it.

/*
Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/
#include <stdio.h>
int main() {
    int r,n,num,rev=0;
    printf("Enter any number ");
    scanf("%d",&n);
   
    rev=0;
     while(n!=0)
    {
        r=n%10;
        rev=(rev*10)+r;
        n=n/10;
    }
    r=1;
    while(rev!=0)
    {
        r=rev%10;
        if(r==0)
        printf("1");
        else if(r==1)
        printf("0");
        rev=rev/10;
    }
    return 0;
}