//Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

/*
Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3

*/
#include <stdio.h>

int main() {
    double n1, n2, cal;
    char oper;
    printf("Enter first number: ");
    scanf("%lf", &n1);
    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &oper); 
    printf("Enter second number: ");
    scanf("%lf", &n2); 
    switch (oper) {
        case '+':
            cal = n1 + n2;
            printf("%.2lf",cal);
            break;
        case '-':
            cal = n1 - n2;
            printf("%.2lf",cal);
            break;
        case '*':
            cal = n1 * n2;
            printf(" %.2lf",cal);
            break;
        case '/':
            if (n2 != 0) {
                cal = n1 / n2;
                printf("%.2lf",cal);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        case '%':
            
            if (n2 != 0) {
                cal = (int)n1 % (int)n2;
                printf("%.2lf",cal);
            } else {
                printf("Error: Modulo by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operator entered.\n");
            break;
    }

    return 0;
}