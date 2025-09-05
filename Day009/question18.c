//Q18: Write a program to assign grades based on a percentage input.

/*
Sample Test Cases:
Input 1:
95
Output 1:
Grade A

Input 2:
82
Output 2:
Grade B

Input 3:
68
Output 3:
Grade D

Input 4:
50
Output 4:
Grade F

*/
#include <stdio.h>
int main(){
    int gr;
    printf("Enter the Grades ");
    scanf("%d",&gr);
    if(gr >= 91 && gr <= 100)
    printf("Grade A");
    else if(gr >= 81 && gr <= 90)
    printf("Grade B");
    else if(gr >= 71 && gr <= 80)
    printf("Grade C");
    else if(gr >= 61 && gr <= 70)
    printf("Grade D");
    else if(gr >= 51 && gr <= 60)
    printf("Grade E");
    else if(gr >= 0 && gr <= 50)
    printf("Grade F");
    return 0;
}