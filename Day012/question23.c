//Q23: Write a program to calculate library fine based on late days as follows: 
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled.

/*
Sample Test Cases:
Input 1:
4
Output 1:
Fine ₹8

Input 2:
8
Output 2:
Fine ₹22

Input 3:
15
Output 3:
Fine ₹60

Input 4:
31
Output 4:
Membership Cancelled

*/
#include <stdio.h>

int main() {
    int days_late;
    float fine = 0.0;
    printf("Enter the number of days the book is late: ");
    scanf("%d", &days_late);
    if (days_late <= 0) {
    printf("No fine. Book returned on time or early.\n");
    } 
    else if (days_late <= 5) {
    fine = days_late * 2.0;
    printf("Fine: %.2f", fine);
    } 
    else if (days_late <= 10) {
    fine = (5 * 2.0) + ((days_late - 5) * 4.0);
    printf("Fine: %.2f", fine);
    } 
    else if (days_late <= 30) {
    fine = (5 * 2.0) + (5 * 4.0) + ((days_late - 10) * 6.0);
    printf("Fine: %.2f", fine);
    } 
    else {
    printf("Membership Cancelled due to excessive late days.\n");
    }

    return 0;
}