//Q55: Write a program to print all the prime numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
10
Output 1:
2 3 5 7

Input 2:
20
Output 2:
2 3 5 7 11 13 17 19

*/
#include <stdio.h>
int main() {
int i,j,n;
printf("Enter Number till which you need to check prime number ");
scanf("%d",&n);
int c;
for(i=1;i<=n;i++)
{
    c=0;
  for(j=1;j<=i;j++)
  {
    if(i%j==0)
    c++;
  }
  if(c==2)
  printf("%d\n",i);
}
  return 0;
}