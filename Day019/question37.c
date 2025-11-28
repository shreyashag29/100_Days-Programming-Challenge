//Q37: Write a program to find the LCM of two numbers.

/*
Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

*/
#include <stdio.h>
int main() {
    int a,b,lar,x,sm;
    printf("Enter one numbers ");
    scanf("%d",&a);
    printf("Enter one numbers ");
    scanf("%d",&b);
    if(a>b)
    {
        lar=a;
        sm=b;
    }
    else
    {
       lar=b;
       sm=a;
    }
    x=lar;
    while(lar%sm!=0)
    {
        lar=lar+sm;
    }
    printf("%d",lar);
    return 0;
}

