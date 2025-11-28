//Q60: Count positive, negative, and zero elements in an array.

/*
Sample Test Cases:
Input 1:
5
-1 0 1 2 -2
Output 1:
Positive=2, Negative=2, Zero=1

*/
#include <stdio.h>
int main() {
    int n,i;
    int nc=0,pc=0,zero=0;
    printf("Enter size of array : ");
    scanf("%d",&n);
    int arr[n];
    for (i = 0; i < n; i++) {
    printf("Enter one element of array : ");
    scanf("%d", &arr[i]);
    }
    for(i=0;i<n;i++)
    {
    if(arr[i]>0)
    pc++;
    else if(arr[i]<0)
    nc++;
    else
    zero++;
    }
    printf("Positive number : %d \n",pc);
    printf("Negative number : %d \n",nc);
    printf("Zeros : %d \n",zero);
    return 0;
}


