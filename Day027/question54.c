/*Q54: Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *



Sample Test Cases:
Input 1:

Output 1:
Pattern with layers of stars as shown.

*/
#include <stdio.h>

int main() {
    int i, j, k;
    for (i = 1; i <= 7; i += 2) {
        for (k = 1; k <= (7 - i) / 2; k++) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    for (i = 5; i >= 1; i -= 2) {
        
        for (k = 1; k <= (7 - i) / 2; k++) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
