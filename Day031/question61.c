//Q61: Search for an element in an array using linear search.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1

*/
#include <stdio.h>
int main() {
    int n,i,num;
    int c=0;
    printf("Enter size of array : ");
    scanf("%d",&n);
    printf("Enter the number you want to search : ");
    scanf("%d",&num);
    int arr[n];
    for(i=0;i<n;i++)
    {
    printf("Enter the elements of array: ");
    scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(num==arr[i])
        {
        printf("Found at index %d \n",i);
        c++;
        }
    }
    if(c==0)
    printf("-1");
    return 0;
}


    