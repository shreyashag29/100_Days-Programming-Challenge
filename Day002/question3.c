/*Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/
#include <stdio.h>
int main() {
    int le,br,p=1,a=1;
    printf("Enter length of rectangle ");
    scanf("%d", &le);
    printf("Enter width of rectangle ");
    scanf("%d", &br);
    p=2*(le+br);
    a=le*br;
    printf("Perimeter=%d, Area=%d",p,a);

    return 0;
}