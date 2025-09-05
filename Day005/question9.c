//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

/*
Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76

*/
#include <stdio.h>
#include <math.h>
int main() {
    float pr,ra,ti,si=1,ci=1,n;
    printf("Enter the principle:");
    scanf("%f",&pr);
    printf("Enter the rate:");
    scanf("%f",&ra);
    printf("Enter the time:");
    scanf("%f",&ti);
    si=(pr*ra*ti)/100;
    ci=pr * pow((1 + ra / 100), ti) - pr;
    printf("Simple Interest=%.1f, Compound Interest=%.1f",si,ci);
    return 0;
}