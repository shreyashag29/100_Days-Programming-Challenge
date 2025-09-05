//Q17: Write a program to find the roots of a quadratic equation and categorize them.

/*
Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:
Roots are complex

*/
#include <stdio.h>
#include <math.h> 
int main() {
    double a, b, c;
    double dis, r1, r2;
    double rPart, iPart;

    printf("Enter coefficients a, b, and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

        dis = b * b - 4 * a * c;

        if (dis > 0) {
        r1 = (-b + sqrt(dis)) / (2 * a);
        r2 = (-b - sqrt(dis)) / (2 * a);
        printf("Roots are real and distinct.\n");
        printf("Root 1 = %.2lf\n", r1);
        printf("Root 2 = %.2lf\n", r2);
    }   else if (dis == 0) {
        r1 = r2 = -b / (2 * a);
        printf("Roots are real and equal.\n");
        printf("Root 1 = Root 2 = %.2lf\n", r1);
    }   else {
        rPart = -b / (2 * a);
        iPart = sqrt(-dis) / (2 * a);
        printf("Roots are complex and conjugate.\n");
        printf("Root 1 = %.2lf + %.2lfi\n", rPart, iPart);
        printf("Root 2 = %.2lf - %.2lfi\n", rPart, iPart);
    }

    return 0;
}