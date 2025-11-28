//Q58: Find the maximum and minimum element in an array.

/*
Sample Test Cases:
Input 1:
5
2 9 1 4 7
Output 1:
Max=9, Min=1

Input 2:
3
10 10 10
Output 2:
Max=10, Min=10

*/
#include <stdio.h>
int main() {
    int n,i;
    int max,min;
    printf("Enter size of array : ");
    scanf("%d",&n);
    int arr[n];
    for (i = 0; i < n; i++) {
    printf("Enter one element of array : ");
    scanf("%d", &arr[i]);
    }
    min=arr[0];
    max=arr[1];
    for (i = 0; i < n; i++) {
    if(min>=arr[i])
    min=arr[i];
    if(max<=arr[i])
    max=arr[i];
    }
    printf("Maximum : %d ",max);    
    printf("Minimum : %d ",min);
    return 0;
}