//Q21: Write a program to display the month name and number of days using switch-case for a given month number.

/*
Sample Test Cases:
Input 1:
2
Output 1:
February, 28 days

Input 2:
12
Output 2:
December, 31 days

*/
#include <stdio.h>
int main() {
    int cp,sp,pp=1,lp=1;
    char sym='%';
    printf("Enter Cost Price ");
    scanf("%d",&cp);
    printf("Enter Selling Price ");
    scanf("%d",&sp);
    if(sp>cp)
    {
        pp=(((sp-cp)*100)/cp);
        printf("Profit %d%c",pp,sym);
    }
    else if(cp>sp)
    {
        lp=(((cp-sp)*100)/cp);
        printf("Loss %d%c",lp,sym);
    }
    else 
    printf("No profit no loss");
    return 0;
}