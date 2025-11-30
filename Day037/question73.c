//Q73: Find the sum of each row of a matrix and store it in an array.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15

*/
#include <stdio.h>

void main() {
    int r, c;
    printf("enter rows and columns: ");
    scanf("%d%d", &r, &c);

    int matrix[r][c];
    int sum[r];  // array to store sum of each row

    printf("enter elements:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate row sums
    for (int i = 0; i < r; i++) {
        sum[i] = 0;  
        for (int j = 0; j < c; j++) {
            sum[i] += matrix[i][j];
        }
    }

    // Print row sums
    for (int i = 0; i < r; i++) {
        printf("%d ", sum[i]);
    }
}