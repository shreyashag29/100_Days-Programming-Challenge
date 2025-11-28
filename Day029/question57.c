//question5Q57: Find the sum of array elements.

/*
Sample Test Cases:
Input 1:
4
2 4 6 8
Output 1:
20

Input 2:
3
1 1 1
Output 2:
3

*/
#include <stdio.h>
int main() {
    int n,i;
    int sum=0;
    printf("Enter size of array : ");
    scanf("%d",&n);
    int arr[n];
    for (i = 0; i < n; i++) {
    printf("Enter one element of array : ");
    scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++) {
    sum=sum+arr[i];
    }
    printf("Sum of elements of array is %d",sum);
    return 0;
}