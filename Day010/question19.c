//Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

/*
Sample Test Cases:
Input 1:
3 3 3
Output 1:
Equilateral

Input 2:
3 3 4
Output 2:
Isosceles

Input 3:
2 3 4
Output 3:
Scalene

*/
#include<stdio.h>
int main() {
    float side1,side2,side3;
    printf("Enter the side of triangle ");
    scanf("%d",&side1);
    printf("Enter the side of triangle ");
    scanf("%d",&side2);
    printf("Enter the side of triangle ");
    scanf("%d",&side3);
    if(side1 == side2 && side2 == side3)
    printf("Triangle is Equilateral ");
    else if(side1 == side2 || side2 == side3 || side1 == side3)
    printf("Triangle is Isosceles ");
    else 
    printf("Triangle is Scalene");
    return 0;

}