//Q22: Write a program to find profit or loss percentage given cost price and selling price.

/*
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

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