//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

/*
Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/
#include <stdio.h>
int main(){
    int time,sec=1,hours=1,min=1;
    printf("Enter time in seconds:");
    scanf("%d",&time);
    hours=time/(60*60);
    min=(time/60)-(hours*60);
    sec=time-((hours*(60*60))+(min*60));
    printf("%d:%d:%d",hours,min,sec);
    return 0;  
}