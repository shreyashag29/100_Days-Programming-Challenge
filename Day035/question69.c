//Q69: Find the second largest element in an array.

/*
Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/
#include <stdio.h>

void main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int highest=arr[0];
    int second_highest = arr[0];
    for (int i=0;i<n;i++){
        if ( arr[i] > highest ) {
            highest = arr[i];
        }
    }
    
    
    for (int i=0;i<n;i++) {
        if (arr[i] > second_highest && arr[i] < highest) {
            second_highest = arr[i];
        }
    }
    
    printf("second highest element is %d",second_highest);

}